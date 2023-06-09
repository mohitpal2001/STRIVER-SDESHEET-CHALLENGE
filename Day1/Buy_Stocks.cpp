#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices){
        int n = prices.size();
        int maxi = 0;
        int minSoFar = prices[0];
        for(int i = 0; i < n; i++){
            maxi = max(maxi , prices[i] - minSoFar);
            minSoFar = min(minSoFar , prices[i]);
        }
        return maxi;
}