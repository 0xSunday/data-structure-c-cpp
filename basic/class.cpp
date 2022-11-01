#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;

public:
    rectangle()
    {
        length = 0;
        breath = 0;
    }
    rectangle(int l, int b)
    {
        length = l;
        breath = b;
    }

    int area()
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * (length + breath);
    }

    void changelength(int l)
    {
        length = l;
    }

    void changebreath(int b)
    {
        breath = b;
    }
};
int main()
{
    rectangle r = {15, 10};
    cout << "the area of rectangel is: " << r.area() << endl;
    cout << "the perimiter of rectangel is: " << r.perimeter() << endl;

    return 0;
}
