#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void print_result(int);
bool is_valid(int , int , int, int frr [5][7]);
bool isValid(int , int );
int searchusingBFS(int , int , int , int , int err[5][7],int );
void reset_visited();
void reset_result(int , int drr[5][7] ) ;
void findLargesthole(int arr[5][7] );
bool isSafe(int grr[5][7], int hrr[5][7] , int , int );
void findlargestpath(int brr[5][7], int crr[5][7], int , int ,int , int , int& , int , int) ;
void findends();

#endif
