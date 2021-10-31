#include<bits/stdc++.h>
#define ll  long long
using namespace std;
int lcm(ll a, ll b){
    return (a*b)/__gcd(a,b);
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        cout<<a/b<<endl;
    }
}
