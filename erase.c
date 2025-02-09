#include "headers.h"
#include "functions.h"


void erase()
{
    system("cls");

    int border;
    int found=0;

    FILE *erace,*temp;
    data dilit;

    erace=fopen("record.dat","r");
    temp=fopen("temp.dat","w");

    again:

    printf("\n\n\tRemove the student with Border No. : ");
    scanf("%d", &border);

    while (fscanf(erace, "%d . %s %d %s %d %s %s %s %s %s %s %s\n",
                  &dilit.border_no, dilit.name, &dilit.roll, dilit.department, &dilit.room_no,
                  dilit.city, dilit.email, dilit.phone_no, dilit.father_name, dilit.father_phone_no, dilit.messing, dilit.rent) != EOF) {
        if (border == dilit.border_no) {
            printf("\n\n\tStudent Details:\n\n");
            printf("  Border No: %d\n  Name: %s\n  Roll No: %d\n  Department: %s\n  Room No: %d\n  Hometown: %s\n  Email: %s\n  Phone No: %s\n  Father's Name: %s\n  Father's Phone: %s\n  Dining: %s\n  Rent: %s\n",
                   dilit.border_no, dilit.name, dilit.roll, dilit.department, dilit.room_no,
                   dilit.city, dilit.email, dilit.phone_no, dilit.father_name, dilit.father_phone_no, dilit.messing, dilit.rent);
            found = 1;
        } else {
            fprintf(temp, "%d . %-15s %d %-4s %d %-10s %-26s %-12s %-15s %-12s %-3s %-4s\n",
                    dilit.border_no, dilit.name, dilit.roll, dilit.department, dilit.room_no,
                    dilit.city, dilit.email, dilit.phone_no, dilit.father_name, dilit.father_phone_no, dilit.messing, dilit.rent);
        }
    }

    fclose(erace);
    fclose(temp);

    if (found)
    {
        remove("record.dat");
        rename("temp.dat", "record.dat");
        printf("\n  The record for Border No %d has been deleted!!\n", border);
    }
    else
    {
        printf("\n\n  No record found for Border No %d!\n", border);
        remove("temp.dat");

        int tryy;
        printf("\n\n  Enter 1 for trying again ... ");
        scanf("%d",&tryy);

        if (tryy==1) { goto again; }
    }
    admin_choice();
}

