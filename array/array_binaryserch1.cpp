// itretive version

// #include <iostream>
// using namespace std;
// struct array
// {
//   int A[20];
//   int size;
//   int length;
// };
// int bserch(struct array arr, int key)
// {
//   int l = 0, h = arr.length - 1, mid;
//   while (l <= h)
//   {
//     mid = {(l + h) / 2};
//     if (key == arr.A[mid])
//     {
//       return mid;
//     }
//     else if (key < arr.A[mid])
//     {
//       h = mid - 1;
//     }
//     else
//     {
//       l = mid + 1;
//     }
//   }
//   return -1;
// }
// int main()
// {
//   struct array arr = {{1, 3, 4, 6, 7, 8}, 20, 5};
//  cout<< bserch(arr,5);
//   return 0;
// }
// recursive version


#include <iostream>
using namespace std;
struct array
{
  int A[20];
  int size;
  int length;
};
int bserch(int a[], int l, int h, int key)
{
  int mid;
  if (l <= h)
  {
    mid = (l + h) / 2;
    if (key == a[mid])
    {
      return mid;
    }
    else if (key < a[mid])
    {
      return bserch(a, l, mid - 1, key);
    }
    else
    {
      return bserch(a, mid + 1, h, key);
    }
  }
  return -1;
}
int main()
{
  struct array arr = {{1, 3, 4, 6, 7, 8}, 20, 5};
  cout << bserch(arr.A, 0, arr.length, 7);
  return 0;
}
