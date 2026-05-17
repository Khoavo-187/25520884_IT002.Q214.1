#include <bits/stdc++.h>
#include "cBook.h"

using namespace std;

bool kiemtrachu(string s){
    for(char c : s){
        if(c == ' '){
            continue;
        }
        if(!isalpha(c)){
            return false;
        }
    }
    return true;
}
bool kiemtraso(int n){
    string word = to_string(n);
    for(char c : word){
        if(!isdigit(c)){
            return false;
        }
    }
    return true;
}
cBook::cBook(){
    ID = "";
    name = "";
    year = 0;
    pages = 0;
}

cBook::cBook(string ID,string name,int year,int pages){
    this->ID = ID;
    this->name = name;
    this->year = year;
    this->pages = pages;
}

// setter
void cBook::setID(string ID){
    this->ID = ID;
}
void cBook::setName(string name){
    this->name = name;
}
void cBook::setYear(int year){
    this->year = year;
}
void cBook::setPages(int pages){
    this->pages = pages;
}
// getter
string cBook::getID(){
    return ID;
}
string cBook::getName(){
    return name;
}
int cBook::getYear(){
    return year;
}
int cBook::getPages(){
    return pages;
}

// display
void cBook::nhap(){
    cout<<"nhap thong tin cua sach:"<<endl;
    // kiem tra input cho sach
    do{
        cout<<"Nhap ID sach: "; cin>>ID;
        if(!kiemtrachu(ID)){
            cout<<"input cho ID khong hop le";
            continue;
        }        
        break;
    }while(true);
    cout<<endl;    
    cin.ignore();
    do{
        cout<<"Nhap ten sach: "; getline(cin,name); 
        if(!kiemtrachu(name)){
            cout<<"input cho name khong hop le";
            continue;
        }
        break;
    }while(true);

    cout<<endl;
    do{
        cout<<"Nhap nam xuat ban: "; cin>>year;
        if(!kiemtraso(year)){
            cout<<"nam khong hop le";
            continue;
        }
        break;
    }while(true);
    cout<<endl;
    do{
        cout<<"Nhap tong so trang: "; cin>>pages;
        if(!kiemtraso(pages)){
            cout<<"so trang khong hop le";
            continue;
        }
        break;
    }while(true);
    cout<<endl;
}


void cBook::xuat(){
    cout << "Ma: " << ID<< " | Ten: " << name<< " | Nam: " << year<< " | Trang: " << pages << endl;
}