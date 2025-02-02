#include<iostream>
using namespace std;
int main(){
    float FirstNumber , SecondNumber , Cal;
    cout<<"Enter 1st and 2nd Number (1st 2nd): ";
    cin>>FirstNumber>>SecondNumber;
    char c;
    cout<<"Enter Operation (+ , - , * , / ): ";
    cin>>c;
    bool validoperation = 1;
    switch(c){
        case '+' :
        Cal = FirstNumber + SecondNumber;
        break;
        case '-' :
        Cal = FirstNumber - SecondNumber;
        break;
        case '*' :
        Cal = FirstNumber * SecondNumber;
        break;
        case '/' :
        if(SecondNumber != 0 ){
            Cal = FirstNumber / SecondNumber;
            validoperation = 1;
        }
        else {
            cout<<"Error: Division by Zero is not allowed!";
            validoperation = 0;
        }
        break;
        default :
        cout<<"Enter Valid Operation.";
        validoperation = 0;
        break;
    }
    if(validoperation == 1 ){
        cout<<FirstNumber<<" "<<c<<" "<<SecondNumber<<" = "<<Cal;
    }
    return 0;
}