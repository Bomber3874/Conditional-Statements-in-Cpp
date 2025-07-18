/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;
int main(){
    char character;
    cout<<"Enter a character: ";
    cin>>character;
    if (character=='a' || character=='e' || character=='i' || character=='o' || character=='u'){
        cout<<"The character is a vowel";
    }
    else if(character=='A' || character=='E' || character=='I' || character=='O' || character=='U'){
        cout<<"The character is a vowel";
    }
    else{
        cout<<"The character is a consonant";
    }
    return 0;
}

/*Output
Enter a character: a
The character is a vowel
*/