#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int i,j;
  i=1;
  char ch = 'A';
  int value = 0;
  while(i<=n)
  {
    j=1;
    while(j<=i)
    {
      char result = ch+value;
      cout<<result<<" ";
      value++;
      j++;
    }
    cout<<endl;
    i++;
  }
}

/*
A
B C
D E F
*/
