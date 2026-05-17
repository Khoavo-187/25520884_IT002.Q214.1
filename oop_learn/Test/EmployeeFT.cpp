#include <bits/stdc++.h>
#include "Person.cpp"
using namespace std;
class EmployeeFT : public Person{
private:
    int day;
    long money;
public:
    EmployeeFT(){}
    EmployeeFT(string name,int age,string add,string tel,string sex,int day,long money) : Person(name,age,add,tel,sex),day(day),money(money){}
    int getDay(){
        return day;
    }
    long getMoney(){
        return money;
    }
    long Salary() override{
        return static_cast<long>(day) * money;
    }
    void display() override{
        cout<<"Employee Full Time"<<endl;
        Person::display();
        cout<<"Day: "<<day<<endl;
        cout<<"Money: "<<money<<endl;
        cout<<"Salary: "<<Salary()<<endl;
    }
    static vector<EmployeeFT> getMaxSalary(vector<EmployeeFT> pt){
        long max_salary = pt[0].Salary();
        vector<EmployeeFT> max_arr;
        for(int i = 1;i < pt.size();i++){
            if(pt[i].Salary() > max_salary){
                max_salary = pt[i].Salary();
            }
        }
        for(int i  = 0;i < pt.size();i++){
            if(max_salary == pt[i].Salary()){
                max_arr.push_back(pt[i]);
            }
        }
        return max_arr;
    }
};