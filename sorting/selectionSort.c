// #include <stdio.h>

// void display(int A[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     printf("%d\n", A[i]);
//   }
// }

// void selectionSort(int A[], int n)
// {
//   int i, j, k, temp;
//   for (int i = 0; i < n - 1; i++)
//   {
//     for (int j = k = i; j < n ; j++)
//     {
//       if (A[j]<A[k])
//       {
//         k = j;
//       }
//     }
//     temp = A[i];
//     A[i] = A[k];
//     A[k] = temp;
//   }
// }
// int main()
// {
//   int A[] = {8, 5, 7, 3, 2};
//   int n = sizeof(A) / sizeof(A[0]);

//   selectionSort(A, n);
//   display(A, n);
//   return 0;
// }

#include <stdio.h>

void display(int A[], int n)
{

  for (int i = 0; i < n; i++)
  {
    printf("%d \n", A[i]);
  }
}

void SelectionSort(int A[], int n)
{
  int i, j, k, temp;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = k = i; j < n; j++)
    {
      if (A[j] < A[k])
      {
        k = j;
      }
    }
    temp = A[i];
    A[i] = A[k];
    A[k] = temp;
  }
}

int main()
{
  int A[] = {23, 41, 5, 6, 1, 3, 53, 155, 21};
  int n = sizeof(A) / sizeof(A[0]);
  SelectionSort(A, n);
  display(A, n);
  return 0;
}