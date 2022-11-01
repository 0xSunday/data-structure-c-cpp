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
int set(struct array *arr, int index, int n)
{

  return arr->a[index] = n;
}

int main()
{
  struct array arr = {{1, 2, 4, 5, 6, 7, 8, 8, 9}, 20, 9};
  set(&arr, 3, 76);
  display(arr);
  return 0;
}