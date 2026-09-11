#include <stdio.h>
int main()
{
    int marks[] = {90, 20, 30, 40, 50};
    int *ptr = &marks[0];
    for (int i = 0; i < 5; i++)
    {
        // printf("the marks are %d, %d\n", marks[i], *(ptr + i));

        printf("the marks at index %d is %d", i, *ptr);
        ptr++;
    }
    return 0;
}