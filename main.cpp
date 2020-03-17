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

  int start_x;
  int start_y;
  int end_x;
  int end_y;
  

  int visited[n][m]; 
  int result[n][m]; 

  int COUNT;
  
// Main Code
int main() 
{ 
  int input[R][C];

ifstream fp("input.txt");
if (! fp) {
    cout << "Error, file couldn't be opened" << endl; 
    return 1; 
}    
for(int row = 0; row < R; row++) {  // stop loops if nothing to read
   for(int column = 0; column < C; column++){
        char c;
        fp >> c;
        if(c=='#'){input[row][column]=2;};
        if(c=='.'){input[row][column]=1;};
        if ( ! fp ) {
           cout << "Error reading file for element " << row << "," <<column  << endl; 
           
        }
    }
}


        /*
    
    for(int i=0; i<5; i++)
    {
        for (int j=0; j<7; j++)
        {
        
        
            cout<<input[i][j];}
        cout<<endl;    
    };
    */
  
    findLargesthole(input); 
    
    for(int i=0; i<5; i++)
    {
        for (int j=0; j<7; j++)
        {
            
            if(result[i][j]==-1)result[i][j]=0;
            //cout<<result[i][j];
        }
        //cout<<endl;
    };
    
    int visited1[M][N];
	memset(visited1, 0, sizeof visited1);
	int max_dist = 0;
	//cout<<start_x<<start_y<<end_x<<end_y<<endl;
    findlargestpath(result, visited1, start_x, start_y, end_x, end_y, max_dist, 0,1);
    result[end_x][end_y]=max_dist+1;
    cout << max_dist+1<<endl;
    for(int i=0; i<5; i++)
    {
        for (int j=0; j<7; j++)
        {
            
            if(result[i][j]==0){cout<<'#';}
            else{
            cout<<result[i][j]-1;}
        }
        cout<<endl;
    };
    return 0; 
} 
 

