#include "headers.h"
#include "functions.h"

void view_list(int *usertype)
{
    int admin=1;
    int student=2;

    system("cls");
    delay(1);
    data list;

    FILE *view;
    view=fopen("record.dat","r");

    if (view == NULL)
    {
        printf("\nError: Could not open file!\n");
        return;
    }

    printf("\n BORDER NO   NAME\tROLL   DEPT  ROOM HOMETOWN\t\tEMAIL\n");
    printf("----------------------------------------------------------------------------------\n");

    while (fscanf(view,"%d . %s %d %s %d %s %s %s %s %s %s %s\n",
                  &list.border_no, list.name, &list.roll, list.department, &list.room_no,
                  list.city, list.email, list.phone_no, list.father_name, list.father_phone_no, list.messing, list.rent) != EOF)
    {
          printf(" %d . %-15s %d %-4s %d %-10s %-26s \n",
            list.border_no,list.name,list.roll,list.department,list.room_no,list.city,list.email);

    }

    fclose(view);

    if (*usertype ==1) { choice(&admin); }
    if (*usertype ==2) { choice(&student); }
}


