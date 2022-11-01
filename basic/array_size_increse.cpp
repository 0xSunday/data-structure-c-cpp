#include<iostream>
using namespace std;
int main()
{
    int *p =new int[5];
    int *q = new int[10];
   p[0]=1; p[1]=23 ; p[2]=12; p[3]=31; p[4]=15;
   q[5]=16; q[6]=13 ; q[7]=19; q[8]=21; q[9]=17;
 
   for (int i = 0; i < 5; i++)
   {
     q[i]=p[i];
   }
   delete[]p;
   p=q;
   q=NULL;
   for (int i = 0; i < 10; i++)
   {
     cout<<p[i]<<endl;
   }
   
   
  return 0;
}
