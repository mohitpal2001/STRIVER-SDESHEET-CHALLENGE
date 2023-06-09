#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long>> ans(1 , {1});
    for(int i = 2; i <= n; i++){
        vector<long long> temp(i , 1);
        int prevRow = i - 2;
        for(int j = 1; j < i - 1; j++){
            temp[j] = ans[prevRow][j] + ans[prevRow][j-1];
        }
        ans.push_back(temp);
    }

    return ans;
}