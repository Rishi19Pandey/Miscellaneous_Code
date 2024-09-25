#include <bits/stdc++.h>
using namespace std;

vector<int> fun(int num){
    vector<int> ans;
    ans.push_back(1);
    int i, res = 1;
    for(i = 0; i < num; i++){
        res *= (num-i);
        res /= (i+1);
        ans.push_back(res);
    }
    return ans; 
}

int main()
{
   int row,col,i,j,k,l;
   cout<<"Enter Number of Row : ";
   cin>>row;
   col = (2*row)+1;
   vector<vector<int>> pascal;
   for(i = 0; i <= row ; i++){
       pascal.push_back(fun(i));
   }

    for(i = 0; i <= row ; i++){
        for(j = 0; j < (row-i) ; j++){
            cout<<"  ";
        }
        k = 0;
        for(l = 0; l < col; l++){
            if(l % 2 == 0 && k < pascal[i].size()){
                cout<<pascal[i][k++]<<"  ";
                if(k == pascal[i].size()){
                    break;
                }
            }
        }
        cout<<endl;
    }
   
    return 0;
}