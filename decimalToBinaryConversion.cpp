//          decimalToBinaryConversion.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void convertDecimalToBinary(int num){
   int rem= 0 ;
   vector<int> ans;
   while(num != 0){
      rem = num % 2;
      ans.push_back(rem);
      num = num / 2;
   }
   int i = 0;
   while(i < ans.size()/2){
      swap(ans[i] , ans[ans.size() - i - 1]);
      i = i + 1;
   }
   for(auto itr : ans){
      cout<<itr<<" ";
   }
}


int main(){
   int number = 0 ;
   cout<<"Enter number => ";
   cin>>number;
   convertDecimalToBinary(number);
   return 0;
}