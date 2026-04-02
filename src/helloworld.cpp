#include <iostream>
#include <cmath>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t; this is for calling in a shortest way ( vector)

//typedef std::string text_t;

//typedef int number_t;

using text_t = std::string;
using number_t = int;


int main(){
    //std::cout <<"hello world";
    //std::cout <<"my name is khoa";


    // the const keyword specifies that a variable's value cannot be changed after it's been assigned.
    // tells the compiler to prevent anything from modifing it
    // (read-only)

    const double PI = 3.14159;
    //double radius = 10;
    //double circumference = 2 * PI*radius;
    int a = 10;
    int b = 8;
    double result = pow(a,b);

    std::cout<< "số mũ của a và b" << result<<std::endl;
    const int SPEED_LIGHT = 3 * result;
    std::cout<<"tốc độ ánh sáng là" << SPEED_LIGHT<<'\n';
    const int WIDTH = 1920;
    const int HEIGHT = 1080;


    // typedef = reserved keyword used to create an additional name
    //          (alias) for another data type
    //          New identifier for an existing type
    //          helps with readability and reduces typos
    //          use when there is a clear benefit
    //          replaced with 'using' (work better w/o templates)

    //pairlist_t pairlist;
    
    
    text_t firstname = "Khoa";
    std::cout<<firstname<<'\n';
    number_t age = 18;
    std::cout<<age<<'\n';
    
    

    return 0;
}