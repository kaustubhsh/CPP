#include<stdio.h>
#include<conio.h>
#include<string.h>
#include"employee.h"

int main()
{
    enum grade
    {
        HSK,SSK
    };
    struct emp
    {
        char name[20];
        enum grade GRADE;
        int age;
        union info facility;
    };

    struct emp e[3];
    char grd[4];

    cout<<"Enter information of 3 employees\n";

    for(int i=0;i<3;i++)
    {
        cout<<"Enter name:\t"<<endl;
        gets(e[o].name);

        cout<<"Enter grade:(HSK/SSK)\n"<<endl;
        gets(grd);

        int r=strcmp(grd,"HSK");

        if(r==0)
        {
            e[i].GRADE=HSK;
            cout<<"Enter Hobby"<<endl;

            gets(e[i].facility.a.hobby);

            cout<<"Enter Credit card No"<<endl;
            cin>>&e[i].facilit.creditcardno;
        }

        else

        {
            e[i].grade=SSK;

            cout<<"Enter Vehicle no.\t"<<endl;
            gets(e[i].facility.b.vehicleno);

            cout<<"Enter distance"<<endl;
            cin>>&e[i].facility.b.distance;
        }
        cout<<"Enter age\t:";
        cin>>&e[i].age;
    }
    cout<<"\n\nEnter employee detail:\n";


}
