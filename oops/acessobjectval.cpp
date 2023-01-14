#include<iostream>
using namespace std;
class Hero{
private:
//data members and properties
int Health;
public:
char Level;
//geeter is used to get or acces the value in main function when anything is private in the class
//and we want to access in main function
int gethealth(){
    return Health;
}
char getlevel(){
    return Level;
}
//setter is used when we want to change the value or set the value of private things in class 
void sethealth(int h){
    Health=h;
}
void setvalue(char ch){
    Level=ch;
}
};
int main(){
    //creation of object statically
    Hero Ramesh;
    //how to give value to data members
    //Ramesh.Health=80;
    cout<<"ramesh health is "<<Ramesh.gethealth()<<endl;
    //use of setter
    Ramesh.sethealth(90);

    Ramesh.Level='9';
    cout<<"the value of health is "<<Ramesh.gethealth()<<endl;
    cout<<"the value of Level is "<<Ramesh.Level<<endl;
    //creation of object dynamically
    Hero *b=new Hero;
    (*b).Level='8';
    cout<<"the value of Level b is "<<(*b).Level<<endl;
    b->gethealth();
    b->sethealth(100);
    cout<<"the value of b's health is "<<b->gethealth();
    return 0;
}