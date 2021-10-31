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
        int a,b,c;
        cin>>a>>b>>c;
        if(a==7 or b==7 or c==7){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
