#include<iostream>
using namespace std;

int main(){
    int amount;
    cout<<"enter the amount"<<endl;
    cin>>amount;
    int rs100=0,rs50=0,rs20=0,rs1=0;
    switch(true){
        case 1:
        rs100=amount/100;
        amount=amount%100;
        cout<<"the note of rs100 is "<<rs100<<endl;
        if(amount==0){
            break;
        }
        
        case 2:
        rs50=amount/50;
        amount=amount%50;
        cout<<"the note of rs50 is "<<rs50<<endl;
        if(amount==0){
            break;
        }
       
        case3:
        rs20=amount/20;
        amount=amount%20;
        cout<<"the note of rs20 is "<<rs20<<endl;
       
        case4:
        rs1=amount/1;
        amount=amount%1;
        cout<<"the note of rs1 is "<<rs1<<endl;
        break;
        default:
        cout<<"i am unable to calculate "<<endl;


    }
    return 0;
}