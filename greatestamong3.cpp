#include<iostream>
using namespace std;

int main() {
    int x,y,z;
    cout<<"Enter 3 numbers: ";
    cin>>x>>y>>z;
    if(x>y){
        if(x>z){
        cout<<"X is the greatest";
        }
        else {
            cout<<"Z is the greatest";

        }

    }
    else {
    if(y>z){
      cout<<"Y is the Greatest";
    }
    else {
        cout<<"Z is the greatest";
    }
    }
    return 0;
}