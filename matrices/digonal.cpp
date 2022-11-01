// #include <iostream>
// using namespace std;
// void set(int A[], int i, int j, int x)
// {
//   if (i == j)
//   {
//     A[i - 1] = x;
//   }
// }
// int get(int A[], int i, int j, int x)
// {
//   if (i == j)
//   {
//     return A[j - 1] ;
//   }
//   else
//   {
//     return 0;
//   }
// }
// int display(int A[], int n)
// {
//   int i, j;
//   for (int i = 0; i < n; i++)
//   {
//     for (j = 0; j < n; j++)
//     {
//       if (i == j)
//       {
//         cout << " " << A[i];
//       }
//       else
//         cout << " 0 ";
//     }
//     cout << endl;
//   }
// }

// int main()
// {
//   int A[10];
//   int n;
//   n = 4;
//   set(A, 1, 1, 5);
//   set(A, 2, 2, 9);
//   set(A, 3, 3, 12);
//   set(A, 4, 4, 14);
//   display(A, n);
//   return 0;
// }

// using classes

// #include <iostream>
// using namespace std;
// class digonal
// {
// private:
//   int *A;
//   int n;

// public:
//   digonal(int n)
//   {
//     this->n = n;
//     A = new int[n];
//   }
//   void set(int i, int j, int x);
//   int get(int i, int j);
//   void display();

// };

// void digonal::set(int i, int j, int x)
// {

//   {
//     if (i == j)
//     {
//       A[i - 1] = x;
//     }
//   }
// }

// int digonal::get(int i, int j)
// {
//   if (i == j)
//   {
//     return A[j - 1];
//   }
//   else
//   {
//     return 0;
//   }
// }

// void digonal::display()
// {
//   int i, j;
//   for ( i = 0; i < n; i++)
//   {
//     for (j = 0; j < n; j++)
//     {
//       if (i == j)
//       {
//         cout << " " << A[i];
//       }
//       else
//         cout << " 0 ";
//     }
//     cout << endl;
//   }
// }

// int main()
// {
//   digonal d(4);

//   d.set( 1, 1, 5);
//   d.set( 2, 2, 9);
//   d.set( 3, 3, 12);
//   d.set( 4, 4, 14);
//   d.display();

//   return 0;
// }

// reverse intiger
class Solution
{
public:
  int reverse(int x)
  {
    if (x < 0)
    {
      int reminder, reverse;
      while (x != 0)
      {
        reminder = x % 10;
        reverse = reverse * 10 + reminder;
        x = x / 10;
      }
    
    }
    else
    {
      while (x != 0)
      {
        int reminder, reverse;
        reminder = x % 10;
        reverse = reverse * 10 + reminder;
        x = x / 10;
      }
    
    }
     return (int) (isNegative ? -reverse : reverse);
  }

};