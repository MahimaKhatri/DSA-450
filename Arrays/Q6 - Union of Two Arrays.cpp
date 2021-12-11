#include <iostream>
#include<algorithm>

using namespace std;
void uniona(int a[], int b[], int n, int m)
{
  int count =0;
  int s[n+m];
  
  int i;
  for(i=0;i<n;i++)
  {
      s[i] = a[i];
  }
  
  
  int j=i,k;
  for(k=0;k<m;k++,j++)
  {
      s[j] = b[k];
  }
  
  sort(s,s+m+n);
  
  for(i =0;i<m+n;i++)
  {
      if(s[i] != s[i+1])
      {
          count++;
      }
  }
  cout<<"Union elts:"<< count;
}

int main()
{
    int a[100],b[100];
    int n,m;
    cin>>n>>m;
    
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for (int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    
    
    uniona(a,b,n,m);
    return 0;
    
}

