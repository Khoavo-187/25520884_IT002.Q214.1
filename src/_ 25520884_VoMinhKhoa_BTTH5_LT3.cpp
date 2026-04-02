#include <bits/stdc++.h>
#include <vector>
#include <sstream>
using namespace std;

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const long long INF = 1e18;
// chu de 2
// cau 8
string xoaKhoangTrangThua(string s) {
    string result = "";
    
    for(int i = 0; i < s.length(); i++) {
        // Bỏ qua khoảng trắng ở đầu
        if(result == "" && s[i] == ' ') {
            continue;
        }
        
        // Bỏ qua nhiều khoảng trắng liên tiếp
        if(s[i] == ' ' && result[result.length()-1] == ' ') {
            continue;
        }
        
        result += s[i];
    }
    
    // Xóa khoảng trắng cuối
    if(result.length() > 0 && result[result.length()-1] == ' ') {
        result.erase(result.length()-1);
    }
    
    return result;
}
string vietHoaChuDau(string s) {
    // Viết thường tất cả trước
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
    
    // Viết hoa chữ đầu mỗi từ
    for(int i = 0; i < s.length(); i++) {
        if(i == 0 && s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
        else if(i > 0 && s[i-1] == ' ' && s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }
    
    return s;
}
string chuanhoachuoi(string s){
    s = xoaKhoangTrangThua(s);
    s = vietHoaChuDau(s);
    return s;
}

// cau 11
string ghepchu(string danhsach[],int n){
    stringstream ss;
    for(int i =0;i< n;i++){
        ss << danhsach[i];
        if(i < n-1){
            ss << ' ';
        }
    }
    return ss.str();
}   

// cau 14
bool  lasonguyenam(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int demsonguyenam(string tu){
    int dem  =0;
    for(int i= 0; i < tu.length();i++){
        if(lasonguyenam(tu[i])){
            dem++;
        }
    }
    return dem;
}

// cau21
void daonguoctu(string tu){
    for(int i =tu.length();i >= 0;i--){
        cout<<tu[i];
    }
}
// cau 22
bool validlocal(string local){
    if(local.empty() || local[0] == '.' || local.back() == '.'){
        return false;
    }

    for(int i =0;i < local.length();i++){
        char c = local[i];
        if(!isalnum(c) && c != '.' &&  c != '-' && c != '_'){
            return false;
        }
        if(c == '.' && i + 1 < local.length() && local[i+1] == '.'){
            return false;            
        }
    }
    return true;
}

bool validdomain(string domain){
    if(domain.empty() || domain[0] == '.' || domain.back() == '.'){
        return false;
    }
    int count = 0;
    for(int i = 0;i < domain.length();i++){
        char c = domain[i];
        if(!isalnum(c) && c != '.' && c != '-'){
            return false;
        }
        if(c == '.' && i + 1 < domain.length() && domain[i+1] == '.'){
            return false;
        }
        if(c == '.'){
            count++;
        }
        if((c == '-' && i == 0) || (c =='-' && i == domain.length()-1)){
            return false;
        }

    }
    return count >= 1;
}
int main() {
    // chu de 1
     // cau 1
    string s;
    getline(cin,s);
    
    int chucai = 0
    int chuso =0;
    int chucaidacbiet =0;
    for(int i =0;i < s.length();i++){
        if((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A')){
            chucai++;
        } 
        else if(s[i] <= '9' && s[i] >= '0'){
            chuso++;
        }
        else{
            chucaidacbiet++;
        }
    }
    cout<<"so luong chu cai trong chuoi la: "<<chucai<<endl;
    cout<<"so luong chu so trong chuoi la: "<<chuso<<endl;
    cout<<"so luong chu cai dasc biet trong chuo la: "<<chucaidacbiet<<endl;


    // cau 2
    string s;
    getline(cin,s);
    char new_arr[100];
    int count =0;
    for(int i =0;i < s.length();i++){
        if(!(s[i] <= '9' && s[i] >= '0')){
            new_arr[count]= s[i];
            count++;
        }
    }
    cout<<"chuoi moi sau khi xoa chu so la: "<<new_arr<<endl;

    // cau 3
    string s;
    getline(cin,s);
    char new_arr[100];
    int count1 =0;
    for(int i =0;i < s.length();i++){
        if((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A')){
            new_arr[count] = s[i];
            count1++;
        }
        else{
            continue;
        }
    }

    cout<<"chuoi moi sau khi xoa ki tu la: "<<new_arr<<endl;

    // cau 4
    string s;
    getline(cin,s);
    for(int i =0;i < s.length();i++){
        if(s[i] <= 'Z' && s[i] >= 'A'){
            s[i] += 32;
        }
        else{
            continue;
        }
    }
    cout<<"mang sau khi chuyen doi sang chu thuong la "<<s<<endl;


    // cau 5
    string s;
    getline(cin,s);
    for(int i =0;i < s.length();i++){
        if(s[i] <= 'z' && s[i] >= 'a'){
            s[i] -= 32;
        }
        else{
            continue;
        }
    }
    cout<<"mang sau khi chuyen doi sang chu hoa la "<<s<<endl;

    // cau 6
    string s;
    getline(cin,s);
    
    char ch;
    cin>>ch;
    bool isfound = true;
    int dem =0;
    for(int i= 0;i < s.length();i++){
        if(s[i] == ' '){
            isfound = true;
        }
        else if(isfound){
            if(s[i] == ch){
                dem++;
            }
            isfound = false;
        }
    }
    cout<<"nhung chu bat dau voi ki tu "<<ch<<" co so luong la: "<<dem<<" trong chuoi"<<endl;
    // cau 7

    string s;
    getline(cin,s);

    char ch;
    cin>>ch;
    int dem =0;
    for(int i =0;i < s.length();i++){
        if(s[i] != ' '){
            if(i == s.length() - 1 || s[i+1] == ' '){
                if(s[i] == ch){
                    dem++;
                }
            }
        }
    }
    cout<<"ki tu xuat hien la "<<ch<<" xuat hien trong chuoi cuoi tu la "<<dem<<" chu"<<endl;

    // cau 8
    string s;
    getline(cin,s);

    string ketqua = chuanhoachuoi(s);
    cout<<"chuoi sau khi chuan hoa la "<<ketqua<<endl;

    // cau 9
    string s;
    getline(cin,s);
    for(int i =0;i < s.length();i++){
        if(s[i] <= 'Z' && s[i] >= 'A'){
            s[i] += 32;
        }
        else{
            continue;
        }
    }
    bool new_sentence = true;
    for(int i = 0;i< s.length();i++){
        if(s[i] == ' '){
            continue;
        }
        if(new_sentence && s[i] <= 'z' && s[i] >= 'a'){
            s[i] -= 32;
            new_sentence = false;
        }
        else if(s[i] == '.' || s[i] == '!' || s[i] == '?'){
                new_sentence = true;
        }
    }
    cout<<"chuoi sau khi viet hoa cac ki tu la: "<<s<<endl;

    // cau 10
    string s;
    getline(cin,s);
    stringstream ss(s);

    string word;
    cout<<"sau khi tach tung tu la: ";
    while(ss >> word){
        cout<<word<<endl;
    }
    // cau 11
    string danhsach[]= {"hoc","lap","trinh","rat","vui"};
    int n = 5;
    string ketqua = ghepchu(danhsach,n);
    cout<<"sau khi ghep lai thanh chuoi la: "<<ketqua<<endl;

    // cau12
    string s;
    getline(cin,s);
    string ch;
    cout<<"nhap chu muon tim co trong chuoi: ";
    cin>>ch;

    stringstream ss(s);
    string word;
    int dem  =0;
    while(ss >> word){
        if(word == ch){
            dem++;
        }
    }
    cout<<"so lan xuat hien cua chu "<<ch<<" trong chuoi la :"<<dem;
    // cau 13
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<string> danhsach;

    string word;
    while(ss >> word){
        danhsach->push_back(word);
    }

    int max_length  = 0;
    int index = 0;
    for(int i =0;i < danhsach->length();i++){
        if(danhsach[i].length() > max_length){
            max_length = danhsach[i].length;
            index = i;
        }
    }
    cout<<"chu dai nhat co trong chuoi la "<<danhsach[index]<<" voi do dai la "<<max_length<<" tu"<<endl;

    // cau 14
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<string> danhsach;

    string word;
    while(ss >> word){
        danhsach->push_back(word);
    }
    int max_count =0;
    int index =0;
    for(int i =0;i < danhsach.size();i++){
        int new_count = demsonguyenam(danhsach[i]);
        if(new_count > max_count){
            max_count = new_count;
            index = i;
        }
    }
    cout<<"tu co nhieu chu cai nguyen am nhat la "<<danhsach[index]<<endl;


    // cau 15
    string s;
    getline(cin,s);
    bool isfound = false;
    for(int i =0;i < s.length();i++){
        if(s[i] == ' '){ 
            continue;
        }
        if(!isalpha(s[i])){
            cout<<"day khong phai la chuoi bao gom ki tu alphabet";
            isfound = true;
            break;
        }
    }

    if(!isfound){
        cout<<"day la chuoi chi bao gom ki tu alphabet";
    }

    // chu de C
    // cau 16
    string s;
    getline(cin,s);
    bool isfound = false;
    for(int i =0;i < s.length();i++){
        if(s[i] == ' '){ 
            continue;
        }
        if(!isdigit(s[i])){
            cout<<"day khong phai la chuoi bao gom chu so";
            isfound = true;
            break;
        }
    }

    if(!isfound){
        cout<<"day la chuoi chi bao gom chu so";
    }

    // cau 17
    string s;
    getline(cin,s);
    bool isfound = false;
    for(int i =0;i < s.length();i++){
        if(s[i] == ' '){ 
            continue;
        }
        if(!(s[i] <= 'Z' && s[i] >= 'A')){
            cout<<"chuoi nay khong bao gom tat ca cac chu in hoa";
            isfound = true;
            break;
        }
    }

    if(!isfound){
        cout<<"day la chuoi chi bao gom cac chu cai in hoa";
    }

    // cau 18
    string s;
    getline(cin,s);
    bool isfound = false;
    for(int i =0;i < s.length();i++){
        if(s[i] == ' '){ 
            continue;
        }
        if(s[i] <= 'z' && s[i] >= 'a'){
            cout<<'chuoi nay co ki tu in thuong';
            isfound = true;
            break;
        }
    }

    if(!isfound){
        cout<<"day la chuoi khong co ki tu in thuong";
    }

    // cau 19
    string s;
    getline(cin,s);
    string result = "";
    char ch = s[0];
    int count =0;
    for(int i =1;i <s.length();i++){
        if(s[i] == ch){
            count++;
        }
        else{
            result += ch;
            result += to_string(count);
            ch = s[i];
            count = 1;
        }

    }
    result += ch;
    result += to_string(count);
    cout<<"chuoi sau khi nen la "<<result;


    // cau 20
    string s;
    getline(cin,s);

    string ketqua = "";
    for(int i = 0;i < s.length();i++){
        if(!isdigit(s[i])){
            char kitu = s[i];
            i++;

            int so  =0;
            while(i < s.length() && isdigit(s[i])){
                so = so * 10 + (s[i] - '0');
                i++;
            }
            i--;

            for(int j =0;j < so;j++){
                ketqua += j;
            }
        }
    }
    cout<<"chuoi sau khi dc giai nen la "<<ketqua<<endl;

    // cau 21
    string s;
    getline(cin,s);

    stringstream ss(s);
    string word = "";
    vector<string> danhsach;

    while(ss >> word){
        danhsach.push_back(word);
    }

    for(int i= 0;i < danhsach.size();i++){
        daonguoctu(danhsach[i]);
        cout<<" ";
    }

    // chu de D
    // cau 22
    string s;
    getline(cin,s);
    


    int atpos = s.find('@');
    if(atpos == -1){
        cout<<"email khong hop le";
        return 0;
    }
    int second = s.find('@',atpos+1);
    if(second != -1){
        cout<<"email khong hop le";
        return 0;
    }
    string local = s.substr(0,atpos);
    string domain = s.substr(atpos+1);
    bool isfound = (validlocal(local) && validdomain(domain));
    if(isfound){
        cout<<"email hop le";
    }
    else{
        cout<<"email khong hop le";
    }
    // cau 23
    string s;
    getline(cin,s);
    bool isfound = true;
    if(s.length() < 8){
        cout<<"mat khau yeu";
        return 0;
    }
    for(int i =0;i <s.length();i++){
        if(!(s[i] >= '0' && s[i] <= '9')){
            cout<<"mat khau yeu";
            isfound = false;
            break;
        }
        if(!(s[i] <= 'Z' && s[i] >= 'A')){
            cout<<"mat khau yeu";
            isfound = false;
            break;
        }
        if(!(isalnum(s[i]))){
            cout<<"mat khau yeu";
            isfound = false;
            break;
        }
        
    }
    if(isfound){
        cout<<"mat khau hop le";
    }

    // cau 24
    string s;
    getline(cin,s);

    int curr = s.find('@');
    string username = s.substr(0,curr);

    cout<<"phan username cua email la: "<<username;


    // cau 25
    string s;
    getline(cin,s);
    string ten = "";
    string ho = "";
    string ten_dem = "";
    
    stringstream ss(s);
    vector<string> danhsach;
    string word;

    while(ss >> word){
        danhsach.push_back(word);
    }

    for(int i =0;i< danhsach.size();i++){
        ten = danhsach[danhsach.size() - 1];
        ho  = danhsach[0];
    }
    for(int j = 1;j < danhsach.size() - 1;j++){
        if(ten_dem.length() > 1) ten_dem += " ";
        ten_dem += danhsach[j];
    }
    cout<<"Ho cua chuoi la "<<ho<<endl;
    cout<<"ten dem cua chuoi la "<<ten_dem<<" "<<endl;
    cout<<"ten cua chuoi la: "<<ten<<endl;

    // cau 26
    string s;
    getline(cin,s);
    string ten = "";
    string ho = "";
    string ten_dem = "";
    
    stringstream ss(s);
    vector<string> danhsach;
    string word;

    while(ss >> word){
        danhsach.push_back(word);
    }

    // viet tat cac ten sau moi dau cham
    string ketqua = "";
    for(int i =0;i < danhsach.size()-1;i++){
        string new_word = danhsach[i];
        for(int j = 0;j < new_word.length();j++){
            char ch = new_word[0];
            if(ch <= 'Z' && ch >= 'A'){
                ketqua += ch;
                ketqua += '.';
                break;
            }
            else{
                j++;
            }
        }
    }
    ketqua += danhsach[danhsach.size() - 1];
    cout<<ketqua;
    // cau 27
    string s;
    getline(cin,s);

    stringstream ss(s);
    string word;
    vector<string> danhsach;

    while(ss >> word){
        danhsach.push_back(word);
    }
    string username = "";
    for(int i =0;i < danhsach.size();i++){
        string new_word = danhsach[i];
        for(int j =0;j < new_word.length();j++){
            char ch = new_word[j];
            if(ch <= 'Z' && ch >= 'A'){
                ch += 32;
                username += ch;
            }
            else{
                username += ch;
            }
        }
    }
    cout<<"username tu ho va ten la: "<<username;

    // cau 28
    string s;
    getline(cin,s);
    string res = "";
    int k;
    cout<<"nhap do dich chuyen cua cac ki tu trong bang chu cai: ";
    cin>>k;
    for(int i= 0;i < s.length();i++){
        char ch = s[i];
        if(ch <= 'z' && ch >= 'a'){
            ch = (ch - 'a' + k) % 26 + 'a';
        }
        else if(ch <= 'A' && ch >= 'Z'){
            ch = (ch - 'A' + k) % 26 + 'A';
        }
        res += ch;
    }
    cout<<"chuoi sau khi dc cipher la "<<res;

    // cau 29
    string s;
    getline(cin,s);
    string res = "";
    int k;
    cout<<"nhap do dich chuyen cua cac ki tu trong bang chu cai: ";
    cin>>k;
    for(int i= 0;i < s.length();i++){
        char ch = s[i];
        if(ch <= 'z' && ch >= 'a'){
            ch = (ch - 'a' - k) % 26 + 'a';
        }
        else if(ch <= 'A' && ch >= 'Z'){
            ch = (ch - 'A' - k) % 26 + 'A';
        }
        res += ch;
    }
    cout<<"chuoi sau khi dc giai ma cipher la "<<res;

    // cau 30
    string s;
    getline(cin,s);
    string res = "";
    bool dau_cach = false;
    for(int i =0;i < s.length();i++){
        if(s[i] == ' '){
            continue;
        }
        if(isdigit(s[i])){
            if(!dau_cach && i < res.length() > 0){
                res += ' ';
            }
            res += s[i];
            dau_cach = true;
        }
        else{
            dau_cach = false;
        }
    }
    cout<<"xuat toan bo so trong chuoi la : "<<res;
    return 0;
}