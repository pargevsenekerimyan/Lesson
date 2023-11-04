#include <stdio.h>

int main()
{
    extern int a;
    extern int b;
<<<<<<< HEAD
    extern int c;	
    c = a + b;
    printf("%d,\n", c);
=======
    extern int c;
    c = a + b;	
    printf("%d\n", c);
>>>>>>> 61a80e1406fbc47e61a72cf9d41a9a7f4fb7f031

}

