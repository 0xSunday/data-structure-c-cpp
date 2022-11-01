// #include<iostream>
// using namespace std;

// struct rectangle
// {
//     int length;
//     int breath;

// };

// int area (rectangle r)
// {
//     return r.length*r.breath;
// }
// int perimeter (rectangle r )
// {
//   int p =2*(r.length+r.breath);
//   return p;
// }

// int main()
// {
//     rectangle r = {0,0};
//       cout<<"Enter lenght anb breath of rectangle"<<endl;
//     cin>>r.length>>r.breath;
//     int a = area(r);
//     int peri = perimeter(r);
//     cout<<"area of rectangle is: "<<a<<endl<<"peramter of rectangle is : "<<peri;

//     return 0;

// }

//WITH INISILIZING THE PROGRAM
#include <iostream>
using namespace std;

struct rectangle
{
  int length;
  int breath;
};

void initialise (rectangle *r, int l, int b)
{
  r->breath = b;
  r->length = l;
};

int area(rectangle r)
{
  return r.length * r.breath;
}
int perimeter(rectangle r)
{
  int p = 2 * (r.length + r.breath);
  return p;
}

int main()
{
  int l, b;
  rectangle r = {0, 0};
  cout << "Enter lenght anb breath of rectangle" << endl;

  cin >> l >> b;

  initialise(&r,l,b);
  int a = area(r);
  int peri = perimeter(r);
  cout << "area of rectangle is: " << a << endl
       << "peramter of rectangle is : " << peri;

  return 0;
}
