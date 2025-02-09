#include "headers.h"
#include "functions.h"

void menu()
{
    int admin=1;

    system("cls");
    int choose;

    printf("\n\n\t\t\t          HALL  MANAGEMENT  SYSTEM   \t\t");
    printf("\n\n\t\t\t                 MAIN MENU  \t\t ");
    printf("\n\n\n");

    printf("\t\t\t      [1]--> Enter new Student \n");
    printf("\t\t\t      [2]--> Update student information \n");
    printf("\t\t\t      [3]--> Check student details    \n");
    printf("\t\t\t      [4]--> Remove existing Student    \n");
    printf("\t\t\t      [5]--> View all students list  \n");
    printf("\t\t\n\n");
    printf("\t\t\t      [6]--> Go to LoginPage...   \n");
    printf("\n\t\t\t    Please Enter Your Choice(7 to exit): ");
    scanf("%d",&choose);

    switch(choose)
    {
     case 1:  new_entry(&admin);
     break;
     case 2:  edit();
     break;
     case 3:  system("cls");  details();
     break;
     case 4:  erase();
     break;
     case 5:  view_list(&admin);
     break;
     case 6: delay(2);
             login();
     break;
     case 7:  exit_code();
     break;
     default:   printf("\n\n\t\t Invalid Option!..Please choose one of the followings..!! \a");
                delay(2);
                menu();
    }
}
