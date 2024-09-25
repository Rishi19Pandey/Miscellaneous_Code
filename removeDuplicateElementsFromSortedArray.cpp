//          removeDuplicateElementsFromSortedArray.cpp
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int removeDuplicateElementsFromSortedArray(int A[] , int size){
    int j = 1;
    for(int i = 0; i < size-1; i++){
        if(A[i] != A[i+1]){
            A[j++] = A[i+1];
        }
    }
    return j;
}

int main(){
   int A[10] = {0,0,1,1,1,2,2,3,3,4};
   int res = removeDuplicateElementsFromSortedArray(A,10);
   cout<<res<<endl;
   for(int i = 0; i<res; i++){
        cout<<A[i];
   }
   return 0;
}