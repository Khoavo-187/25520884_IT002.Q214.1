#include <iostream>
#include <cmath>
using namespace std;

namespace First{
    int a = 43;
    int new_a = a+1;
    int result = new_a % 2;
}
int main(){
    // arithmetic operators  = return the result of a specific arithmetic operations(+ - * /)

    int students  = 20;
    // plus operation
    //students = students + 1;
    //students  += 2;
    students++;

    // minus operation
    //students -= 1;
    students--;

    // multiply operation
    students *= 2;

    //division operation
    students /= 2;

    int remainders = students % 3;
    cout<<students<<'\n';
    cout<<remainders<<'\n';

    //paranthesis
    //multiplication and division
    // addition and subtraction
    int student = 6 - 5 + 4 * 3 / 2;
    cout<<student<<'\n';

    int a  = 43;
    int result  = a % 2;
    cout<<"we will check whether the number is odd or even"<<'\n';
    cout<<"for example, the "<<a<<" is an odd number because its remainder is "<<result<<'\n';
    cout<<"but when we plus one it will become "<<First::new_a<<" even and is remainder is "<<First::result<<'\n';
    cout<<"okay now we will do some calculation about right angled triangle"<<'\n';
    

    double a2;
    double b2;
    double c2;

    cout<<"enter your a2 side, remember must round it:  ";
    cin>> a2;
    double new_a2 = round(a2*100)/100;
    

    cout<<"enter your b2 side, remember must round it: ";
    cin>>b2; 
    double new_b2  = round(b2*100)/100;

    c2 = sqrt((pow(new_a2,2) + pow(new_b2,2)));
    cout<< "this is the result of angled triangle, the result is "<<round(c2*100)/100<<'\n';

    






    // useful math related functions

    double x = 3.45;
    double y =4.6;
    double z;
    double n;
    double a1 = 4.99;
    double b;

    //z = std::max(x,y);   this one is for the max function between x and y
    //z = std::min(x,y);

    //z = pow(x,y);
    //z = sqrt(81);
    //z =abs(-45);

    z = round(x); // this round is for round down for the decimal of number under 0.5
    n = ceil(y);

    b = floor(a1); // this is always round down number irrespective of its decimal

    

    cout<< z<<'\n';
    cout<<n<<'\n';
    cout<<b<<'\n';



    // C++ project of calculating angled triangle

    /*
    double a2;
    double b2;
    double c2;

    std::cout<<"enter side a2: ";
    std::cin>>a2;

    std::cout<<"enter side b2: ";
    std::cin>>b2;

    c2 = sqrt((pow(a2,2)+pow(b2,2)));
    cout<<"the angled triangle is "<<c2<<'\n';
    */

    return 0;
}