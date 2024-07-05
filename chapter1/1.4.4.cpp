/*
 * @author aaecus
 * @date 2024/07/05
 * @time 07:11:33
*/
#include <iostream>

int main() {
    //连续读取一行数据并统计每个数出现的次数
    int count = 1;
    int currentVal = 0, val = 0;
    if (std::cin >> currentVal) {
        val = currentVal;
        while(std::cin >> currentVal) {
            if (currentVal == val) {
                count++;
            }else {
                std::cout << val << " occurs " << count << "times" << std::endl;
                val = currentVal;
                count = 1;
            }
        }
        std::cout << val << " occurs " <<  count << "times" << std::endl;
    }
     return 0;
}