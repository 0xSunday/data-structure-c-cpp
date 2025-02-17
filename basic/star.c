// #include<iostream>
// #include<conio.h>
// using namespace std;
// int main()
// {
//     int i, j, k, l, m, n;

//     for(i=7, n=7;i>=1;i--,n--)
//     {
//         for(j=1;j<=i;j++)
//         {

//             if(j==7)
//             break;
//             cout<<j;
//         }
//         for(m=i;m<=12-i;m++)
//         {
//             cout<<" ";
//         }

//         for(l=n;l>=1;l--)
//         {
//             cout<<l;

//         }
//         cout<<endl;
//     }
// }

#include<stdio.h>
int main()
{
    int n,r,s,t;

    for(n=1; n<=1000; n++)
    {
        s=0;
        t=n;
        while(t>0)
        {
            r=t%10;
            s=s+(r*r*r);
            t=t/10;
        }
        if(s==n)
        
            printf("%d \n",n);
            }

        return 0;
    }