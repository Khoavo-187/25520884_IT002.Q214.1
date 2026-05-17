#ifndef LISTBOOK_H
#define LISTBOOK_H
#include "cBook.h"

class cListBook{
private:
    int n; // so luong sach
    cBook* arr;
public:
    cListBook();
    cListBook(int n);
    cListBook(const cListBook& other);
    ~cListBook();
    void nhapds();
    void xuatds();
    cBook* tracuu(string ma);
    void capnhat(string ma);
    cBook min_year(int x);
};

#endif