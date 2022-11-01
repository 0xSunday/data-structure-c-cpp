// couting the vowels in the sentence

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int i, vowel = 0, rest = 0;
  char s[] = "helo my name is sunil";
  for (i = 0; s[i] != '\0'; i++)
  {
    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'U' || s[i] == 'I' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
      vowel++;
    }

    else if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
    {
      rest++;
    }
  }

  cout <<"vowel numbers are "<< vowel<<endl;
  cout<<"rest elements are "<<rest;
  return 0;
}
#include<iostream>
using namespace std;
int main()
{
    
   return 0;
}