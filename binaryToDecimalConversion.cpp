//              binaryToDecimalConversion.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int powerFunction(int num , int power){
    if(power == 0){
        return 1;
    }
    else if(power == 1){
        return num;
    }
    else{
        int res = 1;
        while(power != 0){
            if(power % 2){
                res = res * num;
                power = power - 1;
            }
            else{
                num = num * num;
                power = power / 2;
            }
        }
        return res;
    }
}

int decimalConversion(int num){
    int rem = 0 , ans = 0 , i = 0;
    while(num != 0){
        rem = num % 10;
        num = num / 10;
        if(rem != 0)
            ans = ans + rem * powerFunction(2 , i);
        i++;
    }
    return ans;
}

int main(){
   int number ;
   cout<<"Enter binary Number -> ";
   cin>>number;
   cout<<"Decimal Number is -> "<<decimalConversion(number)<<endl;
   return 0;
}