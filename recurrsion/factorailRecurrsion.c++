/*
factoiral finding using itretive aproach
*/

// #include<iostream>
// using namespace std;

// int fact(int n){
//   int fact =1;
//   if (n==0)
//   {
//     cout <<"factoral of 0 is 1";
   
//   }
//   else{
//     for ( int i = 1; i <=n;  i++)
//     {
//       fact= fact*i;
//     }

//     return fact;
//   }
  
// }
// int main()
// {
//   int factorial;
//   factorial = fact(5);
//   cout<<factorial;
//   return 0;
// }




/*
factoiral finding using recursion
*/

#include<iostream>
using namespace std;
int fact(int n){
  if (n==0)
  {
    return 1;
  }
  else
  return fact(n-1)*n ;
}
int main()
{
  int r;
  r = fact(5);
  cout<<r;
  return 0;
}
