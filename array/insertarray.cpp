

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
// int insert(struct array *arr,int num){
  
//   // int i = arr->length-1;
//   // if (arr->length==arr->size)
  
//   // return false;
  
  
//   // while ( i>=0 && arr->a[i]>num) 
//   // {
//   //   arr->a[i+1]=arr->a[i];
//   //   i--;
//   // }
//   // arr->a[i]= num;
//   // arr->length++;

// int i;
// for ( i = arr->length-1; arr->a[i]>num; i--)
// {
//  arr->a[i+1]= arr->a[i];    
// }
// arr->a[i]=num;


// }
// int main()
// { 
//   struct array arr = {{1, 2, 4, 5, 6, 7, 8, 12, 16}, 20, 9};
// insert(&arr,9);
//   display(arr);
//   return 0;
// }



#include <iostream>
using namespace std;
struct Array
{
  int A[10];
  int size;
  int length;
};
void display(struct Array arr)
{
  for (int i = 0; i < arr.length; i++)
  {
    cout << arr.A[i] << endl;
  }
}

void append(struct Array *arr,int num){
 if (arr->length<arr->size)
 {
  arr->A[arr->length++]=num;
 }
 
}

int main()
{
  struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};
append(&arr,12);
  display(arr);

  return 0;
}