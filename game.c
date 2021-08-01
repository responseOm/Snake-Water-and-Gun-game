#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakewatergun(char you, char comp);
// return 1 if you win, -1 if you lose and 0 if draw

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    comp = 's';
    printf("Enter 's' for Snake, 'w' for Water and 'g' for Gun\n");
    scanf("%c", &you);
    int result = snakewatergun(you, comp);
    printf("You choose %c and computer choose %c ", you, comp);
    if (result == 0)
    {
        printf("Game Draw!\n");
    }
    else if (result == 1)
    {
        printf("You Win!");
    }
    else
    {
        printf("You Lose!");
    }

    return 0;
}

int snakewatergun(char you, char comp)
{
    // draw condition
    // case covered
    // ss
    // gg
    // ww

    if (you == comp)
    {
        return 0;
    }
    // not draw condition
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    if (you == 's' && comp == 'g')
    {
        return -1;
    }

    else if (you == 'g' && comp == 's')
    {
        return 1;
    }

    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}
