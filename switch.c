#include <stdio.h>
int main()
{
    int choice;
    printf("1. Alok\n");
    printf("2.Aditya\n");
    printf("3.Arnav\n");
    printf("Enter your choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You selected Alok\n");
        break;
    case 2:
        printf("You selected Aditya\n");
        break;
    case 3:
        printf("You selected Arnav\n");
        break;
    default:
        printf("Invalid choice\n");
    }
}