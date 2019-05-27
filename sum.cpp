#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b=0,n,k;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a>b)
        {
            b=a;
        }
        //b+=a;
    }
    cout<<b<<endl;
}
