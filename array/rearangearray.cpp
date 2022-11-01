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

int rearange(struct array *arr)
{
  int i = 0, j = arr->length - 1;
  while (i < j)
  {
    while (arr->a[i] < 0)
    {
      i++;
    }
    while (arr->a[j] >= 0)
    {
      j--;
    }
    if (i < j)
    {
      int temp = 0;
      temp = arr->a[i];
      arr->a[i] = arr->a[j];
      arr->a[j] = temp;
    }
  }
}

int main()
{
  struct array arr = {{1, -3, -5, 6, 7, 8, -9, 12, 24, -26}, 20, 10};
  rearange(&arr);
  display(arr);
  return 0;
}
