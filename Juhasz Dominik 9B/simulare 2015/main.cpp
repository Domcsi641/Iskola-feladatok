#include <iostream>

using namespace std;
int v[1001];
int main()
{
    int n,i;
    cin>>n;
    while(n)
    {
        v[n%10]++;
        n/=10;
    }
    for(i=0;i<=9;i++)
    {
        if(v[i]>0)
            cout<<i<<" ";
    }
}
