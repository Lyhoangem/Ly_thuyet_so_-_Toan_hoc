#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c1 = sqrt(a), c2 = sqrt(b);
    if(c1*c1<a){
       c1++;
    }
    for(int i=c1; i<=c2; i++){
        cout<<i*i<<" ";
    }
}

// Để liệt kê các số chính phương từ a tới b ta gọi số chính phương đó có dạng i^2 trong đó i là một số nguyên
//Từ đó ta có bất phương trình a ≤ i2 ≤ b => √a ≤ i ≤ √b, vậy để in ra các số chính phương từ a tới b bạn chỉ cần duyệt các số i từ √a tới √b và in ra bình phương của i là được.