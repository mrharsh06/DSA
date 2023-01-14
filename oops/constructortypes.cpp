#include<iostream>
using namespace std;
class hero{
    private:
int health;
public:
char level;
//default constructor create kar kr dekh rhe hain
//yeah vaise apne aap create ho jata hain
hero(){
    cout<<"constructer is made"<<endl;
}

//parameterised constructor
hero(int health,char level){
   cout<<"this is -> "<<this<<endl;
   this->health=health;
   this->level=level;

   //print function
}
void print(){
    cout<<this->health<<endl;
    cout<<this->level<<endl;
}
//getter 
int gethealth(){
return health;
}
void sethealth(int h){
   health=h;
}

};
int main(){

    hero tanmay(80,'A');
    tanmay.print();

//this is copy constructor here we copy tanmay into nishant 
     hero nishant(tanmay);
     nishant.print();

  //  cout<<"hello"<<endl;
    //static object
    //call of parametrised constructor
    //hero harsh(80,'A'); 
    //cout<<"address of harsh is "<<&harsh<<endl;
    //cout<<"Hi"<<endl;

    //dynamic object
   // hero *ramesh=new hero(20,'B');
     return 0;
}