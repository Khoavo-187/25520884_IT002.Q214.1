#pragma once
#include <bits/stdc++.h>
using namespace  std;
class Person{
private:    
    string name;
    int age;
    string add;
    string tel;
    string sex;
public:
    Person(){}
    Person(string name,int age,string add,string tel,string sex) : name(name),age(age),add(add),tel(tel),sex(sex){}
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    string getAdd(){
        return add;
    }
    string getTel(){
        return tel;
    }
    string getSex(){
        return sex;
    }
    virtual long Salary() = 0;
    virtual void display(){
        cout<<"Name: "<<getName()<<endl;
        cout<<"Age: "<<getAge()<<endl;
        cout<<"Sex: "<<getSex()<<endl;
        cout<<"Add: "<<getAdd()<<endl;
        cout<<"Tel: "<<getTel()<<endl;
    }
    static vector<Person*> findPerson(vector<Person*> p){
        vector<Person*> add;
        for(int i = 0;i < p.size();i++){
            if(p[i]->getAdd() == "HN"){
                add.push_back(p[i]);
            }
        }
        return add;
    } 
};
