// finding the multiple missing element in a array.

// #include<iostream>
// using namespace std;
// int Missing2(int arr2[], int n2)
// {
//   int start = arr2[0];
  
//   int missing;
//   for (int i = 0; i < n2; i++)
//   {
//     if (arr2[i] - i != start)
//     {
//       cout<<i+start<<endl;
//      start++;
//     }
//   }
//   return 0;
// }


// int main()
// {
  

//   int arr2[] = {4, 5, 6, 8, 10,12};
//   int n2 = sizeof(arr2) / sizeof(arr2[0]);
//   int result2 = Missing2(arr2, n2);

//   return 0;
// }

// another way

#include<iostream>
using namespace std;
int Missing2(int arr2[], int n2)
{
 int height =12;
 int lowest =4;
  int h[n2];

  for (int i = 0; i < n2; i++)
  {
    h[arr2[i]]++;
  }
  for (int i = lowest; i < height; i++)
  {
   if (h[i]==0)
   {
    cout<<i;
   }
   
  }
  
  return 0;
}


int main()
{
  

  int arr2[] = {4, 5, 6, 7, 10,12};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  int result2 = Missing2(arr2, n2);

  return 0;
}