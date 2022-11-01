#include <iostream>
using namespace std;

struct array
{
  int a[20];
  int size;
  int length;

};
int get(struct array arr,int index){
if (index>0 && index<arr.length);
{
  return arr.a[index];
}

}

int main(int argc, char const *argv[])
{
 struct array arr={1,2,4,5,6,7,8,8,9};
 cout<<get(arr,3);
 
  return 0;
}
