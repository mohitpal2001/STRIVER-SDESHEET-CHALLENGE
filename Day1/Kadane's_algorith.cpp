#include <bits/stdc++.h> 
long long maxSubarraySum(int nums[], int n)
{
    long long ans = INT_MIN;
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += nums[i];
        if(sum < 0){
            sum = 0;
        }
        ans = max(sum , ans);
    }
    return ans;
}