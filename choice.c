#include "headers.h"
#include "functions.h"

void choice(int *user)
{
        int choose;
        printf("\n\n Press 1 to go to the main menu or 0 to exit the system >> ");
        scanf("%d", &choose);

        if (choose == 1)
        {
            if (*user==1)  // 1 for admin
            {
                menu();
            }
            else if (*user == 2) // 2 for student
            {
                stud_menu();
            }
        }
        else if (choose == 0)
        {
            exit_code();
        }
        else
        {
            printf("\n\t\tInvalid input! Please try again.\a\n");
            delay(2);
            choice(user) ;
        }
}
