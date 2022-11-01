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
int max(struct array *arr)
{
 
    int max = 0;
    max = arr->a[0];
    for (int i = arr->a[1]; i < arr->length; i++)
    {
      if (arr->a[i] > max)
      {
        max = arr->a[i];
      }
    }
   return max;


}

int main()
{
  struct array arr = {{1, 2, 4, 5, 122, 7, 8, 8, 9}, 20, 9};
cout<<max(&arr);
 
  return 0;
}