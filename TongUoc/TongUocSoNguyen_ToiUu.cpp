#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int SoNguyen;
    cin>>SoNguyen;
    int Tong=0;60
        for(int i=1; i<sqrt(SoNguyen); i++){
        if(SoNguyen % i == 0) {
             Tong+=i;
             //để tránh trường hợp SoNguyen là số chính phương;
              if(i != SoNguyen/i) {
             Tong+=SoNguyen/i;
        }
        }
    }
    cout<<Tong;
}

//Mo tả Thuật toán: 
// +giả sử SoNguyen = a*b, vậy sqrt(SoNguyen)>=a va sqrt(SoNguyen)>=b;
// +Vậy chỉ cần xét i từ 1 đến sqrt(SoNguyen) với điều kiện SoNguyen chia hết cho i thì cộng vào cho tổng ước;
// +Lưu ý nếu SoNguyen cũng là số chính phương thì ta được a=b vì vậy ta chỉ lấy a HOẶC b cộng vào cho tổng ước;