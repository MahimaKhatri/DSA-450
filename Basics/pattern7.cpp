#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int i,j;
  i=1;
  int count = 1;
  while(i<=n)
  {
    j=1;
    while(j<=i)
    {
      cout<<count<<" ";
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
}
/*
1
2 3
4 5 6
7 8 9 10
*/