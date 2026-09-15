#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("Alok.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The number read from the file is %d\n", num);
    fscanf(ptr, "%d", &num);
    printf("The number read from the file is %d\n", num);

    return 0;
}