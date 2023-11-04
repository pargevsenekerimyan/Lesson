#include <stdio.h>

int main()
{
    extern int a;
    extern int b;
    extern int c;
    c = a + b;	
    printf("%d\n", c);

}

