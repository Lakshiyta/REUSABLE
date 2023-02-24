//HEADER FILES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<windows
.h>
#include<conio.h>

//TO STORE THE ELEMENTS IN SYSTEM
struct student_info
{
    char name[20];
    char department[10];
    int roll;
    long long int phone_no;
    float marks;
} st;

FILE *fp;
long sz = sizeof(st);

//ADD STUDENT
void add_student()
{
    system("cls");
    fopen("student", "a");
    printf("\n\t\t\tAdd the Students Details\n");
    printf("\n\t\t\t-------------------------\n");
    printf("\n\t\t\tEnter the name of student: ");
    fflush(stdin);
    gets(st.name);
    printf("\n\t\t\tEnter the department: ");
    fflush(stdin);
    gets(st.department);
    printf("\n\t\t\tEnter the Roll Number: ");
    scanf("%d", &st.roll);
    printf("\n\t\t\tEnter the Phone Number: ");
    scanf("%lld", &st.phone_no);
    printf("\n\t\t\tEnter the marks obtained: ");
    scanf("%f", &st.marks);
    fwrite(&st, sz, 1, fp);
    printf("\n\t\t\tRecord saved successfully\n");
    fclose(fp);
}

//DISPLAY THE STUDENT DETAILS
void display_student()
{
    system("cls");
    printf("\n\t\t\t\t\t\t<========== Student Info ==========>\n\n");
    printf("\n\t\t\t%-20s %-15s %-10s %-25s %-5s\n", "Name", "Department", "Roll no.", "Phone no.", "Marks\n");
    fp = fopen("student", "r");
    while (fread(&st, sz, 1, fp) == 1)
    {
        printf("\n\t\t\t%-20s %-15s %-10d %-25lld %5.2f", st.name, st.department, st.roll, st.phone_no, st.marks);
    }
    fclose(fp);
}

//SEARCH STUDENT BY ROLL NUMBER
void find_by_roll()
{
    system("cls");
    int x, f = 0;
    printf("\n\t\t\tEnter the Roll Number of the student: ");
    scanf("%d", &x);
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printf("\n\t\t\t----------------------------------------------------------------------------");
    printf("\n\n\t\t\t\t\t\t<========== Student Info ==========>\n\n");
    printf("\n\t\t\t%-20s %-15s %-10s %-25s %-5s\n", "Name", "Department", "Roll no.", "Phone no.", "Marks\n");
    fp = fopen("student", "r");
    while (fread(&st, sz, 1, fp) == 1)
    {
        if (x == st.roll)
        {
            printf("\n\t\t\t%-20s %-15s %-10d %-25lld %5.2f", st.name, st.department, st.roll, st.phone_no, st.marks);
            f = 1;
            break;
        }
    }
    fclose(fp);
    if (f == 1)
    {
        printf("\n\n\t\t\tRecord Found...");
    }
    else
    {
        printf("\n\n\t\t\tRecord not Found...\n");
    }
}

//DELETE THE STUDENT DETAILS
void delete_student()
{
    system("cls");
    int x, f = 0;
    printf("\n\t\t\tEnter the Roll Number of the student: ");
    scanf("%d", &x);
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printf("\n\t\t\t----------------------------------------------------------------------------");
    FILE *ft;
    fp = fopen("student", "r");
    ft = fopen("temp", "a");
    while (fread(&st, sz, 1, fp) == 1)
    {
        if (x == st.roll)
        {
            f = 1;
            break;
        }
        else
        {
            fwrite(&st, sz, 1, ft);
        }
    }
    fclose(fp);
    fclose(ft);
    remove("student");
    rename("temp","student");
    if (f == 1)
    {
        printf("\n\n\t\t\tRecord Deleted Successfully...");
    }
    else
    {
        printf("\n\n\t\t\tRecord not Found...\n");
    }

}

//UPDATE THE STUDENT DETAILS
void update_student()
{
    system("cls");
    int x, f = 0;
    printf("\n\t\t\tEnter the Roll Number of the student: ");
    scanf("%d", &x);
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printf("\n\t\t\t----------------------------------------------------------------------------");
    fp = fopen("student", "r+");
    while (fread(&st, sz, 1, fp) == 1)
    {
        if (x == st.roll)
        {
            f = 1;
            printf("\n\t\t\tEnter the name of student: ");
            fflush(stdin);
            gets(st.name);
            printf("\n\t\t\tEnter the department: ");
            fflush(stdin);
            gets(st.department);
            printf("\n\t\t\tEnter the Roll Number: ");
            scanf("%d", &st.roll);
            printf("\n\t\t\tEnter the Phone Number: ");
            scanf("%lld", &st.phone_no);
            printf("\n\t\t\tEnter the marks obtained: ");
            scanf("%f", &st.marks);
            fseek(fp, -sz, 1);
            fwrite(&st, sz, 1, fp);
            fclose(fp);
            break;
        }
    }
    if (f == 1)
    {
        printf("\n\n\t\t\tRecord Updated Successfully...");
    }
    else
    {
        printf("\n\n\t\t\tRecord not Found...\n");
    }
}

//MAIN FUNCTION
void main()

{
    while (1)
    {
        int choice;
        system("cls");
        printf("\n\n\n\t\t\t# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # ");
        printf("\n\t\t\t#=#=#=#=#=#=                                                   #=#=#=#=#=#=");
        printf("\n\t\t\t=#=#=#=#=#=#         Student Record Management System          =#=#=#=#=#=#");
        printf("\n\t\t\t#=#=#=#=#=#=                                                   #=#=#=#=#=#=");
        printf("\n\t\t\t# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #");
        printf("\n\t\t\t---------------------------------------------------------------------------\n");
        printf("\n\t\t\t----------------------------------------------------------------------------");

        printf("\n\n\n\n");
        printf("\n\t\t\t  **_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**\n");
        printf("\n\t\t\t           =_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=");
        printf("\n\t\t\t           =                  WELCOME                        =");
        printf("\n\t\t\t           =                     TO                          =");
        printf("\n\t\t\t           =                STUDENT RECORD                   =");
        printf("\n\t\t\t           =                    SYSTEM                       =");
        printf("\n\t\t\t           =_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=");
        printf("\n\t\t\t  **_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**_**\n");
        printf("\n\t\t\t---------------------------------------------------------------------------\n");
        printf("\n\t\t\t----------------------------------------------------------------------------");


        printf("\n\t\t\tThe Task that you want to perform\n");
        printf("\n\t\t\t 1. Add the Student Details");
        printf("\n\t\t\t 2. View the Student Details");
        printf("\n\t\t\t 3. Search the Student Details by Roll Number");
        printf("\n\t\t\t 4. Update the Students Details by Roll Number");
        printf("\n\t\t\t 5. Delete the Students Details by Roll Number");
        printf("\n\t\t\t 0. To Exit");
        printf("\n\n\t\t\tEnter your choice to find the task: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_student();
            break;
        case 2:
            display_student();
            break;
        case 3:
            find_by_roll();
            break;
        case 4:
            update_student();
            break;
        case 5:
            delete_student();
            break;
        case 0:
            exit(0);
            break;
        }
        printf("\n\n\t\t\tPress any key to continue...");
        getch();
    }
}

