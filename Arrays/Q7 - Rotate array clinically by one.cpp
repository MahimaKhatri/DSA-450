#include <stdio.h>
#include <iostream>
#include<algorithm>

using namespace std;
void rotate (int a[], int n)
{
    int temp = a[n-1];
    
    for(int i = n-1; i >0 ;i--)
    {
        a[i]= a[i-1];
    }
    
    a[0] = temp;
    
    cout<<"Rotated array"<<endl;
    
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
   int a[100];
   int n ;
   cin>>n;
   
   for(int i =0;i<n;i++)
   {
       cin>>a[i];
   }
   
   rotate(a,n);
}