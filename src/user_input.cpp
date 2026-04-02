#include <iostream>
using namespace std;

int main(){
    // cout << (insertion operator)
    // cin >> (extracrtion operator)
    string name  = ""; // this will call for any user input (easy to understand is this is conditions for any user input to type in )
    int age;
    char grade;
    double pi;

    cout<<"Enter your age: "; // remember that any input must have their cin (character input) right on the line of that input
    cin >> age;

    cout<<"what your full name?: ";
    std::getline(std::cin >> std::ws,name);  // the std::ws try to elinimate any whitespace for user input


    cout<<"what grade do you receive in your first semester?: ";
    cin >> grade;

    cout<<"what is the pi number?: ";
    cin >> pi;


    cout<<"Hello "<<name<<'\n';
    cout<<"you are "<<age<<" years old"<<'\n';
    cout<<"You got an "<<grade<<" in my last semester"<<'\n';
    cout<<"the pi number is "<<pi<<'\n';
    cout<<"welcome "<<name<<" to our UIT house";


    return 0;
}





