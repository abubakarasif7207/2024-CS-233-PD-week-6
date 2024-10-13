#include<iostream>
using namespace std;
float premiumCall(int,char,char);
float regularCall(int,char);
main()
{
    char service_code;
    char call_choice;
    int minutes;
    cout<<"Enter the service code (R/r for regular,P/p for premium ): ";
    cin>>service_code;
    if(service_code=='P'||service_code=='p')
    {
    cout<<" Enter the time of call(D/d for day , N/n for night): ";
    cin>>call_choice;

    cout<<"Enter the number of minutes used: ";
    cin>>minutes;

    cout<<"Service Type: Premium"<<endl;
    cout<<"Total minutes used: "<<minutes<<endl;
    cout<<"Amount Due :$ "<<premiumCall( minutes, service_code, call_choice);

    }
    if(service_code=='R'||service_code=='r')
    {
    cout<<"Enter the number of minutes: ";
    cin>>minutes;

    cout<<"Service Type: Regular"<<endl;
    cout<<"Total minutes used: "<<minutes<<endl;
    cout<<"Amount Due :$ "<<regularCall(minutes,service_code);

    }
}

float premiumCall(int minutes,char service_code,char call_choice)
{
    float amount;

    if(call_choice=='D'||call_choice=='d')
    {
    if(minutes<=75)
    {
     amount=25;
     return amount;
    }
    else
    {
        minutes=minutes-75;
        amount=minutes*0.10;
        return amount;
    }

    }

    if(call_choice=='N'||call_choice=='n')
    {
    if(minutes<=100)
    {
      amount=25;
      return amount;
    }
    else
    {
     minutes=minutes-100;
     amount=minutes*0.05;
     return amount;
    }

    }
    
}

float regularCall(int minutes,char service_code)
{
    float amount;

    if(minutes<=50)
    {
     amount=0;
     return amount;
    }
    if(minutes>50)
    {
        minutes=minutes-50;
        amount=(minutes*0.20)+10.0;
        return amount;
    }

}


