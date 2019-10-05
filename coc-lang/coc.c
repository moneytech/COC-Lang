#include<stdio.h>
#include<stdint.h>
#include<stddef.h>
#include<assert.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX(x, y) (((x) >= (y)) ? (x) : (y))

// Custom malloc and realloc for Stretchy 

void *xrealloc(void* ptr, size_t num_bytes) {
	ptr = realloc(ptr, num_bytes);
	if (!ptr) {
		perror("xrealloc failed.\n");
		exit(1);
	}
	return ptr;
}

void *xmalloc(size_t num_bytes) {
	void* ptr = malloc(num_bytes);
	if (!ptr) {
		perror("xmalloc failed.\n");
		exit(1);
	}
	return ptr;
}

// Stretchy Buffers (invented by Sean Barrett)
typedef struct BufHdr {
	size_t len;
	size_t cap;
	char buf[0];
} BufHdr;

#define buf__hdr(b) ((BufHdr*)((char*)b - offsetof(BufHdr, buf)))
#define buf__fits(b, n) (buf_len(b) + (n) <= buf_cap(b))
#define buf__fit(b, n) (buf__fits(b, n) ? 0 : ((b) = buf__grow((b), buf_len(b) + (n), sizeof(*(b)))))

#define buf_len(b) ( (b) ? (buf__hdr(b)->len) : 0)
#define buf_cap(b) ( (b) ? (buf__hdr(b)->cap) : 0)
#define buf_push(b, x) ( buf__fit(b, 1), (b)[buf_len(b)] = (x), buf__hdr(b)->len++ )
#define buf_free(b) ((b) ? free(buf__hdr(b)) : 0 )

void* buf__grow(const void* buf, size_t new_len, size_t elem_size) {
	size_t new_cap = MAX(1 + 2*buf_cap(buf), new_len);
	assert(new_len <= new_cap);
	size_t new_size = offsetof(BufHdr, buf) + new_cap*elem_size;
	BufHdr* new_hdr;
	if (buf) {
		new_hdr = xrealloc(buf__hdr(buf), new_size);
	}
	else {
		new_hdr = xmalloc(new_size);
		new_hdr->len = 0;
	}
	new_hdr->cap = new_cap;
	return new_hdr->buf;
}

void buf_test() {
    int *mybuf = NULL;
    int N = 100;
    for (int i = 0; i < N; i++) {
        buf_push(mybuf, i);
        printf("%d ", mybuf[i]);
    }
    printf("\n");
    buf_free(mybuf);
}

int main(int argc, char** argv) {
	buf_test();
	return 0;
}