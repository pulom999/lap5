#include<iostream>
using namespace std;

int main(){
    int x;
    int even=0;
    int odd=0;
    cout << "Enter an integer: ";
    cin >> x;

    if (x !=0){
        while (x !=0)
        {
           if (x%2==0)
           {
               even=even+1;
           }else
           {
               odd=odd+1;
           }
        cout << "Enter an integer: ";
        cin >> x;
           
        }
        

    }
    cout << "#Even numbers = "<<even<<"\n";
    cout << "#Odd numbers = "<<odd;
    return 0;
}