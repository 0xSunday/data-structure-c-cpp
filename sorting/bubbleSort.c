// #include <stdio.h>
// int bubbleSort(int A[], int n)
// {
//   int temp,flag=0;
//   for (int i = 0; i < n - 1; i++)
//   {
//     for (int j = 0; j < n - 1 - i; j++)
//     {
//       if (A[j] > A[j + 1])
//       {
//         temp = A[j];
//         A[j] = A[j + 1];
//         A[j + 1] = temp;
//          flag++;
//       }
//     }
//   }
//   return flag;
// }
// void display(int A[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     printf("%d\n", A[i]);
//   }
// }
// int main()
// {
//   int A[] = {8, 5, 7, 3, 2};
//   int n = sizeof(A) / sizeof(A[0]);

//  int totalSwap= bubbleSort(A, n);

//   display(A, n);
//   printf("\n");
//   printf("total %d times swap was done",totalSwap);
//   return 0;
// }

#include <stdio.h>

void bubblesort(int A[], int n)
{

  int temp;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1 - i; j++)
    {
      if (A[j] > A[j + 1])
      {
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }
}
void display(int A[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", A[i]);
  }
}
int main()
{
  int A[] = {8, 5, 7, 3, 2};
  int n = sizeof(A) / sizeof(A[0]);
  bubblesort(A, n);
  display(A, n);

  return 0;
}