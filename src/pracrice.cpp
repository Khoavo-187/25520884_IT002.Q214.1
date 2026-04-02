/*
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

namespace First{
    int a = 10;
}
namespace Second{
    int b = 8;
}
namespace Third{
    std::string light = "LIGHTSPEED";
}
namespace Fourth{
    char grade = 'B';

}
namespace Fifth{
    std::string name =  "Hung";
}
namespace Sixth{
    int age  =23;
}
namespace seven{
    double pi = 123;
}
//typedef std::vector<std::triple<std::string,int,char>>triplelist_t;
//typedef std::string text_t;
//typedef int number_t;
//typedef char char_t;

using text_t = std::string;
using number_t = int;
using char_t = char;


int main(){
    
    //char_t grade  ='A';
    //string name = "Khoa";
    //int age = 18;
    text_t name =  "Khoa";
    number_t age =  18;
    char_t grade = 'A';
    string real_name;
    int real_age;
    char real_grade ;

    cout<<"okay, now this is your UIT account:"<<'\n';
    
    string new_string;
    cout<<"press enter for the next step please: ";
    cin>>new_string;

    string account_name;
    cout<<"enter your name account please: ";
    cin >> account_name;
    if(account_name == "25520884"){
        cout<<"Valid account name";
 
    }
    else {
        cout<<"Invalid account name, please try again";
    }
    cout<<endl;

    std::string password;
    cout<<"enter your account password please: ";
    cin >> password;
    if(password == "1425802339"){
        cout<<"welcome to our UIT house";
    }
    else {
        cout<<"Invalid account password, please try again";
    }
    cout<<endl;
    cout<<"Right now, I will do some confirm text."<<'\n';
    cout<<"What is your name?: ";
    std::getline(std::cin>>std::ws,real_name);
    if(real_name == "Vo Minh Khoa"){
        cout<<"Hello "<<real_name<<'\n';
    }
    else{
        cout<<"Not valid name, please try again"<<'\n';
    }
    cout<<endl;
    

    cout<<"OKay, so could you tell me how old are you?: ";
    cin >> real_age;
    switch(real_age){
        case 18:
            cout<<"oh, so you are "<<real_age<<" years old"<<'\n';
            
        default:
            cout<<"Invalid age for this "<<real_name<<" account"<<'\n';

        
    }

    

    cout<<"so what grade you got in your last semester?:";
    cin>>real_grade;

    switch(real_grade){
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

    
    cout<<"thank you for becoming an UITER in out school"<<'\n';

    
    






    
    
    
    
    cout<<"Hello, my name is "<<name<<'\n';
    cout<<"this year, I am "<<age<<" years old"<<'\n';
    cout<<"I receive a "<<Fourth::grade<<" in my last semester"<<'\n';
    int a  = 5;
    int b = 6;
    double result = pow(First::a,Second::b);

    cout<<"the power of a and b is "<<result<<'\n';
    cout<<"And the speedof light is "<<result<<'\n';
    const double pi  = 3.1424223;
    cout<<"the number of pi is "<<seven::pi<<'\n';
    
    return 0;


}
    */

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
void nhapmang(int A[],int &n){
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>A[i];
    }
}
void xuatmang(int A[],int n){
    for(int i = 0;i < n;i++){
        cout<<A[i]<<" ";
    }
}
int main() {

    
    return 0;
}