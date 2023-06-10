#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& nums1, vector<int>& nums2, int m, int n) {
	    vector<int> ans(n+m);
        int i = 0,j = 0,k = 0;
        while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
                ans[k] = nums1[i];
                k++;
                i++;
            }
            else{
                ans[k] = nums2[j];
                k++;
                j++;
            }
        }
        
        while(i < m){
            ans[k] = nums1[i];
            k++;
            i++;
        }
        
        while(j < n){
            ans[k] =nums2[j];
            k++;
            j++;
        }
        
        return ans;
}