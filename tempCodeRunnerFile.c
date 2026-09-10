#include<stdio.h>
void_change_the_value_of_thirty_times (int*);
void_change_the_value_of_thirty_times (int* a) {
    *a = *a * 30;

    int main() {
        int x = 5;
        printf("The value of x is %d\n", x);
        changethe_value_of_thirty_times(&x);
        printf("The new value of x is: %d\n", *x);
        return 0;
    }
}