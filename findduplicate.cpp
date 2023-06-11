#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	sort(arr.begin(), arr.end());
	int a= arr[0];
	for(int i =1;i<n;i++){
		if(arr[i]==a){
			return a;
		}
		a=arr[i];
	}
	return a;
}
