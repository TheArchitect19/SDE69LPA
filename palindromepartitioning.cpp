#include <bits/stdc++.h> 
#define ll int
bool ispa(ll i,ll j,string s){
    while(i<j){
        if(s[i]!=s[j])return false;
        i++;j--;
    }
    return true;
}
int palindromePartitioning(string str) {
    // Write your code here
    ll n = str.size();
    vector<ll>dp(n+1,0);
    dp[n]=0;
    for(ll i=n-1;i>=0;i--){
        ll mi =INT_MAX;
        for(ll j=i;j<n;j++){
            if(ispa(i,j,str)){
                ll cost = 1+dp[j+1];
                mi=min(mi,cost);
            }
        }
        dp[i]=mi;
    }
    return dp[0]-1;
    
    
}
