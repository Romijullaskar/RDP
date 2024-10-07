//Code By Romijul Laskar
#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<#x<<endl
#define d(x) cout<<x<<endl
using namespace std;
int main()
{
    srand(time(0));
    int n;cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i]=rand()%10;
    }
    for(auto &i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Minimum :"<<*min_element(v.begin(),v.end())<<endl;
    cout<<"Maximum :"<<*max_element(v.begin(),v.end())<<endl;
    cout<<"Sum :"<<accumulate(v.begin(),v.end(),0)<<endl; //0 is initial sum count
    cout<<"Count of 5 :"<<count(v.begin(),v.end(),5)<<endl;
    auto it=find(v.begin(),v.end(),9);
    if(it==v.end()){cout<<"9 Not Found"<<endl;}else{cout<<"Found 9"<<endl;}
    cout<<"reversed ";
    reverse(v.begin(),v.end());
    for(auto &i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //Lambda Function
    cout<< [](int x){return x+2;}(8)<<endl;//Direct using
    auto sum =[](int x,int y){return x+y;};//by variables
    cout<<sum(10,90)<<endl;
    
    return 0;
}
//complexities o(n);
//count and find in set or map O(logN) , set.find , map.count