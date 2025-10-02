#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
    ll n,total,sum;cin>>n;
    total = (n*(n+1))/2;n--;
    sum = 0;
    while(n--){
        ll a;cin>>a;
        sum += a; 
    }cout<<(total-sum)<<endl;     
    return 0;
}
