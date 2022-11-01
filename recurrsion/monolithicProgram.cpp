#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int length =0, breath = 0;
    cout<<"Enter lenght anb breath of rectangle"<<endl;
    cin>>length>>breath;
    int area = length *breath;
    int peri = 2*(breath + length);
    cout<<"area of rectangle is: "<<area<<endl<<"paramter of rectangle is : "<<peri;

    return 0;
}
 