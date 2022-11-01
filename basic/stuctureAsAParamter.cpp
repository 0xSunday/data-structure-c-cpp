
//CALL BY VALUE BY STUCTURE
// using namespace std;
// #include<iostream>

// struct rectangle
// {
//     int Length;
//     int breath ;

// };
// void fun(struct rectangle r1  )
// {
//     r1.Length = 56;
// cout<<"Length "<<r1.Length<<endl;
// cout<<"breath "<<r1.breath<<endl;
// }
// int main()
// { struct rectangle r = {10,7};
// {
//     fun(r);

// cout<<r.Length<<endl;
// cout<<r.breath<<endl;

// };

//     return 0;
// }

// CALL BY ADDRESS
// using namespace std;
// #include<iostream>

// struct rectangle
// {
//     int Length;
//     int breath ;

// };
// void fun(struct rectangle *p  )
// {
//     p->Length = 56;
// // cout<<"Length "<<p->Length<<endl;   not needed for call by address
// // cout<<"breath "<<p->breath<<endl;
// }
// int main()
// { struct rectangle r = {10,7};
// {
//     fun(&r);

// cout<<r.Length<<endl;
// cout<<r.breath<<endl;

// };

//     return 0;
// }

//returning address of stucture
using namespace std;
#include <iostream>

struct rectangle
{
    int Length;
    int breath;
};
struct rectangle *fun()
{
    struct rectangle *p;
    p = new rectangle;

    p->Length = 32;
    p->breath = 64;
}


int main()
{
    struct rectangle *ptr = fun();
    cout <<"Length " <<ptr->Length << endl;
    cout <<"breath " <<ptr->breath<< endl;


return 0;
}
