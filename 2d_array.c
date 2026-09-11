#include <stdio.h>
int main()
{
    int arr[3][2];
    int i, j;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            printf("the value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
            scanf("%d", &arr[i][j]);
        }
    }
printf("\nDisplaying the values of the array:\n");
for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            printf("the value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        
        }
    }
   
    return 0;
}