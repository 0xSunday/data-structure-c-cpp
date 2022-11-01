#include <iostream>
using namespace std;

struct array
{
  int a[20];
  int size;
  int length;
};
int display(struct array arr)
{
  for (int i = 0; i < arr.length; i++)
  {
    cout << arr.a[i] << endl;
  }
}

int arraysorted(struct array arr){
 for (int  i = 0; i < arr.length-1; i++)
 {
   if (arr.a[i]>arr.a[i+1])
   {
     return 0;
   }
   
 }
 
 return 1;
}
  

int main()
{
  struct array arr = {{1, 3, 5, 6, 7, 8, 12, 24, 26}, 20, 9};
  cout<<arraysorted(arr);

  return 0;
}
