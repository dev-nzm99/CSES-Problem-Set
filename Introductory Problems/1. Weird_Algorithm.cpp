#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
    ll n;cin>>n;
    cout<<n<<" ";
    while(n>1){
        (n&1)?n=n*3+1:n/=2;
        cout<<n<<" ";
    }cout<<endl;     
    return 0;
}
