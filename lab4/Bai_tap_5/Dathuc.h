#ifndef DATHUC_H
#define DATHUC_H
using namespace std;

class dathuc{
private:
    int bac; // nhap vao so bac bat ki cho da thuc bat ki
    double* arr; // cap phat mang cho tung heso theo tung bac
public:
    // constructor
    dathuc(int bac = 0);
    // copy constructor 
    dathuc(const dathuc& other);

    ~dathuc(); // destructor
    void set(int bac);

    // cac toan tu tinh toan trong cac da thuc
    dathuc operator+(dathuc D2) const;
    dathuc operator-(dathuc D2) const;
    dathuc operator*(dathuc D2) const;

    // tinh toan da thuc khi biet duoc so nguyen s
    double total(int s) const;
    
    // cac ham so sanh, bang hon
    bool operator==(dathuc D2) const;
    bool operator!=(dathuc D2) const;
    bool operator<(dathuc D2) const;
    bool operator>(dathuc D2) const;    

    // display

    friend istream& operator>>(istream& is,dathuc &D2);
    friend ostream& operator<<(ostream& os,dathuc D2);
};

#endif