/*
power recursion using itretive aproach using loop
*/

#include<iostream>
using namespace std;

// int pow(int m, int n){
//    int power=1;
//   if (n==0)
//   {   
//    return(1);
//   }
//   else{
//     for (int i = 1; i <=n; i++)
//     {
//      power =power*m;
//     }
//     return power;
//   }
// }

// int main()
// {
//   int r;
//   r = pow(2,0);
//   cout<<r;
  
//   return 0;
// }


/*
power recursion using recursion
*/

int pow(int m,int n){
  if (n==0)
  {
    return (1); 
  }
  else{
    return pow(m,n-1)*m;
  }
  
}
int main()
{
  int r;
  r =pow(2,9);
 cout<<r;
  return 0;
}
