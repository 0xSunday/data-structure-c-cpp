#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int i,space =0;
  char s[] = "ethereum is the future of internet";
  for (i = 0; s[i] != '\0'; i++)
  {
    if (s[i]==' ')
    {
     space++;
    }
    
  }
  cout << "the words are present are "<<space+1;
  return 0;
}

main