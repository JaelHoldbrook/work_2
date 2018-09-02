#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout<<"Enter your marks:"<<endl;
    cin>> marks;
    if(marks>=80&&marks<=100)
    {
        cout<<"your grade is A+"<<endl;

    }
    else if(marks>=75&&marks<=79)
    {
        cout<<"your grade is B+"<<endl;

    }
    else if (marks>=70&&marks<=74)
    {
        cout<<"your grade is B"<<endl;

    }
    else if (marks>=65&&marks<=69)
    {
        cout<<"your grade is C+"<<endl;

    }
    else if  (marks>=60&&marks<=64)
    {
        cout<<"your grade is C"<<endl;

    }
    else if (marks>=55&&marks<=59)
    {
        cout<<"your grade is D+"<<endl;
    }
    else if (marks>=50&&marks<=54)
    {
        cout<<"your grade is D"<<endl;
    }
    else if (marks>=45&&marks<=49)
    {
        cout<<"your grade is E"<<endl;
    }
    else if (marks>=0&&marks<=44)
    {
        cout<<"your grade is F"<<endl;
    }
    return 0;
}
