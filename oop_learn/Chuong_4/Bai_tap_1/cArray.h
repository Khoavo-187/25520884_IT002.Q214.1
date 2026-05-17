#ifndef C_ARRAY
#define C_ARRAY

class cArray{
private:
    int *arr;
    int n;
public:
    cArray(); // constructor mac dinh
    ~cArray(); // destructor

    void nhapmang();

    void xuatmang();

    void taongaunhien(int soluong);
    int demxuathien(int x);
    bool kiemtratangdan();
    int min_le();
    void tangdan();
};

#endif