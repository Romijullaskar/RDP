//Code By Romijul Laskar
#include<bits/stdc++.h>
#define ll long long
#define p(x) cout<<#x<<endl
#define d(x) cout<<x<<endl
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }else if(s[i]==')' && st.top()=='(' || s[i]=='}' &&st.top()=='{' || s[i]==']' && st.top()=='['){
            if(st.empty()){
                cout<<"Not Balanced";
                return 0;
            }
            st.pop();
        }
    }
    if(st.empty()){
        cout<<"Balanced";
    }else{
        cout<<"Not Balanced";
    }
    return 0;
}