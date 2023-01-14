#include<iostream>
using namespace std;
class student{
    string name;
    int rollnumber;
    int height;
    public:
    int getheight(){
        return this->height;
    }
    void setheight(int height){
       this->height=height;
    }
};

int main(){
    student harsh;
    harsh.setheight(101);
    cout<<"the value of harsh height: " <<harsh.getheight()<<endl;
    cout<<"sab she chal rha hain";
    return 0;
}