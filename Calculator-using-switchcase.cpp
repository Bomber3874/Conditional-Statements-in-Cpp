/*
Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Calculator menu: "<<endl<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
        int num1, num2;
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        cout<<"Result: "<<num1 + num2<<endl;
        break;
        case 2:
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        cout<<"Result: "<<num1 - num2<<endl;
        break;
        case 3:
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        cout<<"Result: "<<num1 * num2<<endl;
        break;
        case 4:
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        if(num2!=0){
            cout<<"Result: "<<num1/num2<<endl;
        } 
        else{
            cout<<"Error: Division by zero"<<endl;
        }
        break;
        default:
        cout<<"Invalid choice"<<endl;
        break;

    }
    return 0;
}

/*
Output
Calculator menu: 
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice: 1
Enter first number: 34
Enter second number: 45
Result: 79
*/