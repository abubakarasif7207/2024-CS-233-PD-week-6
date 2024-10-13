#include<iostream>
using namespace std;
float calculate_fruit_price(string fruit_name,string day_of_week,double quantity);
    

main()
{
string fruit_name, day_of_week;
float quantity;
cout<<"enter the fruit name: ";
cin>>fruit_name;
cout<<"enter the day of week: ";
cin>>day_of_week;
cout<<"enter the quantity: ";
cin>>quantity;
double result=calculate_fruit_price( fruit_name, day_of_week,quantity);
cout<<result;

}
float calculate_fruit_price(string fruit_name,string day_of_week,double quantity)
{
    
    float cal;
    if(fruit_name=="banana"&&!(day_of_week=="sunday"||day_of_week=="saturday"))
    {
        cal=quantity*2.50;
    }
     if(fruit_name=="orange"&&!(day_of_week=="sunday"||day_of_week=="saturday"))
    {
        cal=quantity*0.85;
    }
     if(fruit_name=="apple"&&!(day_of_week=="sunday"||day_of_week=="saturday"))
    {
        cal=quantity*1.20;
    }
     if(fruit_name=="grapefruit"&&!(day_of_week=="sunday"||day_of_week=="saturday"))
    {
        cal=quantity*1.45;
    }
     if(fruit_name=="kiwi"&&!(day_of_week=="sunday"||day_of_week=="saturday"))
    {
        cal=quantity*2.70;
    }
     if(fruit_name=="pineapple"&&!(day_of_week=="sunday"||day_of_week=="saturday"))
    {
        cal=quantity*5.50;
    }
     if(fruit_name=="grapes"&&!(day_of_week=="sunday"||day_of_week=="saturday"))
    {
        cal=quantity*3.85;
    }
     if(fruit_name=="banana"&&(day_of_week=="sunday"||day_of_week=="saturday"))
    {
        cal=quantity*2.70;
    }
    if(fruit_name=="orange"&&(day_of_week=="sunday"||day_of_week=="saturday"))
    {
        cal=quantity*0.90;
    }
    if(fruit_name=="apple"&&(day_of_week=="sunday"||day_of_week=="saturday"))
    {
        cal=quantity*1.25;
    }
    if(fruit_name=="grapefruit"&&(day_of_week=="sunday"||day_of_week=="saturday"))
    {
        cal=quantity*1.60;
    }
    if(fruit_name=="kiwi"&&(day_of_week=="sunday"||day_of_week=="saturday"))
    {
        cal=quantity*3.00;
    }
     if(fruit_name=="pineapple"&&(day_of_week=="sunday"||day_of_week=="saturday"))
    {
        cal=quantity*5.60;
    }
    if(fruit_name=="grapes"&&(day_of_week=="sunday"||day_of_week=="saturday"))
    {
        cal=quantity*4.20;
    }
    return cal;
}

