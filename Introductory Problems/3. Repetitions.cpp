#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    int n = str.size();
    int max_freq,curr_freq;
    max_freq = curr_freq = 1;
    for(int i = 0;i<n-1;i++){
        (str[i]==str[i+1])?curr_freq++:curr_freq=1;
        max_freq = max(max_freq,curr_freq);
    }cout<<max_freq<<endl;
    return 0;
}
