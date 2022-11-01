#include <iostream>
using namespace std;
int main()
{
  char A[] = "ta";
  char B[] = "rat";
  for (int i = 0; A[i]!='\0'; i++)
  {
    for (int j = 0; j < B[j]!='\0'; j++)
    {
      if (A[i]==B[j])
      {
       cout<<A[i];
      }

    }
    
  }
  
  return 0;
}