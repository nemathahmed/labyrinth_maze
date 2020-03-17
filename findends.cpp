#include <bits/stdc++.h> 
#include "common.h"
#include "functions.h"
using namespace std; 


int num_surr(int i,int j)
{
    int count=0;
if(result[i][j]==1 && result[i+1][j]==1) count=count+1;
if(result[i][j]==1 &&result[i][j+1]==1) count=count+1;
if(result[i][j]==1 &&result[i][j-1]==1) count=count+1;
if(result[i][j]==1 &&result[i-1][j]==1) count=count+1;
//cout<<i<<j<<count<<endl;
return count;



}

void findends()
{   
    int i;
    int j;
    for(i=1; i<5; i++)
    {
        for (j=1; j<7; j++)
        {
            
            if(num_surr(i,j)==1){end_x=i;end_y=j;};
            
        }
        
    };
    //cout<<result[0][0]<<result[0][5]<<endl;
    

}