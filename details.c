#include "headers.h"
#include "functions.h"

void details()
{

    data see;
    FILE *ptr;

    int border;
    int found = 0;

    ptr = fopen("record.dat", "r");

    printf("\n\n\tEnter Border No. of the student: ");
    scanf("%d", &border);

    while (fscanf(ptr, "%d . %s %d %s %d %s %s %s %s %s %s %s\n",
                  &see.border_no, see.name, &see.roll, see.department, &see.room_no,
                  see.city, see.email, see.phone_no, see.father_name, see.father_phone_no, see.messing, see.rent) != EOF) {
        if (border == see.border_no) {
            printf("\n\n Student Details::\n\n");
            printf(" %-15s : %d\n", "Border No", see.border_no);
            printf(" %-15s : %-20s\n", "Name", see.name);
            printf(" %-15s : %d\n", "Roll No", see.roll);
            printf(" %-15s : %-10s\n", "Department", see.department);
            printf(" %-15s : %d\n", "Room No", see.room_no);
            printf(" %-15s : %-15s\n", "Hometown", see.city);
            printf(" %-15s : %-30s\n", "Email", see.email);
            printf(" %-15s : %-15s\n", "Phone number", see.phone_no);
            printf(" %-15s : %-20s\n", "Father's Name", see.father_name);
            printf(" %-15s : %-15s\n", "Father's Phone", see.father_phone_no);
            printf(" %-15s : %-3s\n", "Dining", see.messing);
            printf(" %-15s : %-4s\n", "Rent", see.rent);
            found = 1;
            break;
        }
    }

    fclose(ptr);

    if (!found)  // !found means (found==0) meaning--> FALSE
    {
        printf("\n\tNO RECORDS FOUND FOR STUDENT WITH BORDER NO. %d!!\n\n", border);
    }

    int chck;
    checkk:
    printf("\n\n\n Do you want to check details of more student ?? (yes=1)/(no=0) >> ");
    scanf("%d",&chck);

    switch(chck)
    {
    case 1 :
        details();
        break;
    case 0 :
        admin_choice();
        break;
    default : goto checkk;
    }
}
