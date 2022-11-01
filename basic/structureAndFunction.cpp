#include<iostream>
using namespace std;
struct rectangle
 {
     int length;
     int breath;

 };
void initialize( struct rectangle *r, int l, int b)
{
 r->length = l;
 r->breath = l;
 
};
 
 int area (struct rectangle r)
 {
     return r.breath* r.length;
 };
 void changeLenght(struct rectangle *r, int b)
{
    r->breath = b;
};

int main(  )
{
    struct rectangle r;
     
     initialize(&r ,32,43);
     area(r);
     changeLenght(&r,20);
    return 0;
}
