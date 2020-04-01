#include <bits/stdc++.h>
using namespace std;


int minCost_DP(int **input, int m, int n) {
	int **ans = new int*[m];
	for(int i = 0; i < m; i++) {
		ans[i] = new int[n];
	}

	ans[m-1][n-1] = input[m-1][n-1];

	// Last row
	for(int j = n - 2; j >= 0; j--) {
		ans[m-1][j] = input[m-1][j] + ans[m-1][j+1];
	}

	// Last col
	for(int i = m-2; i >= 0; i--) {
		ans[i][n-1] = input[i][n-1] + ans[i+1][n-1];
	}

	for(int i = m-2; i >= 0; i--) {
		for(int j = n-2; j >= 0; j--) {
			ans[i][j] = input[i][j] + min(ans[i][j+1], min(ans[i+1][j+1], ans[i+1][j]));
		}
	}
	return ans[0][0];
}
/******************MEMOIZATION*******************/

int minCostPath_Mem_helper(int **input, int m, int n, int i, int j, int **output) {
    if(i == m- 1 && j == n- 1) {
        return input[i][j];
    }
    
    if(i >= m || j >= n) {
        return INT_MAX;
    }
    
    // Check if ans already exists
    if(output[i][j] != -1) {
        return output[i][j];
    }
    
    // Recursive calls
    int x = minCostPath_Mem_helper(input, m, n, i, j+1, output);
    int y = minCostPath_Mem_helper(input, m, n, i+1, j+1, output);
    int z = minCostPath_Mem_helper(input, m, n, i+1, j, output);
    
    // Small Calculation
    int a = min(x, min(y, z)) + input[i][j];
    
    // Save the answer for future use
    output[i][j] = a;
    
    return a;
}

int minCostPath_Mem(int **input, int m, int n, int i, int j) {
    int **output = new int*[m];
    for(int i = 0; i < m; i++) {
        output[i] = new int[n];
        for(int j = 0; j < n; j++) {
            output[i][j] = -1;
        }
    }
    
    return minCostPath_Mem_helper(input, m, n, 0, 0, output);
}


/***************BRUTE FORCE*************************/

int minCostPath_helper(int **input, int m, int n, int i, int j) {
	// Base case
	if(i == m- 1 && j == n- 1) {
		return input[i][j];
	}

	if(i >= m || j >= n) {
		return INT_MAX;
	}

	// Recursive calls
	int x = minCostPath_helper(input, m, n, i, j+1);
	int y = minCostPath_helper(input, m, n, i+1, j+1);
	int z = minCostPath_helper(input, m, n, i+1, j);

	// Small Calculation
	int ans = min(x, min(y, z)) + input[i][j];
	return ans;
}

int minCostPath(int **input, int m, int n) {
	return minCostPath_helper(input, m, n, 0, 0);
}
/**********************/
int main() {
	int m, n;
	cin >> m >> n;
	int **input = new int*[m];
	for(int i = 0; i < m; i++) {
		input[i] = new int[n];
		for(int j = 0; j < n; j++) {
			cin >> input[i][j];
		}	
	}
	cout<<"The minimum cost path is :"<<endl;
	
	cout<<minCostPath(input,m,n)<<endl;		//BRUTE FORCE
	cout<<minCostPath_Mem(input,m,n,0,0)<<endl;//	MEMOIZATION
	cout<<minCost_DP(input,m,n);
}

