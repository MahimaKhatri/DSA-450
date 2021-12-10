#include <iostream>
#include<algorithm>

using namespace std;
void move(int a[], int n)
{
   int pivot =0;
   int j=-1;
   for(int i =0;i<n;i++)
   {
       if(a[i]< pivot)
       {
           j++;
           swap(a[i],a[j]);
       }
   }
   //loop to print
   for(int i =0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
}

int main()
{
    int a[100];
    int n;
    cin>>n;
    
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    
    move(a,n);
    return 0;
    
}
