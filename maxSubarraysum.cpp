#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long res=0;
    long long cur=0;
    for(int i=0;i<n;i++){
        cur+=arr[i];
        res=max(cur,res);
        if(cur<0){
            cur=0;
        }

    }
    return res;
}