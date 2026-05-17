#include <bits/stdc++.h>
#include "Person.cpp"
using namespace std;
class EmployeePT : public Person{
private:
    int hour;
    long money;
public: 
    EmployeePT(){
    }
    EmployeePT(string name,int age,string add,string tel,string sex,int hour,long money) : Person(name,age,add,tel,sex),hour(hour),money(money){}
    int getHour(){
        return hour;
    }
    long getMoney(){
        return money;
    }
    long Salary() override{
        return static_cast<long> (hour) * money;
    }
    void display() override{
        cout<<"Employee Part Time"<<endl;
        Person::display();
        cout<<"Hour: "<<hour<<endl;
        cout<<"Money: "<<money<<endl;
        cout<<"Salary: "<<Salary()<<endl;
    }
    static vector<EmployeePT> getMaxSalary(vector<EmployeePT> pt){
        long max_salary = pt[0].Salary();
        vector<EmployeePT> max_arr;
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