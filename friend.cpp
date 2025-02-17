// #include <iostream>
// using namespace std;

// class friends1
// {
// private:
//   int a, b;

// public:
//   void input()
//   {
//     cout << "enter 2 input " << endl;
//     cin >> a >> b;
//   }
//   friend void Adds(friends1 &f);
// }

// void
// Adds(friends1 &f)
// {
//   int c;
//   c = f.a + f.b;
//   cout << "sum= " << c;
// }
// int main()
// {

//   return 0;
// }

#include <iostream>

using namespace std;

// define a class

class operatorOverlaodingExample

{

private:
  int myVar;

public:
  operatorOverlaodingExample() : myVar(8) {}

  void operator++()
  {

    myVar = myVar + 20;
  }

  void display()
  {

    cout << "The updated value is: " << myVar;

    cout << "\n\n";
  }
};

int main()

{

  operatorOverlaodingExample obj;

  // call the function "viod operator +++()"

  ++obj;

  obj.display();

  return 0;
}