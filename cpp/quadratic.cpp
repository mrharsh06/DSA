#include<iostream>
#include<cmath>
using namespace std;
void roots(int a,int b,int c){
    if(a==0){
        cout<<"this is not a quadratic equation"<<endl;
        return;
    }
    double d=(b*b-4*a*c);
    double D = sqrt(d);
    if(D==0){
        cout<<"the roots are equal and real"<<(-b/2*a)<<endl;
    }
    if(d>0){
        cout<<"the roots are real and positive"<<endl;
        cout<<(-b+D)/2*a<<endl;
        cout<<(-b-D)/2*a<<endl;
    }
    if(d<0){
        cout<<"the roots are unreal"<<endl;
        cout<<-b/2*a << "+ i" <<D<<endl;
        cout<<-b/2*a << "- i" <<D<<endl;
    }


}

int main(){
    int a,b,c;
    cout<<"enter the value of a,b,c" <<endl;
    cin>>a>>b>>c;
    roots(a,b,c);
    return 0;
}