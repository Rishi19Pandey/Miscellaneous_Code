//          countOfRepeatedElement.cpp


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class countRepeat{
    private:
        int size = 0;
    public:
        int countOfRepeatedElement(vector<int> &vec){
            unordered_set <int> set;
            int size = vec.size() , setSize = 0;
            for(int i = 0 ; i < size ; i++){
                set.insert(vec[i]);
            }
            setSize = set.size();
            return size - setSize;
        }
};

int main(){
   vector<int> vec ={1,2,3,4,5,5,4,2,3};
   countRepeat obj1;
   cout<<"Count of Reapeated Elements > "<<obj1.countOfRepeatedElement(vec)<<endl;
   return 0;
}