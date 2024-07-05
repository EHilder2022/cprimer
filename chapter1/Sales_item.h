#include <iostream>
#include <string>
class Sales_item
{
private:
    std::string isbn;
    int count;
    double ave_price;
public:
    Sales_item();
    ~Sales_item();
    void read() {
        std::cin >> isbn;
        std::cin >> count;
        std::cin >> ave_price;
    }
    void print(){
        std::cout << isbn << " " << count << " " << ave_price << " " << std::endl;
    }
};

Sales_item::Sales_item()
{
    isbn = "";
    count = 0;
    ave_price = 0;
}

Sales_item::~Sales_item()
{
}
