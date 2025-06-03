#include<iostream>
using namespace std;

bool KiemTra_So_Doi_Xung(int n){
    int m=0;
    int temp = n;
    while(n>0){
     m = m*10 + n%10; //Đối với các bài thuận nghịch chỉ cần nhớ 2 dòng code này;
     n/=10;
    }
    if(m==temp) return true; //vì lúc này n=0 nen phải so sánh m(So nghich dao) với temp;
    else return false;
}

int main(){
    int n;
    cin>>n;
    if(KiemTra_So_Thuan_Nghich(n)) cout<<"La So Doi Xung";
    else cout<<"Khong phai la so doi xung";
}