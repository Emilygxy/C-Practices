#include <iostream>
#include <string>

using namespace std;

/*
标准算法find在一个序列中查找某个值，并返回引用着找到那个元素的迭代器。
利用find，我们可以统计出某一个字符在一个string中出现的次数。
*/
int count(const string& s,char c){
    int n=0;
    string::const_iterator i=find(s.begin(),s.end());
    while (i!=s.end())
    {
        ++n;
        i=find(i+1,s.end(),c);
    }
    return n;
}