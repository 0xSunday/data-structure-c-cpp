// printing first then calling funcion

// #include <iostream>
// using namespace std;

// void fun(int n)
// {
//     if (n > 0)
//     {
//         cout << "" << n << endl;
//         fun(n - 1);
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int z = 3;
//     fun(z);
//     return 0;
// }





// first calling funcion then printing
#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        
        fun(n - 1);
        cout<< n << endl;
    }
}
int main()
{
    int x = 3;
    fun(x);
    return 0;
}
