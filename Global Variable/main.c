#include <stdio.h>

int main()
{
    extern int a;
    extern int b;
    extern int c;	
    printf("%d, %d, %d", c, a, b);

}

