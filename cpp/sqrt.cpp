#include<iostream>
using namespace std;
long long int squareroot(int x) {
        int s=0;
        int e=x;
       long long int answer=-1;
       long long int mid=s+(e-s)/2;
        while(s<=e){
          long long int square=mid*mid;
            if(square==x){
                return mid;
            }
            else if(square>x){
                e=mid-1;
            }
            else{
                answer=mid;
                s=mid+1;
            }
        mid=s+(e-s)/2;
        }
          return answer;
}
    
    double accurate(int n,int precision,int tempsol){
    double answer=tempsol;
    double factor=1;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=answer;j*j<n;j=j+factor){
            answer=j;
        }
    }
    return answer;

}

int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int tempsol=squareroot(n);
    cout<<"the value of sqrt is "<<accurate(n,3,tempsol);


    return 0;
}