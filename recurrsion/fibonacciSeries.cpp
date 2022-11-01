
// using itretive verstion of fibonacci serries 

// #include <iostream>
// using namespace std;
// int fib(int n)
// {
//   int t0 = 0, t1 = 1, i, s = 0;
//   if (n <= 1)
//   {
//     return n;
//   }
//   else
//   {
//     for (i = 2; i <= n; i++)
//     {
//       s = t0 + t1;
//       t0 = t1;
//       t1 = s;
//     }
//     return s;
//   }
// }
// int main()
// {
//   int r;
//   r = fib(6);
//   cout<<r;
//   return 0;
// }



/*
fabonacci series using recursion
*/

#include<iostream>
using namespace std;
int fab(int n){
if (n<=1) 
{
  return n;
}

else{
  return fab(n-1)+ fab(n-2);
}

}
int main()
{
  int r;
  r = fab(7);
  cout<<r;
  return 0;
}
