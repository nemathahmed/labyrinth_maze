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

//print the result(if required)
void print_result(int res) 
{ 
    cout  << res-1 << "\n"; 
    
    
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
            if (result[i][j]>=0) 
                
                cout << result[i][j]-1; 
            else
                cout << "#"; 
        } 
        cout << "\n"; 
    } 
} 