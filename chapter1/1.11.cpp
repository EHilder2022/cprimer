/*
 * @author aaecus
 * @date 2024/07/04
 * @time 20:51:32
*/
#include <iostream>

int main() {
    int i;
    int j;
    std::cout << "请输入两个数字" << std::endl;
    std::cin >> i >> j;
    while(i > j) {
        std::cout << j << std::endl;
        j++;
    }
    while(i < j ) {
        std::cout << i << std::endl;
        i++;
    }
    std::cout << i << "," << j << std::endl;
     return 0;
}