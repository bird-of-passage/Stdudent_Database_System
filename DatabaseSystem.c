#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define MAX 100

struct student
{
    long roll;
    char name[15];
    char dept[10];
    char semester[10];

    struct addresss
    {
        char state[20];
        char city[15];
        long tele_number;
    } address_info;
};

struct student student_info[MAX];

void entry(void);
void init_list(void);
int find_free(void);
void find_data(void);
char menu_select();
void std_info();
void menu(int x1, int y1, int x2, int y2);

void line();
void line1();

void main()
{
    char choice;
    clrscr();
    init_list();

    for (;;)
    {
        textcolor(7);
        menu(2, 2, 80, 24);
        choice = menu_select();
        _setcursortype(_NORMALCURSOR);
        switch (choice)
        {
        case '1':
            entry();
            break;
        case '2':
            std_info();
            break;
        case '3':
            find_data();
            break;
        case '4':
            exit(0);
        }
    }
}
