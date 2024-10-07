//Code By Romijul Laskar
#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<#x<<endl
#define d(x) cout<<x<<endl
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,data,result=0;
        cin>>n;
        cin>>data;
        for(int i=0;i<n;i++)
        {
            int x=data%10;
            result+=x*pow(2,i);
            data=data/10;
        }
        d(result);
    }
    return 0;
}