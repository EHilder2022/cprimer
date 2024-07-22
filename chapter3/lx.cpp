#include <iostream>
#include <string>
using namespace std;
int main() {
    string s("hello world from demo!!!");
    decltype(s.size()) count = 0;
    for(auto i : s)
        if (ispunct(i)) count++;
    cout << count << " punctuation characters in " << s << endl;
}