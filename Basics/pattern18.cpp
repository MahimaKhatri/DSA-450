#include<iostream>
using namespace std;

int main()
{
  int n,i,j,space;
  cin>>n;
  i=1;
  while(i<=n)
  {
    space =i-1;
    while(space)
    {
      cout<<" ";
      space--;
    }

    j=1;
    while(j<=n-i+1)
    {
      cout<<"*";
      j++;
    }
    cout<<endl;
    i++;
  }
}

/*
* * * *
  * * *
    * *
      *
*/
