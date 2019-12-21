#include <iostream>
using namespace std;

/*
实现从英寸到厘米和从厘米到英寸的转换
*/
void test(){
    const float factor=2.54;
    float x,in,cm;
    char ch=0,chh=0;
    cout<<"Enter length:";
    cin>>x;
    cin>>ch;
    switch (ch)
    {
    case 'i':
        in = x;//英寸
        cm=x*factor;
        break;
    case 'c'://厘米
        in = x/factor;
        cm=x;
        break;
    default:
        in=cm=0;
        break;
    }
    cout<<in<<" inch = "<<cm<<" cm\n";
}
int main(){
    test();
    cout<<"Hello world!"<<endl;
    
    return 0;
}