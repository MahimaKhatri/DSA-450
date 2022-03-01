#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int i,j;
  i=1;
  char ch = 'A';
  while(i<=n)
  {
    j=1;
    char result=ch+n-i;
    while(j<=i)
    {
      cout<<result<<" ";
      result++;
      j++;
    }
    cout<<endl;
    i++;
  }

}

/*
D
C D
B C D
A B C D
*/
