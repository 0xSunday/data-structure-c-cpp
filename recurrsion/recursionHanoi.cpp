#include<iostream>
using namespace std;
void hanoi(int n, int a, int b, int c){
if (n>0)
{
  hanoi(n-1,a,b,c);
  cout<<"from "<<a<<"to "<<b<<endl;
  hanoi(n-1,b,a,c);
}

}
int main()
{
  hanoi(3,1,2,3);
  
}
