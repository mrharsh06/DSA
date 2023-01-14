#include<iostream>
using namespace std;
class B{
    public:
    int a;
    int b;

    void operator+(B &obj){
        int value1=this->a;
        int value2=obj.a;

        //yaha par humne kya  kiya + operator ko ek naya task assign kar diya jisme vo dusre number
        //main se phele number ko minus karega
        cout<<"the value of output is "<<value2-value1<<endl;
    }
};
int main(){
    B obj1,obj2;
    obj1.a=4;
    obj2.a=7;
    obj1+obj2;
    return 0;
}