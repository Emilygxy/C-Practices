
/*
打印所有三位水仙花数
*/
#include <iostream>
using namespace std;

int main(){
    int i,j,k;
    int n=0;
    for(n=100;n<1000;n++){
        i=n%10;//分解出个位数
        j=n/10%10;//分解出十位数
        k=n/100;//
        if(n==i*i*i+j*j*j+k*k*k){
            cout<<n<<"是水仙花数"<<endl;
        }
    }
    //cout<<"Hello world!"<<endl;

    return 0;
}
