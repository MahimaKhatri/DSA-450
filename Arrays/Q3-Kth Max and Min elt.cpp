#include <iostream>
#include<algorithm>

using namespace std;
void find(int a[], int n,int k)
{
   sort(a,a+n);
   cout<<k<<"th Minimum-"<<a[k-1]<<endl;
   cout<<k<<"th Maximum-"<<a[n-k]<<endl;
}

int main()
{
    int a[100];
    int n;
    cin>>n;
    int k;
    cin>>k;
    
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    
    find(a,n,k);
    return 0;
    
}