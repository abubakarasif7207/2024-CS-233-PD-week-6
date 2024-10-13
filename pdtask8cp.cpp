#include<iostream>
using namespace std;
int calculateVolleyballgame(string ,int ,int );
main()
{
    string yeartype;
    int holidays,hometownWeekends;

    cout<<"Enter year type(leap or normal): ";
    cin>>yeartype;

    cout<<"Enter number of holidays: ";
    cin>>holidays;

    cout<<"Enter number of weekends: ";
    cin>>hometownWeekends;

    cout<<calculateVolleyballgame( yeartype,holidays, hometownWeekends);

}

int calculateVolleyballgame(string yeartype,int holidays,int hometownWeekends)
{
    int totalWeekends = 48;
    int weekendsInSofia = totalWeekends - hometownWeekends;
    int playWeekends = weekendsInSofia * 3 / 4;
    int holidayGames = holidays * 2 / 3;
    int totalGames = playWeekends + holidayGames + hometownWeekends;

    if (yeartype == "leap") 
    {
        totalGames = totalGames * 1.15;
    }
    return totalGames;

}