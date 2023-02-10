#include <iostream>
using namespace std;
int main()
{
   string sentence;
   cout<<"Enter a string:";
   getline(cin,sentence);
   char alphabet;
   for(int i=0; sentence[i]!='\0';i++)
   {
    alphabet=sentence[i];
    if(alphabet>='a'&&alphabet<='z')
    {
        alphabet=alphabet+1;
        if(alphabet>'z')
        {
            alphabet='a';
        }
        sentence[i]=alphabet;
    }
    else if(alphabet>='A'&&alphabet<='Z')
    {
        alphabet=alphabet+1;
        if(alphabet>'Z')
        {
            alphabet='A';
        }
        sentence[i]=alphabet;
    }
    
   }
   cout<<sentence;
}