//Code By Romijul Laskar
#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<#x<<endl
#define d(x) cout<<x<<endl
using namespace std;

int sumOfarray(int n,int a[]){
    if(n<0){return 0;}
    return sumOfarray(n-1,a)+a[n];
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int x;
        cin>>x;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        cout<<sumOfarray(x-1,a); //x-1 because 0 based indexing
    }
    return 0;
}