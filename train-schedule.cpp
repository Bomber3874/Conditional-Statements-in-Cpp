/*
Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;
int main(){
    int choice;
    cout<<" Mumbai Train Schedule Menu: "<<endl<<"1. Duronto Express"<<endl<<"2. Rajdhani Express"<<endl<<"3. Shatabdi Express"<<endl<<"4. Jan Shatabdi Express"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Duronto timing details: "<<endl<<"Departs from MUmbai Central at 11:00 AM"<<endl<<"Arrives at New Delhi at 8:00 PM"<<endl;
        break;
        case 2:
        cout<<"Rajdhani timing details: "<<endl<<"Departs from CSMT at 5:00 PM"<<endl<<"Arrives at New Delhi at 9:00 AM next day"<<endl;
        break;
        case 3:
        cout<<"Shatabdi timing details: "<<endl<<"Departs from CSMT at 6:00 AM"<<endl<<"Arrives at New Delhi at 2:00 PM"<<endl;
        break;
        case 4:
        cout<<"Jan Shatabdi timing details: "<<endl<<"Departs from Mumbai at 8:00 AM"<<endl<<"Arrives at New Delhi at 4:00 PM"<<endl;
        break;
        default:
        cout<<"Invalid choice";
        break;
}
return 0;
}

/*
Output
 Mumbai Train Schedule Menu:
1. Duronto Express
2. Rajdhani Express
3. Shatabdi Express
4. Jan Shatabdi Express
Enter your choice: 3
Shatabdi timing details:
Departs from CSMT at 6:00 AM
Arrives at New Delhi at 2:00 PM
*/