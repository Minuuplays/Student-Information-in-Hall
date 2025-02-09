#include "headers.h"
#include "functions.h"

void edit()
{
    system("cls");
    int border;
    int found=0;

    FILE *editt,*temp;
    data idit;

    editt=fopen("record.dat","r");
    temp=fopen("temp.dat","w");

    printf("\n\tEnter Border No. of the student whose data you want to change: ");
    scanf("%d", &border);

    while (fscanf(editt, "%d . %s %d %s %d %s %s %s %s %s %s %s\n",
                  &idit.border_no, idit.name, &idit.roll, idit.department, &idit.room_no,
                  idit.city, idit.email, idit.phone_no, idit.father_name, idit.father_phone_no, idit.messing, idit.rent) != EOF) {
        if (border == idit.border_no) {
            found = 1;

            int choice_edit;
            printf("\n  Which field would you like to edit?\n\n");
            printf("   01. Name\n   02. Roll No\n   03. Department\n   04. Room No\n   05. Hometown\n   06. Email\n   07. Phone number\n   08. Father's Name\n   09. Father's Phone number\n   10. Dining\n   11. Rent\n");
            printf("\n  Enter your choice: ");
            scanf("%d", &choice_edit);
            printf("  ");
            switch (choice_edit) {
                case 1:
                    printf("Enter new Name: ");
                    scanf("%s", idit.name);
                    break;
                case 2:
                    printf("Enter new Roll No: ");
                    scanf("%d", &idit.roll);
                    break;
                case 3:
                    printf("Enter new Department: ");
                    scanf("%s", idit.department);
                    break;
                case 4:
                    printf("Enter new Room No: ");
                    scanf("%d", &idit.room_no);
                    break;
                case 5:
                    printf("Enter new Hometown: ");
                    scanf("%s", idit.city);
                    break;
                case 6:
                    printf("Enter new Email: ");
                    scanf("%s", idit.email);
                    break;
                case 7:
                    printf("Enter new Phone number: ");
                    scanf("%s", idit.phone_no);
                    break;
                case 8:
                    printf("Enter Father's Name: ");
                    scanf("%s", idit.father_name);
                    break;
                case 9:
                    printf("Enter Father's Phone number: ");
                    scanf("%s", idit.father_phone_no);
                    break;
                case 10:
                    printf("Enter new Dining status (ON/OFF): ");
                    scanf("%s", idit.messing);
                    break;
                case 11:
                    printf("Enter new Payment status (PAID/DUE): ");
                    scanf("%s", idit.rent);
                    break;
                default:
                    printf("  Invalid choice! No changes made.\n");
                    break;
            }
            printf("\n\n  Data updated successfully.\n");
        }

        fprintf(temp, "%d . %-15s %d %-4s %d %-10s %-26s %-12s %-15s %-12s %-3s %-4s\n",
                idit.border_no, idit.name, idit.roll, idit.department, idit.room_no,
                idit.city, idit.email, idit.phone_no, idit.father_name, idit.father_phone_no, idit.messing,idit.rent);
    }

    fclose(editt);
    fclose(temp);

    remove("record.dat");
    rename("temp.dat", "record.dat");

    if (found)  // if(found) = if(found==1) -> *TRUE*
    {
        printf("  The record for Border No %d has been updated !!\n", border);
    }
    else
    {
        printf("\n\n\tNo record found for Border No %d !!\n", border);
    }

    int chck;
    check:
    printf("\n\n\n Do you want to edit details of more students ?? (yes=1)/(no=0) >> ");
    scanf("%d",&chck);

    switch(chck)
    {
    case 1 :
        printf("\n\n  Redirecting to edit again...\n");
        delay(1);
        edit();
        break;
    case 0 :
        admin_choice();
        break;
    default : goto check;
    }

    admin_choice();
}
