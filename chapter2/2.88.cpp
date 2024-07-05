/*
 * @author aaecus
 * @date 2024/07/05
 * @time 10:31:56
*/
#include <iostream>
void one() {
    std::cout << 2 << '\115' << '\012';

}
void two(){
    std::cout << 2;
    std::cout << '\t' ;
    std::cout << '\115';
    std::cout << '\012';
    std::cout << "new line";
}
int main() {
    //使用转义程序输出2M,然后转到新一行
    //修改程序 使其先输出2，然后输出制表符，再输出M,最后转到新一行
    one();
    two();
     return 0;
}