#include <iostream>
using namespace std;


/*
taylor series using itretive aproach
*/
double Tay(int x, int n)
{
  double s = 1;
  double num = 1, fact = 1;
  for (int i = 1; i <= n; i++)
  {
    num *= x;
    fact *= i;
    s += num / fact;
  }
  return s;
}
int main()
{
  double r;
  r = Tay(5, 10);
  int a=7,b=19;
  cout << r;
  return 0;
}

/*
taylor series using recursion
*/

// double e(int x, int n)
// {
//  static double p=1,f=1;
//  double r;

//  if(n==0)
//  return 1;
//  r=e(x,n-1);
//  p=p*x;
//  f=f*n;
//  return r+p/f;
// }

//   int main()
//   {
//    double r;
//    r = e(3,10);
//    cout<<r;
//     return 0;
//   }


