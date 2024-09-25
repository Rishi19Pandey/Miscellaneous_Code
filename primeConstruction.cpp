//          primeConstruction.cpp

#include<bits/stdc++.h>
using namespace std;
int isPrime(int num){
  int size = num/2;
 for(int i  = 2 ; i <= size ; i++){
  	if(num % i == 0){
     return 0;
    }
 }
  return num;
}

int main(){
  vector<int> inputs;
  int n , i, j , inp , z , flag = 0;
  cout<<"Enter Times=> ";
  cin>>n;
  for(i = 0 ; i <= n ; i++){
 	cin>>inp;
    inputs.push_back(inp);
  }
  vector<int> prime;
  int x;
  for(i = 2 ; i <= 100000 ; i++){
    x = isPrime(i);
    if(x){
     	prime.push_back(x); 
    }
  }
  cout<<"Ans => ";
  for(i = 0 ; i < prime.size() ; i++){
    z = n;
   	for(j = 0 ; j < n ; j++){
      if(prime[i] % inputs[j] == inputs[n]){
       	z = z - 1; 
      }
    }
    if(z == 0 && prime[i] != 2){
     	cout<<prime[i]<<endl;
      	flag = 1;
      	break;
    }
  }
  if(flag == 0){
    cout<<"None"<<endl;
  }
  return 0;
}