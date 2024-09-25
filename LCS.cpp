//              LCS.cpp

//        LCS using Tabulization

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "aggtab";
    string B = "gxtxayb";
    int i = 0 , j = 0 , size1 = A.size() , size2 = B.size();
    int lcs[size1+1][size2+1];

    for(i = 0 ; i <= size1 ; i++){
        for(j = 0 ; j <= size2 ; j++){
            if(i == 0 || j == 0){
                lcs[i][j] = 0;
            }
            else if(A[i-1] == B[j-1]){
                lcs[i][j] = lcs[i-1][j-1] + 1;
            }
            else{
                lcs[i][j] = max(lcs[i-1][j]  , lcs[i][j-1]);
            }
        }
    }

    cout<<"Longest Subsequence  => "<<lcs[size1][size2]<<endl;

    
   return 0;
}