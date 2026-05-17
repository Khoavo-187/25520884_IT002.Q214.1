#ifndef CBOOK_H
#define CBOOK_H
#include <string>
using namespace std;
class cBook{
private:
    string ID;
    string name;
    int year;
    int pages;
public:
    cBook();
    cBook(string ID,string name,int year,int pages);
    void nhap();
    void xuat();
    // setter
    void setID(string ID);
    void setName(string name);
    void setYear(int year);
    void setPages(int pages);
    //getter
    string getID();
    string getName();
    int getYear();
    int getPages();
};


#endif