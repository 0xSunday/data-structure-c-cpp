// #include <iostream>
// using namespace std;

// struct array
// {
//   int *A;
//   int size;
//   int length;
// };

// int main()
// {
//   struct array arr;
//   cout << "enter number element " << endl;
//   cin >> arr.size;
//   arr.A = new int[arr.size];
//   //  arr.length = 0;
//   cout << "enter the number of number you want to enter:-";

//   cin >> arr.length;
//   for (int i = 0; i < arr.length; i++)
//   {
//     cin >> arr.A[i];
//   }

//   cout << "the number are:-" << endl;
//   for (int i = 0; i < arr.length; i++)
//   {
//     cout << arr.A[i] << endl;
//   }

//   void display();
//   return 0;
// }



#include<iostream>
using namespace std;
 
 struct array1
 {
   int *a;
   int size;
   int length;

 };
 

 int main()
 {
   struct array1 arr;
   cout<<"enter the size of the array"<<endl;
   cin>>arr.size;
   arr.a= new int[arr.size];
   cout<<"enter the number of number you want to enter:-";
   cin>>arr.length;
   for (int i = 0; i < arr.length; i++)
   {
     cin>>arr.a[i];
   }
   cout<<"the elements are :-"<<endl;
   for (int i = 0; i < arr.length; i++)
   {
     cout<<arr.a[i]<<endl;
   }
   

   return 0;
 }
 


