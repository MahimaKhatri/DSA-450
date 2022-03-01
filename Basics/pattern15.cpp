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
    while(j<=i)
    {
      char result=ch+i+j-2;
      cout<<result<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}

/*
A
B C
C D E
E F G H
*/
