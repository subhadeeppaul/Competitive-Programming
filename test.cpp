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
       int n=5;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       int c1=0,c2=0;
       for(int i=0;i<n;i++){
           if(a[i]==1){
               c1++;
           }
           if(a[i]==2){
               c2++;
           }
       }
       if(c1>c2){
           cout<<"india"<<endl;
       }
       else if (c1<c2){
           cout<<"england"<<endl;
       }
       else if(c1==c2){
           cout<<"draw"<<endl;
       }
    }
}
