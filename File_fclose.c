#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("Alok3.txt", "r");
    if (ptr == NULL)
    {
        printf("File does not exist\n");

    }
    else
    { 
    
    
    int num;
    fscanf(ptr, "%d", &num);
    printf("The number read from the file is %d\n", num);
    fscanf(ptr, "%d", &num);
    printf("The number read from the file is %d\n", num);
    }

    fclose(ptr);

    return 0;
}