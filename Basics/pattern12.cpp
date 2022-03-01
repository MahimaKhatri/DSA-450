#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int i,j;
  i=1;
  char ch ='A';
  while(i<=n)
  {
    j=1;
    while(j<=n)
    {
      char result = 'A'+i+j-2;
      cout<<result<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}

/*
A B C
B C D
C D E
*/
