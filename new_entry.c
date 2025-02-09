#include "headers.h"
#include "functions.h"

void new_entry(int *usertype)
{
    int admin=1;
    int student=2;

    system("cls");

    data add;
    FILE *ptr;
    ptr=fopen("record.dat","a+");

    printf("\t\t\t=====<< ADD STUDENTS DATA  >>=====");

    int check;
    int found = 0;

    do {
    found = 0;
    rewind(ptr);   // For reseting pointer to the beginning of the file

    printf("\nEnter your Border No: ");
    scanf("%d", &check);

       while (fscanf(ptr,"%d . %s %d %s %d %s %s %s %s %s %s %s\n",
                  &add.border_no, add.name, &add.roll, add.department, &add.room_no,
                add.city, add.email, add.phone_no, add.father_name, add.father_phone_no, add.messing, add.rent) != EOF)
       {
           if (check == add.border_no)
           {
               printf("\n\tStudent with this Border already exists!!\n");
               found = 1;
               break;
           }
       }

    } while(found);

    printf("\n\t\t  Welcome to KUET HaLL! \n\t  Now start filling up this data form::\n");

    add.border_no=check;
    printf("\nEnter your name:");
    scanf(" %s",add.name);
    printf("\nEnter Roll No:");
    scanf("%d",&add.roll);
    printf("\nEnter Department Name(short-form):");
    scanf(" %s",add.department);
    printf("\nEnter Room No:");
    scanf("%d",&add.room_no);
    printf("\nEnter your Hometown:");
    scanf(" %s",add.city);
    printf("\nEnter your email id :");
    scanf(" %s",add.email);
    printf("\nEnter phone number:");
    scanf(" %11s",add.phone_no);
    printf("\nEnter your Father's name:");
    scanf(" %s",add.father_name);
    printf("\nEnter your Father's phone no:");
    scanf(" %11s",add.father_phone_no);
    printf("\nDining : ");
    scanf(" %s",add.messing);
    printf("\nRent('Paid' or 'Due') : ");
    scanf(" %s",add.rent);
    fprintf(ptr,"%d . %-15s %d %-4s %d %-10s %-26s %-12s %-15s %-12s %-3s %-4s\n",
            add.border_no,add.name,add.roll,add.department,add.room_no,add.city,add.email,add.phone_no,add.father_name,add.father_phone_no,add.messing,add.rent);

    fclose(ptr);
    printf("\n\n\n\t Congratulations !! You are now assigned under KUET HaLL for your B.Sc course in department of %s ..\n\n",add.department);

    if (*usertype ==1) { choice(&admin); }
    if (*usertype ==2) { choice(&student); }
}

