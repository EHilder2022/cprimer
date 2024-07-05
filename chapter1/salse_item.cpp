/*
 * @author aaecus
 * @date 2024/07/05
 * @time 07:32:17
*/
#include <iostream>
#include "Sales_item.h"
int main() {
    Sales_item book;
    while(true) {
        book.read();
        book.print();
    }
     return 0;
}