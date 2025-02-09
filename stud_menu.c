#include "headers.h"
#include "functions.h"

void stud_menu()
{
    int student=2;

    system("cls");
    int choose;

    printf("\n\n\t\t\t          HALL  MANAGEMENT  SYSTEM   \t\t");
    printf("\n\n\t\t\t                 MAIN MENU  \t\t ");
    printf("\n\n\n");

    printf("\t\t\t      [1]--> Enter your information \n");
    printf("\t\t\t      [2]--> View all students list  \n");
    printf("\t\t\n\n");
    printf("\t\t\t      [3]--> Go to LoginPage...   \n");
    printf("\n\t\t\t    Please Enter Your Choice(4 to exit): ");
    scanf("%d",&choose);

    switch(choose)
    {
     case 1:  new_entry(&student);
     break;
     case 2:  view_list(&student);
     break;
     case 3: delay(2);
             login();
     break;
     case 4:  exit_code();
     break;
     default:   printf("\n\n\t\t Invalid Option!..Please choose one of the followings..!! \a");
                delay(2);
                stud_menu();
    }
}
