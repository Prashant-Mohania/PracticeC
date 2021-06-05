#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int RandomNumberGenerator(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    int playerScore = 0, compScore = 0, temp;
    char name[10], g, playerChar, compChar;
    char dict[] = {'R', 'P', 'S'};
    printf("\t\t\tRock, Paper and Scissor\n");
    printf("Enter your name:-");
    scanf("%s", &name);
    getchar();
game:
    playerScore = 0;
    compScore = 0;
    printf("\nWelcome %s to the Rock, Paper and Scissor Game\n\n\n", name);

    for (int i = 0; i < 3; i++)
    {
        // user input
        printf("Choose any one (1 or 2 or 3):- ");
        printf("1:- Rock, 2:- Paper, 3:- Scissor\n");
        printf("Your's turn:-");
        scanf("%d", &temp);
        getchar();
        playerChar = temp;
        printf("\nYou choose:- %c\n\n", dict[playerChar - 1]);

        // generate CPU input
        printf("1:- Rock, 2:- Paper, 3:- Scissor\n");
        printf("Computer's turn:- ");
        compChar = RandomNumberGenerator(3) + 1;
        printf("%d\n", (int)compChar);
        printf("Computer choose:- %c\n\n", dict[compChar - 1]);

        if (playerChar == compChar)
        {
            printf("DRAWN!!!\n\n");
            printf("%s's:- %d       Computer's:- %d\n\n\n", name, playerScore, compScore);
        }
        else if (playerChar == 1 && compChar == 3 || playerChar == 2 && compChar == 1 || playerChar == 3 && compChar == 2)
        {
            playerScore++;
            printf("You got it!!!\n\n");
            printf("%s's:- %d       Computer's:- %d\n\n\n", name, playerScore, compScore);
        }
        else if (compChar == 1 && playerChar == 3 || compChar == 2 && playerChar == 1 || compChar == 3 && playerChar == 2)
        {
            compScore++;
            printf("Computer got it!!!\n\n");
            printf("%s's:- %d       Computer's:- %d\n\n\n", name, playerScore, compScore);
        }
    }
    if (playerScore > compScore)
    {
        printf("HURRAH!!!  You Win");
    }
    else if (playerScore == compScore)
    {
        printf("Match DRAWN!!!\n\n");
    }
    else
    {
        printf("Computer Win");
    }
    printf("\n\nYes:- Y     NO:- N\n");
    printf("You want to play again:-");
    scanf("%c", &g);
    if (g == 'Y' || g == 'y')
    {
        goto game;
    }
    else if (g == 'N' || g == 'n')
    {
        goto exit;
    }
    else
    {
        printf("Invalled input");
    }
exit:
    printf("Quit");
    getchar();
    return 0;
}