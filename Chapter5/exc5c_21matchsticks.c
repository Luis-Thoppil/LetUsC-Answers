#include <stdio.h>

int main() {
    int msticks = 21, turn, rturn, i = 1;
    printf("There are 21 matchsticks to begin with. First take 1, 2, 3 or 4 matchsticks, then the computer will take it's turn. Repeat this. Whoever has the last matchstick loses. EASY MODE :)");
    while (msticks != 1) {
        printf("\nInput number of matchsticks taken this turn (1-4):\n");
        scanf("%d", &turn);
        msticks = msticks-turn;
        rturn = ((msticks-1) % 5);
        msticks = msticks - rturn;
        printf("Robot chooses, %d. There are now %d matchsticks left. ", rturn, msticks);
    }
    printf("You have the last matchstick HA HA HA! And that was in easy mode! \nTry your luck next time!");
    return 0;
}