#include<iostream>
using namespace std;
//recursive function
int factorial(int n){
    //base case
    //it is necessary to provide this case otherwise it will not stop
    if(n==0)
    return 1;
    int smallproblem=factorial(n-1);  //small problem here function called itself in a same function
    //recursive relation
    int bigproblem=n*smallproblem;
    return bigproblem;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
  int ans=factorial(n);
   cout<<"the factorial of the number is "<<ans;
 return 0;
}
