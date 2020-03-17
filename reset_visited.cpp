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

//set everything to default so that it can be visited again
void reset_visited() 
{ 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            visited[i][j] = 0; 
} 
  