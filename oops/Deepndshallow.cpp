#include<iostream>
#include<cstring>
using namespace std;
class hero{
     private:
     int health;
    public:
    char *name;
    int level;
    hero(){
        cout<<"simple constructor called"<<endl;
        name=new char[100];
    }
    //parmeterised constructor
     hero(int health,char level){
         this-> health=health;
         this-> level=level;
     }
    // copy constructor made
     hero(hero & temp){
         //deep copy krne k liye naya array bna diya
         //isse kya hoga adress badal jayenge aur dusre object main change nahe aayega
         char *ch=new char[strlen(temp.name)+1];
         strcpy(ch,temp.name);
         this->name=ch;
       cout<<"copy constructor is called "<<endl;
       this->health=temp.health;
        this->level=temp.level;
    }
      int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<endl;
        cout<<"[name: "<<name<<" ,";
        cout<<"health: "<<health<<" ,";
        cout<<"level: "<<level<<"]"<<endl;
        cout<<endl;
 
    }
};
int main(){
    hero h1;
    h1.sethealth(12);
    h1.level='A';
    char name[7]="harsh";
    h1.setname(name);
    h1.print();

    //defalut copy constructor ko bulaya hain jo ki shallow copy create krega
    hero h2(h1);
    h2.print();
//hero one ka naam change kara hmne
h1.name[0]='g';
h1.print();
//yha par hero 2 main bhe appne aap changes ho gye hain  
//default main sh;llow copy hoti hain
//aur khud jo copy constructor ko create karte hain usme deep copy hoti hain
//jisse ki farak nhe pdta ek object ko change krne se dusre ki value main
h2.print();

    return 0;
}