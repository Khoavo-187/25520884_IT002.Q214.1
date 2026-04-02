#include <iostream>
using namespace std;

int main(){
    // if statement = do something if a condition is true
    //                             if not, then don't do it.

    int age;
    cout<<"enter your age: ";
    cin>> age;

    if(age >= 50){   // this mean that the if statement will the main role in the other else if statement 
        cout<<"you are too old man"<<'\n';
    }
    else if(age >= 18){
        cout<<"Welcome to the site"<<'\n';

    }
    else if(age < 0){
        cout<<"you haven't been born yet man"<<'\n';
    }
    else{
        cout<<"get the hell of my website"<<'\n';
    }

    // switch  =alternative way to using many "else if" statements
    //          compare one value against matching cases
    int month;
    cout<<"Enter the month(1-12): ";
    cin>>month;

    switch(month){
        case 1:
            cout<<"It is january"<<'\n';
            break;
        case 2:
            cout<<"It is February"<<'\n';
            break;
        case 3:
            cout<<"It is March"<<'\n';
            break;
        case 4:
            cout<<"It is April"<<'\n';
            break;
        case 5:
            cout<<"It is May"<<'\n';
            break;
        case 6:
            cout<<"It is june"<<'\n';
            break;
        case 7:
            cout<<"It is July"<<'\n';
            break;
        case 8:
            cout<<"It is august"<<'\n';
            break;
        case 9:
            cout<<"it is September"<<'\n';
            break;
        case 10:
            cout<<"it is october"<<'\n';
            break;
        case 11:
            cout<<"it is November"<<'\n';
            break;
        case 12:
            cout<<"it is december"<<'\n';
            break;

        default:
            cout<<"please enter in only numbers(1-12):  "<<'\n';

    }

    char grade;
    cout<<"What letter grade:";
    cin >> grade;

    switch(grade){
        case 'A':
            cout<<"you did great";
            break;
        case 'B':
            cout<<"you did  good";
            break;
        case 'C':
            cout<<"you did  okay";
            break;
        case 'D':
            cout<<"you did  not too good";
            break;
        case 'F':
            cout<<"you failed bitch";
            break;
        default:
            cout<<"please enter only characters(A-F)";
    }

    return 0;
}