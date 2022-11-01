// #include <iostream>
// using namespace std;

// struct array
// {
//   int a[20];

//   int size;
//   int length;
// };

// int display(struct array arr)
// {
//   for (int i = 0; i < arr.length; i++)
//   {
//     cout << arr.a[i] << endl;
//   }
// }
// int reverse(struct array *arr)
// {

//   int *b = new int[arr->length];

//   for (int i = arr->length - 1, j = 0; i >= 0; i--, j++)
//   {

//     b[j] = arr->a[i];
//   }
//   for (int i = 0; i < arr->length; i++)
//   {
//     arr->a[i] = b[i];
//   }

// }
// int main()
// {
//   struct array arr = {{1, 2, 4, 5, 122, 7, 8, 8, 9}, 20, 9};
//   reverse(&arr);
//   display(arr);

//   return 0;
// }

// another way of reversing array



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
int reverse(struct array *arr)
{
  for (int i = 0, j = arr->length - 1; i < j; i++)
  {
    int temp = 0;
    temp = arr->a[i];
    arr->a[i] = arr->a[j];
    arr->a[j] = temp;
  }
}
int main()
{ 
  struct array arr = {{1, 2, 4, 5, 122, 7, 8, 8, 9}, 20, 9};
  reverse(&arr);
  display(arr);
  return 0;
}

