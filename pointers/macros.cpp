#include<iostream>
using namespace std;
# define pi 3.14   //macro ko define kar diya

int main(){
    int r,area;
    cin>>r;
    /*pi=pi+1; hum macros ki value ko change nhe kar skte*/
    area=pi*r*r;
    cout<<"area is "<<area;
//fayada kya hain macros ka?
//fayada yeah hain ki hum iske value ko khe bhe use kar skte hain aur yeah extra memory bhe nhe le raha
    
    return 0;
}