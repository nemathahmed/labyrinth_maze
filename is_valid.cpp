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

// to check if position is valid to find largest hole
bool is_valid(int x, int y, int key, int input[n][m]) 
{ 
    if (x < n && y < m && x >= 0 && y >= 0) { 
        if (visited[x][y] == false && input[x][y] == key) 
            return true; 
        else
            return false; 
    } 
    else
        return false; 
} 