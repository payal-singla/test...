#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
using namespace std;
 int main()
{
 FILE *fp, *ft;
    char another, choice;
    struct student
    {
        char first_name[50], last_name[50];
        char course[100];
        int section;
    };


struct student e;
    char xfirst_name[50], xlast_name[50];
    long int recsize;
=======
   


    fp=fopen("users.txt","rb+");

    if (fp == NULL)
    {
        fp = fopen("users.txt","wb+");

        if (fp==NULL)
        {
            puts("Cannot open file");
            return 0;
        }
    }

return 0;
}
