#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    n=permutation.size();
        int k;
    int l;
    for(k=n-2;k>=0;k--){
        if(permutation[k]<permutation[k+1]){
            break;
        }
    }
    if(k<0){
        reverse(permutation.begin(),permutation.end());
        
    }else{
        for(l=n-1;l>k;l--){
            if(permutation[l]>permutation[k]){
                break;
            }
        }
        swap(permutation[k],permutation[l]);
        reverse(permutation.begin()+k+1,permutation.end());
    }
}