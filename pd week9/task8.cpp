#include <iostream>
using namespace std;
main()
{
  string s1 = "aabcc";
  string s2 = "adcaa";
  int count = 0;

  for (int i = 0; s2[i] != '\0'; i++)
  {
    for (int j = 0; s2[j] != '\0'; j++)
    {
      if (s1[i] == s2[j])
      {
        count++;
      }
    }
  }
  cout << "Number of same characters: " << count;
}
