#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int i,j;

  i=1;
  while(i<=n)
  {
    j=1;
    while(j<=i)
    {
      cout<<i<<" ";
      j++;

    }
    cout<<endl;
    i++;
  }
}
/*
1
2 2
3 3 3
4 4 4 4
*/
