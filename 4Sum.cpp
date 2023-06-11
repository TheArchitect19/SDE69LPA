#include <bits/stdc++.h>

string fourSum(vector<int> nums, int target, int n) {
    // Write your code here.
    sort(nums.begin(),nums.end());
        
        vector<vector<int>>ans;
        for(int i =0;i<n;i++){
            if(i>0 and nums[i]==nums[i-1])continue;
            for(int j = i+1;j<n;j++){
                if(j>i+1 and nums[j]==nums[j-1])continue;
                int l = j+1;
                int h = n-1;

                while(l<h){
                    long long sum = nums[i];
                    sum+=nums[j];
                    sum+=nums[l];
                    sum+=nums[h];
                    if(sum==target){
                        return "Yes";
                    }
                    else if(sum>target)h--;
                    else l++;
                }

            }
        }
        return "No";

    
}
