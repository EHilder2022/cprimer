/*
 * @author aaecus
 * @date 2024/07/05
 * @time 10:09:20
*/
#include <iostream>

int main() {

    // 'a' => char 
    // L'a' => wchar_t
    // "a" => 字符串字面量
    // L"a" => 宽字符串字面量

    //10 => int
    // 10u => unsigned int
    // 10L => long
    // 10uL => unsigned long
    // 012 =>八进制数
    // 0xc =>十六进制整形字面量，类型可能是int,unsingned int , long ,unsignend long 
    

    //3.14 => double
    // 3.14f => float
    // 3.14L => long double

    // 10 => int 十进制数默认是有符号的，int/long /long long
    // 10u => unsigned
    //10. => double
    // 10e-2 => double


    // 练习2.6
    // int month = 9, day = 7
    // int month = 09, day = 07
    // 第二种，使用0开头的数用八进制表示，但是9超过了八进制，则视为十进制的9
    // 07 表示八进制数，它可能是int,unsigned int, long , unsigned long ,long long , unsigned long long 

    //练习2.7
    // "who goes with F\145rgus \012" \145=>'e' , \012=>'\n'
    //3.14e1L =>long double 31.4L long double
    //1024f => float 1024.00
    //3.14 => long double
    
     return 0;
}