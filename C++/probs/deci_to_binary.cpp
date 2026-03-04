#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int pow=1;
    int binary = 0;
    int i = 0;
    while(n > 0){
        int bit = n % 2;
        binary += bit * pow;
        pow *= 10;
        n /= 2;
        i++;
    }
    cout<<binary<<endl;
}