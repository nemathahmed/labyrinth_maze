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

//Finding the largest hole
int searchusingBFS(int x, int y, int i, int j, int input[n][m],int num) 
{ 
    
    if (x != y) 
        return 0; 
  
    //cout<<i<<j<<num<<endl;
    visited[i][j] =num; 
    
    //print_result(4);
    
    COUNT++; 
  
   
    int x_move[] = { 0,0,-1, 1 }; 
    int y_move[] = { 0,1,0, 0 }; 
  
    
    for (int u = 0; u < 4; u++) 
        if (is_valid(i + y_move[u], j + x_move[u], x, input)) 
           { //cout<<"/"<< num<<"/";
              // cout<<" "<<i<<j<<num;
              
              
            //cout<<"###"<<(visited[0][2])<<num;     
            //cout<<"|"<<(result[0][2])<<num<<"###";   
            searchusingBFS(x, y, i + y_move[u], j + x_move[u], input,num+1 ); }
            
    return input[i][j];
} 