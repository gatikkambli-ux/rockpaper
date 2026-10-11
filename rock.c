
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user, computer;

    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &user);

    if (user < 1 || user > 3)
    {
        printf("Invalid choice!\n");
        return 0;
    }

    srand(time(0));
    computer = rand() % 3 + 1;

    printf("You chose: %d\n", user);
    printf("Computer chose: %d\n", computer);

    if (user == computer)
        printf("It's a draw!\n");
    else if ((user == 1 && computer == 3) ||
             (user == 2 && computer == 1) ||
             (user == 3 && computer == 2))
        printf("You win!\n");
    else
        printf("Computer wins!\n");

    return 0;
}
