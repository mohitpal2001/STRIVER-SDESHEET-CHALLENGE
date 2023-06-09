#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{
   int low = 0 , mid = 0 , high = n -1;
   while(mid <= high){
      if(nums[mid] == 0) swap(nums[low++] , nums[mid++]);
      else if(nums[mid] == 2) swap(nums[mid] , nums[high--]); 
      else mid++;
   }

}