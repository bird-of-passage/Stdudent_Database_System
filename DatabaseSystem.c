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
