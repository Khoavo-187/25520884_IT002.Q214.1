#include <bits/stdc++.h>
#include "Person.cpp"
#include "EmployeePT.cpp"
#include "EmployeeFT.cpp"
using namespace std;


int main() {
    
    vector<Person*> s;
	Person* a[5];
	a[0] = new EmployeeFT("a", 18, "HN", "09842", "nam", 30, 309200);
	a[1] = new EmployeePT("b", 18, "HN", "09842", "nam", 7, 30000);
	a[2] = new EmployeeFT("c", 18, "HN", "09842", "nam", 30, 1200);
	a[3] = new EmployeePT("d", 18, "HB", "09842", "nam", 6, 1200);
	a[4] = new EmployeeFT("e", 18, "NB", "09842", "nam", 30, 130200);
	s.push_back(a[0]);
	s.push_back(a[1]);
	s.push_back(a[2]);
	s.push_back(a[3]);
	s.push_back(a[4]);
	vector<Person*> per(Person::findPerson(s)); // goi bien static khong can goi doi tuong nao 

    vector<EmployeePT> e;
	e.push_back(EmployeePT("a", 18, "HN", "09842", "nam", 7, 30000));
	e.push_back(EmployeePT("b", 18, "HN", "09842", "nam", 7, 40000));
	e.push_back(EmployeePT("c", 18, "HN", "09842", "nam", 7, 50000));
	e.push_back(EmployeePT("d", 18, "HN", "09842", "nam", 7, 60000));
	e.push_back(EmployeePT("e", 18, "HN", "09842", "nam", 7, 50000));
	e.push_back(EmployeePT("f", 18, "HN", "09842", "nam", 7, 60000));
	vector<EmployeePT> pt(EmployeePT::getMaxSalary(e));

    vector<EmployeeFT> ft;
	ft.push_back(EmployeeFT("a", 18, "HN", "09842", "nam", 10, 309200));
	ft.push_back(EmployeeFT("b", 18, "HN", "09842", "nam", 30, 309200));
	ft.push_back(EmployeeFT("c", 18, "HN", "09842", "nam", 30, 309200));
	ft.push_back(EmployeeFT("d", 18, "HN", "09842", "nam", 15, 309200));
	ft.push_back(EmployeeFT("e", 18, "HN", "09842", "nam", 30, 309200));
	vector<EmployeeFT> f(EmployeeFT::getMaxSalary(ft));
    
    // In danh sách người ở HN
    cout << "=== Danh sach nhan vien o HN ===" << endl;
    for(int i = 0; i < per.size(); i++){
        per[i]->display();
        cout << endl;
    }

    // In EmployeePT luong cao nhat
    cout << "=== EmployeePT luong cao nhat ===" << endl;
    for(int i = 0; i < pt.size(); i++){
        pt[i].display();
        cout << endl;
    }

    // In EmployeeFT luong cao nhat
    cout << "=== EmployeeFT luong cao nhat ===" << endl;
    for(int i = 0; i < f.size(); i++){
        f[i].display();
        cout << endl;
    }
    return 0;
}