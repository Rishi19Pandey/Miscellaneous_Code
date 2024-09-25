//      findNonDuplicateElement.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class duplicate{
    private:
        int size = 0;
    public:
        int findNonDuplicateElement(vector<int> &vec){
            size = vec.size();
            int duplicateElement = 0;
            for(int i= 0 ; i < size ; i++){
                duplicateElement = duplicateElement ^ vec[i];
            }
            return duplicateElement;
        }
};

int main(){
   vector<int> vec = {1,2,3,4,5,5,4,1,2};
   duplicate obj1;
   cout<<"Duplicate Element is => "<<obj1.findNonDuplicateElement(vec);
   return 0;
}