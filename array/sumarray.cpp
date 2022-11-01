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
int sum(struct array *arr)
{

  int sum = 0;
  
  for (int i = arr->a[0]; i < arr->length; i++)
  {
    
      sum = sum+arr->a[i];
   
  }
  return sum;
}

int main()
{
  struct array arr = {{1, 2, 4, 5, 122, 7, 8, 8, 9}, 20, 9};
  cout << sum(&arr);

  return 0;
}