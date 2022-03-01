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
      char result = ch+i-1;
      cout<<result<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}
/*
A A A
B B B
C C C
*/
