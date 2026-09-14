#include <stdio.h>

struct vector
{
    int i;
    int j;
    int k;
};

int main()
{
    struct vector v = {2, 3 , 4};
    printf(" the value of vector is %di+%dj+%dk\n", v.i, v.j ,v.k);
    return 0;
}