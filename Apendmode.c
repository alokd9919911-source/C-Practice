#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Alok.txt", "r");
    char c = fgetc(fptr);
    printf("%c", c);
    // fput(fptr, c);



    return 0;
}