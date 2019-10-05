1. buf_push() doesn't work in a for loop.<br/>

For example: following code works fine:

```c
    int* buf = NULL;
    buf_push(buf, 40);
    buf_push(buf, 30);
    buf_push(buf, 20);
    buf_push(buf, 10);
    for (int i = 1; i < buf_len(buf); i++)
        printf("%d\n", buf[i]);
```

But following code prints nothing:

```c
    int* buf = NULL;
    for (int i = 40; i > 0; i-=10){
        buf_push(buf, i);
    }
    for (int i = 1; i < buf_len(buf); i++)
        printf("%d\n", buf[i]);
```

