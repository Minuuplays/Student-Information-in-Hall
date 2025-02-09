#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct {
int border_no;
char name[25];
int roll;
char department[5];
int room_no;
char city[12];
char email[30];
char phone_no[12];
char father_name[25];
char father_phone_no[12];
char messing[4];
char rent[5];
}data ;

void delay(unsigned int seconds);
void choice(int *user);
void admin_choice();
void login();
void admin_login();
void stud_login();
void menu();
void stud_menu();
void new_entry(int *usertype); // user=1 for admin --- user=2 for student
void edit();
void details();
void erase();
void view_list(int *usertype); // same..
void exit_code();

#endif
