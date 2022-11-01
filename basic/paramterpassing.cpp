
// CALL BY VALUE

// #include<iostream>
// using namespace std;

// void swap(int x, int y)
// {
// int temp;
//  temp = x;
//  x = y;
//  y = temp;

// }

// int main()
// {
//     int a, b;
//     a = 10;
//     b = 20;
//    swap (a,b);
//    cout<<" "<<a<<endl;
//    cout<<" "<<b;

//     return 0;
// }






//CALL BY ADDRESS
// #include<iostream>
// using namespace std;

// void swap(int *x, int *y)
// {
// int temp;
//  temp = *x;
//  *x = *y;
//  *y = temp;

// }

// int main()
// {
//     int a, b;
//     a = 10;
//     b = 20;
//    swap (&a,&b);
//    cout<<" the value of a is: "<<a<<endl;
//    cout<<"The valuse of b is: "<<b;

//     return 0;
// }





// CALL BY REFERENCE 

#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
int temp;
 temp = x;
 x = y;
 y = temp;

}

int main()
{
    int a, b;
    a = 10;
    b = 20;
   swap (a,b);
   cout<<" "<<a<<endl;
   cout<<" "<<b;

    return 0;
}
