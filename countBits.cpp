//      countBits.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countBits(int data){
    int rem = 0 , count = 0 , i;
    for(i = 1 ; i <= data ; i++){
        while(i != 0){
            rem = i % 2;
            if(rem == 1){
                count++;
            }
            i = i / 2;
        }
    }
    return count;
}

int main(){
   vector<int> vec;
   int times , i , inputs ;
   cout<<"Enter number of inputs => ";
   cin>>times;
   for(i = 0 ; i < times ; i++){
        cin>>inputs;
        vec.push_back(inputs);
   }
   cout<<endl;
   cout<<"Count Bits =>" ;
   for(i = 0 ; i < times ; i++){
        cout<<countBits(vec[i])<<endl;
   }
   return 0;
}