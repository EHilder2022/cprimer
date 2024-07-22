//@author aaecus
//@date 2024-07-22 14:25:51
//@func
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> s;
    vector<int> s1 = {1,2,3,4,5};
    vector<int> s2 = s1;
    vector<int> s3(s2);
    vector<int> s4(5,3);
    vector<int> s5{100,101,102};
    vector<int> s6(5);

    // 默认初始化，空vector<int> 执行默认初始化
    for(auto i : s) cout << i << endl;
    
    //使用列表初始化
    for(auto i : s1) cout << i << endl;

    //s2获得s1的所有副本元素

    for(auto i : s3) cout << i << endl;

    //5个元素，每个元素都是3
    for(auto i : s4) cout << i << endl;

    // 列表初始化
    for(auto i : s5) cout << i << endl;

    // 5个值初始化的对象
    for(auto i : s6) cout << i << endl;



}