#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer;

    printf("===== WATER SNAKE GUN GAME =====\n");
    printf("1. Water\n");
    printf("2. Snake\n");
    printf("3. Gun\n");

    printf("\nEnter your choice: ");
    scanf("%d", &player);

    // Computer choice
    srand(time(0));
    computer = rand() % 3+1;

    printf("Computer choice: %d\n", computer);

    // Result
    if (player == computer) {
        printf("Result: DRAW!\n");
    }
    else if ((player == 1 && computer == 2) ||
             (player == 2 && computer == 3) ||
             (player == 3 && computer == 1)) {
        printf("Result: YOU WIN! 🎉\n");
    }
    else if (player >= 1 && player <= 3) {
        printf("Result: COMPUTER WINS! 🤖\n");
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
} 