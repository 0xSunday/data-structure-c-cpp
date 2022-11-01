// #include<iostream>
// using namespace std;

// void fun (int A[], int n)

// {
//     for (int i = 0; i<n; i++);

// }

// int main()
// {
//   int A [ ] = {3,5,23,52,9};
//   int n = 5;
//   fun (A,n);
//   for(int x :A)
//   cout<<x<<" "<<endl;

//     return 0;
// }





// A FUNCTION RETURNING AN ARRAY
#include <iostream>
using namespace std;

int * fun(int n)

{
    int *p;
    p = new int [n];

    for (int i = 0; i < n; i++)
        p[i] = i+1;

    return p;
}

int main()
{
int *ptr, n1 = 5;
ptr = fun(n1);
for (int i = 0; i <n1; i++)
{
    cout <<ptr[i]<<endl;
}

    return 0;
}
