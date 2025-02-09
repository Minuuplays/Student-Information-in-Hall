#include "headers.h"
#include "functions.h"

void admin_choice()
{
        int choose;
        printf("\n\n Press 1 to go to the main menu or 0 to exit the system >> ");
        scanf("%d", &choose);

        if (choose == 1)
        {
            menu();
        }
        else if (choose == 0)
        {
            exit_code();
        }
        else
        {
            printf("\n\t\tInvalid input! Please try again.\a\n");
            delay(2);
            admin_choice() ;
        }
}

