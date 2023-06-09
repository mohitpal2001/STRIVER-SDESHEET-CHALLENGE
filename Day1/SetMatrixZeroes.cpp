#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	bool col = false;
	int m = matrix.size();
	int n = matrix[0].size();
	for(int i = 0; i < m; i++){
		if(matrix[i][0] == 0) col = true;
		for(int j = 1; j < n; j++){
			if(!matrix[i][j]){
				matrix[i][0] = matrix[0][j] = 0;
			}
		}
	}

	for(int i = m - 1; i >= 0; i--){
		for(int j = n - 1; j >= 1; j--){
			if(!matrix[i][0] || !matrix[0][j]){
				matrix[i][j] = 0;
			}
		}
		if(col) matrix[i][0] = 0;
	}
}