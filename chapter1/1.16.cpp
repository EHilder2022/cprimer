/*
 * @author aaecus
 * @date 2024/07/04
 * @time 21:34:14
*/
#include <iostream>

int main() {
    //从cin读取一组数，输出其和
    int sum = 0;
    int i;
    while(std::cin >> i) {
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;

}