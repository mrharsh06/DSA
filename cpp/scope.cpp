#include<iostream>
using namespace std;
void update(int number[],int size){
    number[0]=120;
    cout<<"Enter into the function"<<endl;
    for(int i=0;i<size;i++){
        cout<<number[i]<<endl;

    }
    cout<<"returning to main function"<<endl;

}

int main()
{
    int num[3]={1,2,3};
    update(num,3);
    cout<<"printing in main function "<<endl;
      for(int i=0;i<3;i++){
          cout<<num[i]<<endl;
    }
    cout<< endl;
 
    return 0;
}