#include<iostream>
using namespace std;

int main()
{
  int n,i,j;
  cin>>n;

  i = 1;
  while(i<=n)
  {
    j=1;
    while(j<=n)
    {
      cout<<n-j+1<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}
/*
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/
