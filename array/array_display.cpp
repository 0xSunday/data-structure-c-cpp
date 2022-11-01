// #include<iostream>
// using namespace std;
// struct array
// {
//   int a[10];
//   int size ;
//   int length;

// };
// int display(struct array arr){
//   for (int i = 0; i < arr.length; i++)
//   {
//     cout<<arr.a[i]<<endl;
//   }

// }

// int insert(struct array *arr,int index,int x){

//  if (index>=0 && index<arr->size)
//  {
//    for (int i = arr->length; i >index ; i--)
//    {
//      arr->a[i]=arr->a[i-1];
//    }
//    arr->a[index]=x;
//    arr->length++;

//  }

// }
// int append(struct array *arr,int x){
//   if (arr->length<arr->size)
//   {
//     arr->a[arr->length++]=x;
//   }

// }

// int main()
// {
//   struct array arr= {{1,5,78,1},10,5};

//    append(&arr,3);
//   insert(&arr,2,100);

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


int main()
{
  struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};

  display(arr);

  return 0;
}