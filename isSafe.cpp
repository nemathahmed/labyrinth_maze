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

// If it is safe in finding the longest path

bool isSafe(int mat[M][N], int visited1[M][N], int x, int y)
{
	if (mat[x][y] == 0 || visited1[x][y])
		return false;

	return true;
}