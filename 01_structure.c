#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2, e3;

    printf("Enter the code of employee e1 code\n");
    scanf("%d", &e1.code);

    printf("Enter the salary of employee e1 salary\n");

    scanf("%f", &e1.salary);

    printf("Enter the name of employee e1 name\n");
    scanf("%s", e1.name);

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);

    printf("Enter the code of employee e2 code\n");
    scanf("%d", &e2.code);

    printf("Enter the salary of employee e2 salary\n");

    scanf("%f", &e2.salary);

    printf("Enter the name of employee e2 name\n");
    scanf("%s", e2.name);
    printf("%d %f %s\n", e2.code, e2.salary, e2.name);
    printf("Enter the code of employee e3 code\n");
    scanf("%d", &e3.code);

    printf("Enter the salary of employee e3 salary\n");

    scanf("%f", &e3.salary);

    printf("Enter the name of employee e3 name\n");
    scanf("%s", e3.name);
    printf("%d %f %s\n", e3.code, e3.salary, e3.name);
    printf("\n");

    return 0;
}