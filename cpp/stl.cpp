#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> harsh;
    cout<<"capacity of vector "<<harsh.capacity()<<endl;
    harsh.push_back(1);
    cout<<"capacity of vector "<<harsh.capacity()<<endl;
    harsh.push_back(2);
       cout<<"size--"<<harsh.size()<<endl;
    harsh.push_back(3);
    cout<<"capacity of vector "<<harsh.capacity()<<endl;
     harsh.push_back(4);
     cout<<"size--"<<harsh.size()<<endl;
     cout<<"before pop"<<endl;
     for(int i:harsh){
         cout<<i<<" "<<endl;
     }
     cout<<"after pop"<<endl;
     harsh.pop_back();
     for(int i:harsh){
         cout<<i<<" "<<endl;
     }

            
    return 0;
}