#include<iostream>
using namespace std;

int main()
{
    int year;
    bool isleapyear;
    cout<<"Input the year:"<<endl;
    cin>>year;
    isleapyear = (((year%4==0)&&(year%100!=0))||(year%400==0));

    if(isleapyear)
    {
        cout<<"The year:"<<year<<" is a leap year."<<endl;
    }
    else
    {
        cout<<"The year:"<<year<<" is not a leap year."<<endl;
    }

    system("pause");
    return 0;
}