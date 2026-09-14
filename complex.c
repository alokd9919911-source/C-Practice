#include <stdio.h>

typedef struct
{
    int real;
    int imaginary;
} Complex;

int main()
{
    Complex c = {3, 4};
    printf("complex number is %d+%di\n", c.real, c.imaginary);
    return 0;
}