#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *) malloc(n * sizeof(int));

    ptr[0] = 4;
    ptr[1] = 7;
    printf("%d", ptr[0]);

    return 0;
}