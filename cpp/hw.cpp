#include<iostream>
using namespace std;
void passbyvalue(int n){
    n++;
    cout<<"the value of n is "<<n<<endl;
  
}
int main(){
    int n;
    cin>>n;
  passbyvalue(n);
  cout<<n;
   
    return 0;
}