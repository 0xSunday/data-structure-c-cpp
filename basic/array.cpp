using namespace std;
#include <iostream>
int main()
{
    //  int A [5];

    //  A [0] = 63;
    //  A [1] = 34;
    //  A [2] = 73;

    //  cout<<sizeof(A)<<endl; // you can use endl is place of \n , \n needs a " "( quatation mark) .
    // cout<<A[1]<<endl;
    // cout<<A[2]<<endl;
    // cout<<A[3]<<endl;

//     int A[5] = {1, 53, 43, 63, 66};

//     cout << A[4] << endl;

// for (int i = 0; i < 5; i++)
// {
//     /* code */
// }




int n, i;

float num[100], sum=0.0, average;
cout << "Enter the numbers of data: ";
cin >> n;
while (n > 100 || n <= 0)
{
cout << "Error! number should in range of (1 to 100)." << endl;
cout << "Enter the number again: ";
cin >> n;
}
for(i = 0; i < n; ++i)
{
cout << i + 1 << ". Enter number: ";
cin >> num[i];
sum += num[i];
}
average = sum / n;
cout << "Average = " << average<< endl;

 cout<<" "<<average;   
 

    return 0;
}



