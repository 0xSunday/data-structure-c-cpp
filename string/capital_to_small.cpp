// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//   int i;
//   char s[]= "SUNIL";
//   for ( i = 0; s[i]!='\0'; i++)
//   {
//     s[i] = s[i]+32;
//   }
//   cout<< "the lower case of SUNIL is "<<s;
//   return 0;
// }

// togle the uper to lower and lower to upper

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int i;
  char s[] = "SuNil";
  for (i = 0; s[i] != '\0'; i++)
  {
    if (s[i]>=65 && s[i]<=90)
    {
      s[i] = s[i] + 32;
    }
    else
    {
      s[i] = s[i] - 32;
    }
  }
  cout << s;
  return 0;
}
