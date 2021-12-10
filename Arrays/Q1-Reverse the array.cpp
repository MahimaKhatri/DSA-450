#include <iostream>

using namespace std;

int main()
{
    string s ;
    getline(cin,s);
    
    int n = s.length();
    
    int start =0,end=n-1;
    
    while(start< end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<"Reversed String "<<s;

    return 0;
}