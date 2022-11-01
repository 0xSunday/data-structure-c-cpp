using namespace std;
#include<iostream>

struct rectangle
{
    int lenght;
    int breath ;

};


int main()
{ struct rectangle r = {10,7};
{
   
cout<<r.lenght<<endl;
cout<<r.breath<<endl;

rectangle *p=&r;
r.lenght =8;

cout<<p -> lenght<<endl;
cout<<p -> breath<<endl;



};


  
    return 0;
}

