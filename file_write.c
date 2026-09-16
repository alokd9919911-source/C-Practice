#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Alok.txt", "w");
    int num = 369;
    fprintf(fptr, "%d", num);
    fclose(fptr);



    return 0;
}