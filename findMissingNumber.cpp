//          findMissingNumber.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> vec = {1,2,4,5,6};
   int size = vec.size() + 1;
   int sum1 , sum2 = 0 ;
   sum1 = (size * (size+1))/2 ;
   for(int i = 0 ; i < vec.size() ; i++){
        sum2 += vec[i];
   } 
   int res = sum1 - sum2;
   cout<<"Missing Number is => "<<res<<endl;
   return 0;
}