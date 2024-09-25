#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   string str;
   cout<<"Enter String => ";
   getline(cin , str);
   string ans ="";
   for(int i = 0 ; i< str.size() ; i++){
        if(str[i] != ' ')
            ans += str[i];
   }
   cout<<"Answer => "<<ans<<endl;
   return 0;
}