#include<iostream>
using namespace std;

int area (int length,int breath)
{
    return length*breath;
}
int perimeter (int length,int breath )
{
  return 2*(length+breath);
}

int main()
{
    int length =0, breath = 0;
      cout<<"Enter lenght anb breath of rectangle"<<endl;
    cin>>length>>breath;
    int a = area(length ,breath);
    int peri = perimeter(breath ,length);
    cout<<"area of rectangle is: "<<a<<endl<<"paramter of rectangle is : "<<peri;

    return 0;
    return 0;
}
