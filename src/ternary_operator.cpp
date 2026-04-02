/*
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //ternary operator ?: = replacement to an if/else statement
    //condition ? expression1 : expression2;

    //int grade = 75;
    //grade >= 60 ? cout<<"You pass!" : cout<<"You fail";    used to replace the if statement

    //int a = 56;
    //a % 2 ==0 ? cout<<"this number is even"  : cout<<"this number is odd";
    
    //int a;
    //int b;
    //int c;
    //cin>>a>>b>>c;
    //int max = (a>b && a>c)?a :(b>c ?b :c);
    //cout<<max;

    bool hungry = false;
    //hungry? cout<<"you are hungry" : cout<<"you are full";
    cout<<(hungry? "you are hungry" : "you are full");

    return 0;
}
    */
   
/*
#include <iostream>   
using namespace std;



int main() {
    
    // && = check if two conditions are true
    // || = check if at least one of two conditions 
    // ! = reverse the logical state of its operand
    int temp;

    bool sunny = false;
    cout<<"enter the temperature: ";
    cin>>temp;

    if(temp <= 0 || temp >= 30){
        cout<<"the tmeperature is bad"<<endl;
    }
    else{
        cout<<"the temperature is good"<<endl;
    }

    if(!sunny){ // this mean we want that if the weather is not sunny
        cout<<"it is cloudy outisde"<<endl;
    }
    else{
        cout<<"it is sunny outside"<<endl;
    }

    return 0;

}
    */

// temperature conversion

#include <iostream>
using namespace std;


int main() {

    double temp;
    char unit;
    cout<<"***** temperature conversion *****\n";
    
    
    cout<<"F =Fahrenheit\n";
    cout<<"C = celcius\n";
    cout<<"what unit you need to convert to: ";
    cin>>unit;


    if(unit =='F' || unit =='f'){
        cout<<"enter the temperature in celcius: ";
        cin>>temp;


        temp = (1.8*temp) + 32;
        cout<<"temperature is "<<temp<<" F\n";

    }
    else if(unit == 'C' || unit =='c'){
        cout<<"enter the temperature in fahrenheit: ";
        cin>>temp;


        temp = (temp - 32)/1.8;
        cout<<"temperature is "<<temp<<" C\n";
    }
    else{
        cout<<"please enter only celsius or fahrenhiet\n";
    }





    cout<<"************************************";
    return 0;
}
