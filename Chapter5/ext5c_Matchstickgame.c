#include <stdio.h>

int main() {
    int msticks = 21, turn, rturn, gamemode;
    printf("There are 21 matchsticks to begin with. First take 1, 2, 3 or 4 matchsticks, then the computer will take it's turn. Repeat this. Whoever has the last matchstick loses.\nPlease choose the gamemode:\n1 - easy\n2 - medium\n3 - hard\n");
    
    scanf("%d", &gamemode);
    while (gamemode < 1 || gamemode > 3) {
        printf("Invalid input! Please enter 1, 2, or 3:\n");
        scanf("%d", &gamemode);
    }

    while (msticks > 1) {
        printf("\nInput number of matchsticks taken this turn (1-4):\n");
        scanf("%d", &turn);

        while (turn < 1 || turn > 4 || turn > msticks - 1) {
            if (turn > msticks - 1)
                printf("You can't take more matchsticks than are left!\n");
            else
                printf("Invalid input! Please enter a number from 1 to 4:\n");
            scanf("%d", &turn);
        }

        msticks = msticks-turn;
        rturn = ((msticks-1) % 5);
        msticks = msticks - rturn;
        printf("\nRobot chooses, %d. There are now %d matchstick/s left. ", rturn, msticks);
    }
    if (gamemode == 1)
    printf("You have the last matchstick HA HA HA! And that was in EASY mode! What an embarrasment LOLLLLLL\n");
    if (gamemode == 2)
    printf("You have the last matchstick, you lose. \n");
    if (gamemode == 3)
    printf("You have the last matchstick, you lost! But hey at least you lost against hard bot. \nTry your luck next time!");
    return 0;
}