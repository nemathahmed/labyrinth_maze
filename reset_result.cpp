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
//Reset the golbal variable matrix 'reset'
void reset_result(int key, int input[n][m]) 
{ 
    int k=-1;
    int times=0;
    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < m; j++) 
        { 
            if (visited[i][j] && input[i][j] == key) 
               { result[i][j] = 1;
                if (times==0)
                    {start_x=i;
                    start_y=j;
                        times=10;
                    }
                end_x=3;
                end_y=2;
                
                    
                
                
                k=k+1;}
            else
                result[i][j] = -1; 
        } 
    }; 
    
   
} 
