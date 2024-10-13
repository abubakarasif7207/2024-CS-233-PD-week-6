#include<iostream>
using namespace std;
string decideactivity(string temperature,string humidity);
main()
{
    string result;
    string temperature;
    string humidity;
    cout<<"Enter temperature (Warm or Cold): ";
    cin>>temperature;
    cout<<"Enter humidity(dry or humid): ";
    cin>>humidity;
    
    result = decideactivity(temperature, humidity);
    cout<<"recomended activity:" << result;

}
string decideactivity(string temperature,string humidity)
{
    string result;
    if(temperature == "warm" && humidity == "dry")
    {
         result= "Play tennis";
        return result;
    }
  else if(temperature == "warm" && humidity == "humid")
    {
         result= "swim";
        return result;
    }
   else if(temperature == "cold" && humidity == "dry")
    {
       result= "basketball";
        return result;
    }
   else 
    {
         result= "watch tv";
        return result;
    }
}
