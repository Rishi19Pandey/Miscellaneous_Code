#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int stockBuyAndSell(vector<int> vec){
    int minimum = vec[0] , maxProfit = 0 , cost = 0;
    for(int i = 1 ; i < vec.size() ; i++){
        cost = vec[i] - minimum;
        maxProfit = max(cost , maxProfit);
        minimum = min(minimum , vec[i]);
    }
    return maxProfit;
}

int main(){
   vector<int> vec;
   vec.push_back(7);
   vec.push_back(1);
   vec.push_back(4);
   vec.push_back(6);
   vec.push_back(3);
   vec.push_back(9);
   cout<<"Max Profit  => "<<stockBuyAndSell(vec);
   return 0;
}