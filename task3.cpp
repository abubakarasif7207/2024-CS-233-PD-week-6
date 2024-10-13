#include<iostream>
using namespace std;
string findZodiacSign(int day,string month);
main()
{
    int day;
    cout<<"Enter the day of birth: ";
    cin>>day;
    string month;
    cout<<"Enter the month of birth(e.g., January,February): ";
    cin>>month;
     string result=findZodiacSign( day, month);
     cout<<"zodiac sign: "<<result;
}
string findZodiacSign(int day,string month)
{
    string sign;
   if(((month=="march")&&(day>=21&&day<=30))||((month=="april")&&(day>=1&&day<=19)))
   {
    sign="Aries";
    }
    else if(((month=="april")&&(day>=20&&day<=30))||((month=="may")&&(day>=1&&day<=20))){
        sign="taurus ";
    }
    else if(((month=="may")&&(day>=21&&day<=30))||((month=="june")&&(day>=1&&day<=20))){
        sign="gemini ";
    }
    else if(((month=="june")&&(day>=21&&day<=30))||((month=="july")&&(day>=1&&day<=22))){
        sign="taurus ";
    }
    else if(((month=="july")&&(day>=23&&day<=30))||((month=="august")&&(day>=1&&day<=22))){
        sign="leo";
    }
    else if(((month=="august")&&(day>=23&&day<=30))||((month=="september")&&(day>=1&&day<=22))){
        sign="virgo ";
    }
    else if(((month=="september")&&(day>=23&&day<=30))||((month=="october")&&(day>=1&&day<=22))){
        sign="libra";
    }
    else if(((month=="october")&&(day>=23&&day<=30))||((month=="november")&&(day>=1&&day<=21))){
        sign="scorpio";
    }
    else if(((month=="november")&&(day>=22&&day<=30))||((month=="december")&&(day>=1&&day<=21))){
        sign="sagittarius ";
    }
    else if(((month=="december")&&(day>=22&&day<=30))||((month=="january")&&(day>=1&&day<=19))){
        sign="capricorn";
    }
    else if(((month=="january")&&(day>=20&&day<=30))||((month=="february")&&(day>=1&&day<=18))){
        sign="aquarius ";
    }
    else{
        sign="pisces";
    }
    return sign;
}