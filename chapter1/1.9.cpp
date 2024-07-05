/*
 * @author aaecus
 * @date 2024/07/04
 * @time 18:16:17
*/
#include <iostream>

int main() {
    //编写程序，使用while循环将50到100的整数相加
    int i = 50;
    int sum = 0;
    while(i <= 100) {
        sum += i;
        i++;
    }
    std::cout << sum << std::endl;
     return 0;
}