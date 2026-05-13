#include <bits/stdc++.h>
#include <chrono>
#include <thread>
#include "CTime.h"
#include "CTIME.cpp"
using namespace std;


int main() {
    // bat dau nhap vao cac input de tao thoi gian
    CTIME T1;
    cout<<"Nhap cac thanh phan cho thoi gian T1: "<<endl;
    cin>>T1;

    cout<<"Thoi gian T1: "<<T1<<endl;
    int s;
    cout<<"Nhap so nguyen s de cong hoac tru vao thoi gian"; cin>>s;
    if(s >= 0){
        cout<<T1<<" + "<<s<<" = "<<(T1 + s)<<endl;
    }
    else{
        cout<<T1<<" - "<<abs(s)<<" = "<<(T1 + s)<<endl;
    }

    // cong va tru 1 s : ++ --

    --T1;
    cout<<"Thoi gian sau khi tru 1 giay: "<<T1<<endl;
    ++T1;
    cout<<"Thoi gian sau khi cong 1 giay: "<<T1<<endl;

    // De tao dong ho thi su dung ansi escape code de tao hinh dong ho ma chay
    // su dung thu vien chrono va thread de chay dong thoi nhu dong ho that, cu cach 1 s la thoigian++

    while (true)
    {
        cout << "\033[s"
             << "\033[1;60H"
             << "[ " << T1 << " ]"
             << "\033[u"
             << flush;

        this_thread::sleep_for(chrono::seconds(1));
        ++T1; // cho phep thoi gian chay lien tuc
    }
   
    return 0;
}