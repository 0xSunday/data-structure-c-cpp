#include<iostream>
using namespace std;
class rectangle
{
     
     int length;
     int breath;

 
rectangle( int l, int b)
{
 length = l;
 breath = b;
 
}
 
 int area ()
 {
     return breath* length;
 }
 void changeLenght(int l)
{
  length = l;
}
};

int main(  )
{
   rectangle r(54,65);
     
  
     r.area();
    r.changeLenght(20);
    return 0;
}
