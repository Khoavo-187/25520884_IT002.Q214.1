#include <iostream>

using namespace std;

int main(){
    string name;

    cout<<"Enter your name: ";
    getline(cin,name);

    /*if(name.length() > 12){ // the length of that string
        cout<<"Your name can't be over 12 characters ";
    }
    else{
        cout<<"welcome "<<name;
    }
        */

    if(name.empty()){ // return a boolean when there is no word in a string
        cout<<"you didn't enter your name";
    }
    else{
        cout<<"Hello "<<name;
    }

    // name.clear for clear the previous input you give for the name

    name.append("@gmail.com"); // adding for more word into the name
    cout<<"your username is now "<<name;

    cout<<name.at(0); // the at() is like the index of the string

    name.insert(0, "@"); 
    cout<<"Hello "<<name;

    cout<<name.find(' '); // finding the space at which index of the name


    name.erase(0,3); // we will erase the word from  index 0 -> 3
    
}