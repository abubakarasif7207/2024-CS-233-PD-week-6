#include<iostream>
using namespace std;
float calculateaverage(float marksEnglish,float marksMath ,float marksChemistry,float marksSocialScience,float marksBiology);
 string calculategarde(float average);
main()
{
    int marksEnglish,marksMath,marksChemistry,marksSocialScience,marksBiology ;
    string name,grade;
    cout<<"enter student name: ";
    cin>>name;
    cout<<"enter marks for english: ";
    cin>>marksEnglish;
    cout<<"enter marks for math: ";
    cin>>marksMath;
    cout<<"enter marks for chemistry: ";
    cin>>marksChemistry;
    cout<<"enter marks for social science: ";
    cin>>marksSocialScience;
    cout<<"enter marks for biology: ";
    cin>>marksBiology;
    cout<<"Student name: "<<name<<endl;
    float result=calculateaverage( marksEnglish, marksMath , marksChemistry, marksSocialScience, marksBiology);
    cout<<"percentage: "<<result<<"%"<<endl;
    grade=calculategarde(result);
    cout<<"Grade: "<<grade;
}
float calculateaverage(float marksEnglish,float marksMath ,float marksChemistry,float marksSocialScience,float marksBiology)
{
    float average=((marksEnglish+marksMath+marksChemistry+marksSocialScience+marksBiology)/5);
    return average;
    
}
// string calculategarde(float average)
// {
//     return string();
// }
string calculategarde(float average)
{
    string grade;
    if(average>=90 && average<=100){
        grade= "A+";
        return grade;
    }
    if(average>=80 && average<=90){
        grade= "A";
        return grade;
    }
    if(average>=70 && average<=80){
        grade= "B+";
        return grade;
    }
    if(average>=60 && average<=70){
        grade= "B";
        return grade;
    }
    if(average>=50 && average<=60){
        grade= "C";
        return grade;
    }
    if(average>=40 && average<=50){
        grade= "C";
        return grade;
    }
    if(average<40 ){
        grade= "F";
        return grade;
    }
}
    
   