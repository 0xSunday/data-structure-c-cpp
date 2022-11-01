/*
sum of first 'n' natural number without using recursion;
*/

// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//   int n,sum=0;
//   cout<<"enter a number"<<endl;
//   cin>>n;
//   for (int i = 1; i <= n; i++)
//   {
//    sum += i;
//   }
//   cout<<sum;
//   return 0;
// }


#include<iostream>
using namespace std;
 
 int sum (int n){
   if (n==0)
   {
     return 0;
   }
   else{
     return sum(n-1)+n;
   }
   
 }
 int main(int argc, char const *argv[])
 {
   int ans;
   ans = sum(5);
   cout<<ans;
   return 0;
 }
 