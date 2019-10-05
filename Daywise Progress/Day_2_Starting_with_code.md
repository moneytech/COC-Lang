# Let's start writing some code in C

The first step in making a language of own is to make "a lexer". 
But before we start coding that, we need to build some basic data
strutures for us such as dynamic arrays, linear hashtables which
will store [string interns](https://en.wikipedia.org/wiki/String_interning), etc. <br/>

To make our own dynamic arrays in C, we need to implement something
called as **Stretchy Buffers**. This is how we use them:

```c
	int* buf = NULL;
	buf_push (buf, 30);
	buf_push (buf, 20);
	buf_push (buf, 10);
	for (int i = 0; i < buf_len(buf); i++)
		printf("%d\n", buf[i]);
	buf_free(buf);
```

In the first line we declared a buffer which will store integers.
To add integers in them, we call a macro implemented function 
buf_push() and pass the name of the buffer and the integer we need
to push onto the buffer as its arguments. This is somewhat similar
to std::vector::push_back() in C++. <br/>

When we declare integer pointer buf as NULL, it is actually a buffer 
of length 0. When we push 30 in that buffer, it now gets some memory
and it points to that memory containing 30. The next element pushed
will be stored after the element 30 in memory. <br/>

Once we have successfully pushed the elements into our buffer, we should
be able to access and use them. So to do so, we first require the number
of elements stored in the buffer. Now using some pointer arithmetic tricks,
buf_len() function calculates that for us. And since 'buf' acts just like
a pointer to some memory, we can access it using the array-indexing operators.
And finally once we have used the memory and we don't need it now, we should
free the memory as well using buf_free() function.<br/>

Now we need to implement these three basic strechy buffer functions. We know
the user may also need a buffer for storing floating numbers. So behind the
scenes, managing a buffer is alot more task than what it seems as just a pointer.
Let's see how we implement it.<br/>

We create a structure called "Buffer Header" which will store some information
regarding buffer like its length, max capacity and the buffer itself.

```c
	typedef struct BufHdr {
		size_t len;
		size_t cap;
		char buf[0];	// allowed since C99
	} BufHdr;
```
One thing which may seem weird is declaring an array of length zero. The pre-C99
idea was to actually make an array of atleast size 1 and grow or shrink it later
accordingly. But since C99 we can make such declarations. This just means, 'buf'
is a pointer to character which points nowhere in the memory as of now. And the reason
we chose char pointer instead of void pointer and later typecasting it to pointer
to required data type is because we want to do some pointer arithmetic which is not
valid with void pointers.<br/>

Now comes the main part - implementing function based macros. We use this convention now:
the macro functions which contain a single underscore after the buf are public macros
and are intented to be used by user whereas the functions with double underscores are our
helper functions.

```c
	#define buf__hdr(b)	((BufHdr*)((char*)b - offsetof(BufHdr, buf)))

	#define buf_len(b) ( (b) ? buf__hdr(b)->len : 0)
	#define buf_cap(b) ( (b) ? buf__hdr(b)->cap : 0)

	#define buf_push(b, x) ( buf__fit(b, 1), (b)[buf_len(b)++] = (x) )
	#define buf__fits(b, n) (buf_len(b) + (n) <= buf_cap(b))
	#define buf__fit(b, n) (buf__fits(b, n) ? 0 : (b) = buf__grow((b), buf_len(b)+(n), sizeof(*(b))))
	#define buf_free(b) ((b) ? free(buf__hdr(b)) : 0 )

	void* buf__grow(const void* buf, size_t new_len, size_t elem_size) {
		size_t new_cap = MAX(2 * buf_cap(buf) + 1, new_len);
		assert(new_len <= new_cap);
		size_t new_size = offsetof(BufHdr, buf) + new_cap * elem_size;
		BufHdr* new_hdr;
		if (buf)
			new_hdr = realloc(buf__hdr(buf), new_size);
		else {
			new_hdr = malloc(new_size);
			new_hdr->len = 0;
		}
		new_hdr->len = new_cap;
		return new_hdr->buf;
	}
```

We know our struct stores three things. So offsetof() function calculates how many 
bytes we need to go in a structure to reach to the byte from where buffer actually
starts. So in case where size_t is 8 bytes each, we need an offset of 16 bytes 
from the start of struct to actually reach to the buffer inside the struct. Using this
macro we can easily write buf_len() and buf_cap() macros.<br/>

The another important macro is buf_push(). It first ensures that buf should be able to
fit one more element and then pushes the element like a simple array append. buf_fit()
checks if buf could fit 'n' elements. If yes, do nothing or else grow the buf size.
Now buf__grow() has many steps. Implementing it as a macro will cause repeated copy
paste of these steps at places where ever we call buf_push(). So our instruction level
code will become alot more clumsy than thought of. Hence it is implemented as a function.
This uses standard 'Table-Doubling' technique to enusre amortized O(1) time complexity
array pushes.<br/>

# Let's start with Lexing

