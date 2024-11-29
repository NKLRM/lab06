#include<iostream>
using namespace std;

int main(){
    int a=1,odd=0,even=0;

    while(a!=0)
    {
        cout << "Enter an integer: ";
        cin >> a;
        if(a%2==0&&a!=0)
            even++;
        else if(a%2==1&&a!=0)
            odd++;
    }
    
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
