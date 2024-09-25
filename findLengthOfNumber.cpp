//              findLengthOfNumber.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//   using Math Function

long long findLengthOfNumber(long long num){
    return log10(num) + 1;
}

int main(){
   long long num = 12345698756322;
   cout<<"Length of number is = > "<<findLengthOfNumber(num);
   return 0;
}