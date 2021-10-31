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
        int x,y;
        cin>>x>>y;
        int res=0;
        while(x!=y){
            if(x<y){
                x=x+2;
                res++;
            }
            else{
                x=x-1;
                res++;
            }
        }
        cout<<res<<endl;
    }
}
