/*
 * @author aaecus
 * @date 2024/07/04
 * @time 18:21:25
*/
#include <iostream>

int main() {
    //使用递减运算符打印10到0之间的整数
    int i = 10;
   while(i >= 0) {
    std::cout << i-- << std::endl;
   }
     return 0;
}