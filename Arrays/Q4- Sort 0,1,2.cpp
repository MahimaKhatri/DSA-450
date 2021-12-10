#include <iostream>
#include<algorithm>

using namespace std;
void sort(int a[], int n)
{
   int c0=0,c1=0,c2=0;
   //loop to count
   for(int i=0;i<n;i++)
   {
       if(a[i]==0)
       {
           c0++;
       }
       if(a[i]==1)
       {
           c1++;
       }
       if(a[i]==2)
       {
           c2++;
       }
       
   }
   int k=0;
   for(int i=0;i<c0;i++)
   {
       a[k]=0;
       k++;
   }
   for(int i=0;i<c1;i++)
   {
       a[k]=1;
       k++;
   }
   for(int i =0;i<c2;i++)
   {
       a[k]= 2;
       k++;
   }
   
   //to print array 
   cout<<"Sorted array"<<endl;
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
    
    
    sort(a,n);
    return 0;
    
}