int main(void)
{
    printf("hello world!\n");
}

// buggy0.c:3:5: note: include the header <stdio.h> or explicitly provide a declaration for 'printf'
// -- help50 make buggy0
// Did you forget to #include <stdio.h> (in which printf is declared) atop your file?
