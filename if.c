#include <stdio.h>

void main() {
    printf("Enter a single digit for foo: ");
    int foo = getchar() - '0';  // Convert ASCII digit to number

    // Clear the newline character from input buffer
    while (getchar() != '\n');

    printf("Enter a single digit for bar: ");
    int bar = getchar() - '0';  // Convert ASCII digit to number
    printf("foo:%d, bar:%d\n", foo, bar);

    if(foo<bar){
        printf("foo<bar\n");
    }else {
        printf("bar<foo\n");
    }
}
