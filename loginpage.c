#include "headers.h"
#include "functions.h"

void login()
{
    system("cls");
    int choice;

        printf("\n   ===== Hall Management System =====  \n\n");
        printf("    1. Admin Login\n");
        printf("    2. Student Login\n");
        printf("    3. Exit\n");
        printf("\n   Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                admin_login();
                break;
            case 2:
                stud_login();
                break;
            case 3:
                exit_code();
                break;
            default:
                printf("\n   Invalid choice. Please try again!! \n");
                delay(2);
                login();
        }

}
