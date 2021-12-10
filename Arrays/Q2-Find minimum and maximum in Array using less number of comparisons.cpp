#include <iostream>

using namespace std;
void find(int a[], int n)
{
    int max,min;
    if(n == 1)
    {
        min=a[0];
        max=a[0];
    }
    else{
        if(a[0]<a[1])
        {
            min = a[0];
            max = a[1];
        }
        else{
            max = a[0];
            min = a[1];
        }
        
        for(int i=2;i<n;i++)
        {
            if(a[i]<min)
            {
                min = a[i];
                
            }
            if(a[i]> max)
            {
                max= a[i];
            }
        }
    }
    cout<<"Minimum-"<<min<<endl;
    cout<<"Maximum-"<<max<<endl;
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
    
    
    find(a,n);
    return 0;
    
}