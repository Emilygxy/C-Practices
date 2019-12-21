#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

struct Entry
{
    string name;
    int number;
};

/*初识向量*/
vector<Entry> phone_book_vec(1000);
void print_entry_vec(int i){//像数组一样简单使用
    cout<<phone_book_vec[i].name<<' '<<phone_book_vec[i].number<<endl;
}
void add_entries_vec(int n){//将其规模增加n
    phone_book_vec.resize(phone_book_vec.size()+n);
}
/*初识列表*/
list<Entry> phone_book_list;
void print_entry_list(const string& s){
    typedef list<Entry>::const_iterator Li;//定义一个迭代器
    for(Li i=phone_book_list.begin();i!=phone_book_list.end();i++){
        const Entry& e = *i;
        if(s==e.name){
            cout<<e.name<<' '<<e.number<<endl;
            return;
        }
    }
}
void add_entry_list(Entry& e,list<Entry>::iterator i){
    phone_book_list.push_front(e);//加在开头
    phone_book_list.push_back(e);//加在最后
    phone_book_list.insert(i,e);//加在所引用的元素之前
}
/*初识map*/
map<string,int> phone_book_map;
void pirnt_entry_map(const string& s){
    if(int i=phone_book_map[s]) cout<<s<<" "<<i<<endl;
}

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
    
    return 0;
}