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
int min(struct array *arr)
{
 
    int min = 0;
    min = arr->a[0];
    for (int i = arr->a[1]; i < arr->length; i++)
    {
      if (arr->a[i] <  min)
      {
min= arr->a[i];
      }
    }
   return min;


}

int main()
{
  struct array arr = {{4, 2, 4, 5, 122, 7, 8, 8, 9}, 20, 9};
cout<<"Minimum value is "<<min(&arr);
 
  return 0;
}