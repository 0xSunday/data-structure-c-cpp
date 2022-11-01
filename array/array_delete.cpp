#include<iostream>
using namespace std;

struct array{
  int a[10];
  int size;
  int length;
};
int display(struct array arr){
  for (int i = 0; i < arr.length; i++)
  {
    cout<<arr.a[i]<<endl;
  }
  
}
int eleminate(struct array *arr,int index){
 int x =0;
 x = arr->a[index];
 for (int i = index; i < arr->length-1; i++)
 {
    arr->a[i]=arr->a[i+1];
 }
arr->length--;

}
int main()
{
struct array arr = {{1,2,4,5,6},10,5};
eleminate(&arr,2);
display(arr);
  
  return 0;
}
