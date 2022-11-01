#include<iostream>
using namespace std;

struct array{
  int a[10];
  int size;
  int length;
};
int swap(int *x,int *y){
  int a =0;
  a= *x;
   *x = *y;
 *y=a;
 return *x,*y;
}
int display(struct array arr){
  for (int i = 0; i < arr.length; i++)
  {
    cout<<arr.a[i]<<endl;
  }
  
}
int linear(struct array *arr,int x){
    for (int i = 0; i < arr->length; i++)
    {
      if (x==arr->a[i])
      {
        swap(arr->a[i],arr->a[i-1]);
        return i;
      }
      
    }return -1;
    
  }
int main()
{
  struct array arr={{1,2,3,4,5},10,5};

cout<<"the index is "<<linear(&arr,3)<<endl;

display(arr);
  return 0;
}
