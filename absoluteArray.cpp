//                      absoluteArray.cpp

#include<bits/stdc++.h>
using namespace std;

void BruteForceAlgo(int size , int Array[] , int Result1[]);
void optimalAlgo(int size , int Array[] , int Result2[]);

int main(){
   int size , i ;
   cout<<"Enter size of Array => ";
   cin>>size;
   int Array[size];
   int Result1[size] ,Result2[size];
   cout<<"Enter Enter Of Array => ";
   for(i = 0 ; i < size ; i++){
        cin>>Array[i];
   }
   BruteForceAlgo(size,Array,Result1);
   optimalAlgo(size,Array,Result2);
   
   cout<<endl;
   //Result of Brute Force Algo

   cout<<"Result of Brute Force Algo => ";

   for(i = 0 ; i < size ; i++){
        cout<<Result1[i]<<" ";
   }
   cout<<endl;
   cout<<endl;

   // Optimal Algo

   cout<<"Result  of  Optimal  Algo  => ";

     for(i = 0 ; i < size ; i++){
        cout<<Result2[i]<<" ";
   }
    cout<<endl;
   return 0;
}

void BruteForceAlgo(int size , int Array[] , int Result1[]){
    int i , j , sum1 = 0 , sum2 = 0 , res = 0;
    for(i = 0 ; i< size ; i++){
        sum1 = sum1 + Array[i];
        sum2 = 0;
        for(j = i+1 ; j < size ; j++){
            sum2 = sum2 + Array[j];
        }
        res = sum1 - sum2;
        if(res<0){
            res = (-1) * res;
        }
        Result1[i] = res;
    }
}

void optimalAlgo(int size , int Array[] , int Result2[]){
    int i ,sum1 = 0 , sum2 = 0 , res = 0;
    for(i = 0 ; i  < size ; i++){
        sum2 = sum2 + Array[i];
    }
    for(i = 0 ; i < size ; i++){
        sum1 = sum1 + Array[i];
        sum2 = sum2 - Array[i];
        res = sum1 - sum2;
        if(res < 0){
            res = (-1) * res;
        }
        Result2[i] = res;
    }
}