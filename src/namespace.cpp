#include <iostream>
using namespace std;
namespace first{
    int x =1;
}
namespace second{
    int x =2;
}
namespace third{
    string name = "Hung";
}
namespace fourth{
    char grade = 'B';
}
int main(){
    // using std::atring;
    //using std::cout;
    //namespace = provides a solution for preventing name conflicts
    //            in large projects. Each entity needs a unique name
    //            A namespace allows for identically named entities
    //            as long as the namespaces are different
    using namespace second;
    // when we don't use the namespace for each same name. it will print out the attributes that already have in the int main
    cout<<x<<'\n';
    cout<< first::x<<'\n';
    string name = "Khoa";
    cout<<"HELLO "<< third::name << endl;
    char grade = 'A';
    cout<< "I got a "<<fourth::grade << " in my new semester"<<endl;
    



    /*
    type conversion = conversion a value of one data  type to another
                    implicit = automatic
                    explicit = precede value with new data type(int)
    
    */ 
    // implicit
    //double x  = (int) 3.14;

    char x = 100; //decimal for 100 is d char

    cout<<x<<'\n';

    //explicit

    int correct =  8;
    int questions = 10;
    double score = ((double) correct /(double) questions) * 100;
    cout<< "the score you get is "<<score<<"%"<<'\n';

    


    return 0;
}