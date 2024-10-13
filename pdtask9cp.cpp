#include<iostream>
using namespace std;
string checkPointPosition(int,int,int);
main()
{
    int height,xCoordinate,yCoordinate;

    cout<<"Enter the height : ";
    cin>>height;

    cout<<"Enter x coordinates: ";
    cin>>xCoordinate;

    cout<<"Enter y coordinates: ";
    cin>>yCoordinate;

    cout<<checkPointPosition(height,xCoordinate, yCoordinate);

}

string checkPointPosition(int height,int xCoordinate,int yCoordinate)
{
    bool inside, border ,outside;
    string position;
    
    if (xCoordinate >= 0 && xCoordinate <= 3 * height && yCoordinate >= 0 && yCoordinate <= height) 
    {
      position = "inside";
      return position;
        if (xCoordinate == 0 || xCoordinate == 3 * height || yCoordinate == 0 || yCoordinate == height) 
        {
          position ="border";
          return position;
        }
    }
    
    else if (xCoordinate >= 0 && xCoordinate <= height && yCoordinate >= height && yCoordinate <= 4 * height) 
    {
       position = "inside";
       return position;
        if (xCoordinate == 0 || xCoordinate == height || yCoordinate == height || yCoordinate == 4 * height) 
        {
          position = "border";
          return position;
        }
    }
    
    else if (xCoordinate >= 2 * height && xCoordinate <= 3 * height && yCoordinate >= height && yCoordinate <= 4 * height)
     {
      position = "inside";
      return position;
        if (xCoordinate == 2 * height || xCoordinate == 3 * height || yCoordinate == height || yCoordinate == 4 * height)
        {
           position = "border";
           return position;
        }
    }
    if (border) 
    {
        position = "border";
        return position;
    } 
    else if (inside) 
    {
        position = "inside";
        return position;
    } 
    else
    {
        position="outside";
        return position;
    }
   
     
    
}