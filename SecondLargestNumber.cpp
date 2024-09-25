//          SecondLargestNumber.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> vec = {1,2,3,4,7,7,5};
   int i = 0 , max = vec[0] , smax = INT_MIN;
   for(i = 1 ; i < vec.size() ; i++){
        if(max < vec[i]){
            smax = max;
            max = vec[i];
        }
        else if(vec[i]>smax && vec[i]<max){
            smax = vec[i];
        }
   }
   cout<<"Maxixmum Element Is => "<<max<<endl;
   cout<<"Second Max Element is => "<<smax<<endl;
   return 0;
}