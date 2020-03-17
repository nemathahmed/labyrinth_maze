#include <bits/stdc++.h> 
#include "common.h"
#include "functions.h"
using namespace std; 


// to check if position is valid to find largest path in hole
bool isValid(int x, int y)
{
	if (x < M && y < N && x >= 0 && y >= 0)
		return true;
	
	return false;
}