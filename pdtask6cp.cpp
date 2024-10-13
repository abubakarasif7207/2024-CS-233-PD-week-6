#include<iostream>
using namespace std;
float calculateHotelPrice(string ,int  );
float calculateHotelPrice2(string ,int );
main()
{
    string month;
    int numberOfStays;

    cout<<"Enter the month (May,June,August,September,October): ";
    cin>>month;

    cout<<"Enter the number of stays: ";
    cin>>numberOfStays;
     
    cout<<"Apartment: "<<calculateHotelPrice2( month, numberOfStays)<<endl;
    cout<<"Studio: "<<calculateHotelPrice( month, numberOfStays);

}

float calculateHotelPrice(string month,int numberOfStays)
{
    float discountforStudio;
    float amount;
  if((month=="May"||month=="October")&&(numberOfStays>7))
  {
   amount=numberOfStays*50;
   discountforStudio=amount-(amount*0.05);
   return discountforStudio;
  }
  else
  {
    amount=numberOfStays*50;
    amount=discountforStudio;
    return discountforStudio;
  }
  if((month=="May"||month=="October")&&(numberOfStays>14))
  {
    amount=numberOfStays*50;
   discountforStudio=amount-((amount*30)/100);
   return discountforStudio;
  }
  else
  {
   amount=numberOfStays*50;
   discountforStudio=amount-(amount*0.05);
   return discountforStudio;
  }
  if((month=="June"||month=="September")&&(numberOfStays>7))
  {
    amount=numberOfStays*50;
   discountforStudio=amount-(amount*0.2);
   return discountforStudio;
  }
}

float calculateHotelPrice2(string month,int numberOfStays)
{
    float discountforStudio;
    float amount;
  if((month=="May"||month=="October")&&(numberOfStays>7))
  {
   amount=numberOfStays*50;
   discountforStudio=amount-(amount*0.05);
   return discountforStudio;
  }
  else
  {
    amount=numberOfStays*50;
    amount=discountforStudio;
    return discountforStudio;
  }
  if((month=="May"||month=="October")&&(numberOfStays>14))
  {
    amount=numberOfStays*65;
   discountforStudio=amount-(amount*0.3);
   return discountforStudio;
  }
  else
  {
   amount=numberOfStays*50;
   discountforStudio=amount-(amount*0.05);
   return discountforStudio;
  }
  if((month=="June"||month=="September")&&(numberOfStays>7))
  {
   amount=numberOfStays*50;
   discountforStudio=amount-(amount*0.2);
   return discountforStudio;
  }
}
