#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int getScore(string player);

int main(void)
{
    string player1;
    string player2;

    // get string input from user
    do
    {
        player1 = get_string("Player 1: ");
    }
    while (player1[0] == '\0');
    do
    {
        player2 = get_string("Player 2: ");
    }
    while (player2[0] == '\0');
    // convert to uppercase
    for (int i = 0; i < strlen(player1); i++)
    {
        player1[i] = toupper(player1[i]);
    }
    for (int i = 0; i < strlen(player2); i++)
    {
        player2[i] = toupper(player2[i]);
    }
    // get scores
    int score_player1 = getScore(player1);
    int score_player2 = getScore(player2);
    // see who wins
    if (score_player1 > score_player2)
    {
        printf("Player 1 Wins!\n");
    }
    else if (score_player1 < score_player2)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie\n");
    }
}

int getScore(string player)
{
    int sum = 0;
    for (int i = 0; i < strlen(player); i++)
    {
        switch (player[i])
        {
            case 'A':
                sum += 1;
                continue;
            case 'B':
                sum += 3;
                continue;
            case 'C':
                sum += 3;
                continue;
            case 'D':
                sum += 2;
                continue;
            case 'E':
                sum += 1;
                continue;
            case 'F':
                sum += 4;
                continue;
            case 'G':
                sum += 2;
                continue;
            case 'H':
                sum += 2;
                continue;
            case 'I':
                sum += 1;
                continue;
            case 'J':
                sum += 8;
                continue;
            case 'K':
                sum += 5;
                continue;
            case 'L':
                sum += 1;
                continue;
            case 'M':
                sum += 3;
                continue;
            case 'N':
                sum += 1;
                continue;
            case 'O':
                sum += 1;
                continue;
            case 'P':
                sum += 3;
                continue;
            case 'Q':
                sum += 10;
                continue;
            case 'R':
                sum += 1;
                continue;
            case 'S':
                sum += 1;
                continue;
            case 'T':
                sum += 1;
                continue;
            case 'U':
                sum += 1;
                continue;
            case 'V':
                sum += 4;
                continue;
            case 'W':
                sum += 4;
                continue;
            case 'X':
                sum += 8;
                continue;
            case 'Y':
                sum += 4;
                continue;
            case 'Z':
                sum += 10;
                continue;
            default:
                continue;
        }
    }
    return sum;
}
