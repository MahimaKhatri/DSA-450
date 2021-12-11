//Kadane's Algorithm


#include <stdio.h>
#include <iostream>
#include<algorithm>
#include<climits>

using namespace std;
void largestsum (int a[], int n)
{
    int max = INT_MIN;
    int current = 0;
    
    for(int i =0 ; i<n; i++)
    {
        current+= a[i];
        if(current > max)
        {
            max = current;
        }
        if(current < 0)
        {
            current=0;
        }
    }
    cout<<"Largest Sum of Subarray"<<max;
    
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
   
   largestsum(a,n);
}
