#include "headers.h"
#include "functions.h"

void admin_login()
{
    system("cls");

    char user[20], pass[20];
    const char adminUser[] = "Kuet_Admin";
    const char adminPass[] = "KueT_adMin_1967";
    char ch;
    int i=0;

    printf("\n\n ---- Admin Login Panel ---- \n");
    printf("\n\n Enter username: ");
    scanf(" %s", user);
    printf(" Enter password: ");
    while (1)
    {
        ch = getch();
        if (ch == '\n' || ch == '\r')
        {
            pass[i] = '\0';
            break;
        }
        else if (ch == '\b'&& i>0)
        {
            i--;
            printf("\b \b");
        }
        else
        {
            pass[i++] = ch;
            printf("*");
        }
    }

    if (strcmp(user, adminUser) == 0 && strcmp(pass, adminPass) == 0)
    {
        printf("\n\n Login successful!!\n");
        delay(2);
        menu();
    }
    else
    {
        printf("\n\n Invalid credentials. Please try again.\n");
        delay(2);
        login();
    }
}
