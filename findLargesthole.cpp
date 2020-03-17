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
// check the largesthole
void findLargesthole(int input[n][m]) 
{   
    int a;
    int b;
    int current_max = INT_MIN; 
  
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
            reset_visited(); 
            COUNT = 0; 
  
            // checking boxes  to the right 
            if (j + 1 < m) 
                a=searchusingBFS(input[i][j], input[i][j + 1], i, j, input,0); 
            //cout<<a;
            
            // updating result 
            if(a==1){
            if (COUNT >= current_max) { 
                current_max = COUNT; 
                reset_result(input[i][j], input); 
                //print_result(current_max);
            };} 
            reset_visited(); 
            COUNT = 0; 
  
            // checking cell downwards 
            if (i + 1 < n) 
                 b=searchusingBFS(input[i][j], input[i + 1][j], i, j, input,0); 
            
            //cout<<a;
            // updating result 
            if(b==1){
                if (COUNT >= current_max) {
             current_max = COUNT; 
            reset_result(input[i][j], input);}
            //print_result(current_max);
            };
            //print_result(current_max); };
            //if (COUNT >= current_max) { 
            //    current_max = COUNT; 
            //    reset_result(input[i][j], input); 
            //} 
        } 
    } 
    //print_result(current_max); 
} 