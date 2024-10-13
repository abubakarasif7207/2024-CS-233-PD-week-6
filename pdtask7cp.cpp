#include<iostream>
using namespace std;
string checkStudentStatus(int ,int,int,int);
main()
{
    int examHour,examMinute,studentHour,studentMinute;

    cout<<"Enter Exam starting time(hour): ";
    cin>>examHour;

    cout<<"Enter Exam starting time(minutes): ";
    cin>>examMinute;

    cout<<"Student hour of arrival: ";
    cin>>studentHour;

    cout<<"Student minutes of arrival: ";
    cin>>studentMinute;
    
    cout<<checkStudentStatus( examHour, examMinute, studentHour, studentMinute);

}

string checkStudentStatus(int examHour,int examMinute,int studentHour,int studentMinute)
{
    int examTimeinMinute = examHour * 60 + examMinute;
    int studentTimeinMinute = studentHour * 60 + studentMinute;
    int difference = studentTimeinMinute- examTimeinMinute;

    if (difference > 0)
     {
        cout << "Late" << endl;
        if (difference >= 60) 
        {
            cout << difference / 60 << " hour and " << difference % 60 << " minute late" << endl;
        }
         else 
        {
            cout << difference << " minute late" << endl;
        }
    } 
    else if (difference >= -30) 
    {
        cout << "On time" << endl;
    } 
    else
     {
        cout << "Early" << endl;
        difference=-difference;
        if (difference >= 60)
         {
            cout << difference / 60 << " hour and " << difference % 60 << " minute early" << endl;
        }
         else
         {
            cout << difference << " minute early" << endl;
        }
    }

}