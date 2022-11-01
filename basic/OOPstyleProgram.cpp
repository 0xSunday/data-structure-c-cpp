// #include <iostream>
// using namespace std;

// class rectangle
// {
// public:#include <iostream>
// using namespace std;

// struct rectangle
// {
//   int length;
//   int breath;
// };

// void initialise (rectangle *r, int l, int b)
// {
//   r->breath = b;
//   r->length = l;
// };

// int area(rectangle r)
// {
//   return r.length * r.breath;
// }
// int perimeter(rectangle r)
// {
//   int p = 2 * (r.length + r.breath);
//   return p;
// }

// int main()
// {
//   int l, b;
//   rectangle r = {0, 0};
//   cout << "Enter lenght anb breath of rectangle" << endl;

//   cin >> l >> b;

//   initialise(&r,l,b);
//   int a = area(r);
//   int peri = perimeter(r);
//   cout << "area of rectangle is: " << a << endl
//        << "peramter of rectangle is : " << peri;

//   return 0;
// }
// #include <iostream>
// using namespace std;

// struct rectangle
// {
//   int length;
//   int breath;
// };

// void initialise (rectangle *r, int l, int b)
// {
//   r->breath = b;
//   r->length = l;
// };

// int area(rectangle r)
// {
//   return r.length * r.breath;
// }
// int perimeter(rectangle r)
// {
//   int p = 2 * (r.length + r.breath);
//   return p;
// }

// int main()
// {
//   int l, b;
//   rectangle r = {0, 0};
//   cout << "Enter lenght anb breath of rectangle" << endl;

//   cin >> l >> b;

//   initialise(&r,l,b);
//   int a = area(r);
//   int peri = perimeter(r);
//   cout << "area of rectangle is: " << a << endl
//        << "peramter of rectangle is : " << peri;

//   return 0;
// }



// #include<iostream>
// using namespace std;

// class rectangle
//  {

//    public:
//   int length;
//   int breath;


// void initialise (int l, int b)
// {
//   breath = b;
//   length = l;
// }

// int area()
// {
//   return length * breath;
// }
// int perimeter()
// {
//   int p = 2 * (length + breath);
//   return p;
// }
// };


// int main()
// {
//   int l, b;
//   rectangle r = {0, 0};
//   cout << "Enter lenght anb breath of rectangle" << endl;

//   cin >> l >> b;

//   r.initialise(l,b);
//   int a = r.area(); 
//   int peri = r.perimeter();
//   cout << "area of rectangle is: " << a << endl
//        << "peramter of rectangle is : " << peri;

//   return 0;
// }





#include <iostream>
using namespace std;
class Employee
{

public:
    string name;
    string company;
    int age;

     Employee(string name, string company, int age)
    {
        name = name;
        company = company;
        age = age;
    }

    void introduce()
    {
        std::cout << "Name is - " << name << std::endl;
         std::cout << "company is - " << company << std::endl;
    }
   
};
int main()
{
    Employee Employee1 = Employee("sunil", "meta", 18);
    Employee1.introduce();
    Employee Employee2 = Employee("siva", "google", 19);
    Employee1.introduce();
    return 0;
}
