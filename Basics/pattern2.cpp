#include<iostream>
using namespace std;

int main()
{
  //body
  int n,i,j;
  cin>>n;

  i =1;
  while(i<=n)
  {
    j=1;
    while(j<=n)
    {
      cout<<j<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}
/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
