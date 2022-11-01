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
float avg(struct array *arr)
{

 float sum = 0;
float avg = 0;
  
  for (int i = arr->a[0]; i < arr->length; i++)
  {
    
      sum = sum+arr->a[i];
   
  }
 avg =  sum /arr->length;
  return avg;
}

int main() 
{
  struct array arr = {{1, 2, 4, 5, 122, 7, 8, 8, 9}, 20, 9};
  cout << avg(&arr);

  return 0;
}
