#include "headers.h"
#include "functions.h"

void stud_login()
{
    system("cls");
    char student[20], S_pass[20];
    const char stud_name[] = "StudentofKUET" ;
    const char stud_pass[] = "KueT_StudenT_2003" ;
    char ch;
    int i=0;

    printf("\n\n ---- Student Login Panel ---- \n");
    printf("\n\n  Enter username: ");
    scanf(" %s", student);
    printf("  Enter password: ");
    while (1)
    {
        ch = getch();
        if (ch == '\n' || ch == '\r')
        {
            S_pass[i] = '\0';
            break;
        }
        else if (ch == '\b' && i>0)
        {
            i--;
            printf("\b \b");
        }
        else
        {
            S_pass[i++] = ch;
            printf("*");
        }
    }

    int correct_user = 1; //flag
    for (int i = 0; stud_name[i] != '\0' || student[i] != '\0'; i++)
    {
        if (stud_name[i] != student[i])
        {
            correct_user = 0;
            break;
        }
    }

    int correct_pass = 1; //flag
    for (int i = 0; stud_pass[i] != '\0' || S_pass[i] != '\0'; i++)
    {
        if (stud_pass[i] != S_pass[i])
        {
            correct_pass = 0;
            break;
        }
    }

    if (correct_user && correct_pass)
    {
        printf("\n\n  Login successful!!\n");
        delay(1);
        stud_menu();
    }
    else
    {
        printf("\n\n  Invalid credentials. Please try again.\n");
        delay(2);
        login();
    }
}
