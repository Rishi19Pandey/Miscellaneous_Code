//                          ShiftAllZerosToRight.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void ShiftAllZerosToRight(vector<int> &vec){
    int i = 0 , j = vec.size()-1 , temp = 0;
    while(i<j){
        while(vec[j] == 0){
            j--;
        }
        if(vec[i] == 0){
            temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;
            j--;
        }
        i++;
    }
}

int shift(vector<int> &vec){
    int i = 0 , j = vec.size()-1;
    while(i<j){
        while(vec[i] != 0){
            i++;
        }
        while(vec[j] == 0){
            j--;
        }
        if(i<j){
            swap(vec[i] , vec[j]);
        }
        
    }
    return j;
}

int main(){
   vector<int> vec = {1,2,0,1,0,2,0,4,0,6,3,0,8,0,0,0,5};
//    ShiftAllZerosToRight(vec);
   int res = shift(vec);
//    for(auto it : vec){
//         cout<<it<<" ";
//    }
    for(int i=0; i<=res ; i++){
        cout<<vec[i]<<" "; 
    }
   return 0;
}