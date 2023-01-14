#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int a = 0;
    int b = 1;
    for (int i = 2; i < n; i++)
    {
        int next = a + b;
        a = b;
        b = next;
    } 
      return b;
}
int main()
{
    int n;
    cin >> n;
    
    cout << "The " <<n<<"th term of the series is = "<< fibonacci(n) << endl;

    return 0;
}