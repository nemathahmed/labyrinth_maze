#include <bits/stdc++.h> 
#include "common.h"
#include "functions.h"
using namespace std; 

const int R=5; 
const int C =7; 
const int M =5; 
const int N =7; 
const int n =5; 
const int m =7;



// Finding the longest path in the largest hole found

void findlargestpath(int mat[M][N], int visited1[M][N], int i, int j,
				int x, int y, int& max_dist, int dist, int num)
{
    
    
	
	// destination not possible from current cell
	if (mat[i][j] == 0){
	cout<<"yes";
		return;
	}
	// if destination is found, update max_dist
	if (i == x && j == y) 
	{
		max_dist = max(dist, max_dist);
		return;
	}
	
	// set (i, j) cell as visited
	visited1[i][j] =1;
	result[i][j]=num;
	//cout<<max_dist<<endl;
	// go to bottom cell
	if (isValid(i + 1, j) && isSafe(mat, visited1, i + 1, j))
		findlargestpath(mat, visited1, i + 1, j, x, y, max_dist, dist + 1,num+1);

	// go to right cell			
	if (isValid(i, j + 1) && isSafe(mat, visited1, i, j + 1))
		findlargestpath(mat, visited1, i, j + 1, x, y, max_dist, dist + 1,num+1);
	
	// go to top cell
	if (isValid(i - 1, j) && isSafe(mat, visited1, i - 1, j))
		findlargestpath(mat, visited1, i - 1, j, x, y, max_dist, dist + 1,num+1);
	
	// go to left cell
	if (isValid(i, j - 1) && isSafe(mat, visited1, i, j - 1))
		findlargestpath(mat, visited1, i, j - 1, x, y, max_dist, dist + 1,num+1);
	
	// Backtrack - Remove (i, j) from visited matrix
	visited1[i][j] = 0;
}

