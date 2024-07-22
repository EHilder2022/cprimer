#include <iostream>
#include <string>
using namespace std;
int main(){
    //从标准输入中读取数字，并将其转换成十六进制
    string str = "0123456789ABCDEF";
    decltype(str.size()) index;
    string pr;
    cout << "Enter a serires of numbers between 0 and 15"
    << " separated by spaces. Hit Enter when finished"
    << endl;

    while(cin >> index) {
       if (index < str.size()) pr += str[index];
    }
    cout << pr << endl;
}