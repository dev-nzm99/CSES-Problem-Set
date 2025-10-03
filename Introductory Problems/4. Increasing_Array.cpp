#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
    int n;cin>>n;
    vector<ll> a(n);
    for(auto &x:a)cin>>x;
    ll no_of_moves = 0;
    for(int i = 1;i<n;i++){
        if(a[i]>=a[i-1])continue;
        no_of_moves += abs(a[i]-a[i-1]);
        a[i] = a[i-1];
    }
    cout<<no_of_moves<<endl;
    return 0; 
}
