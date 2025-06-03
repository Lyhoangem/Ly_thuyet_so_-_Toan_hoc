#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=1; i<=sqrt(N); i++){
        cout<<i*i<<" ";
    }
}

// Để liệt kê các số chính phương từ 1 tới n ta gọi số chính phương đó có dạng i2 trong đó i là một số nguyên
//Từ đó ta có bất phương trình 1 ≤ i2 ≤ n => 1 ≤ i ≤ √n, vậy để in ra các số chính phương từ 1 tới n bạn chỉ cần duyệt các số i từ 1 tới √n và in ra bình phương của i là được.