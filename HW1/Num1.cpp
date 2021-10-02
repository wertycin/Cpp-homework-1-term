#include <iostream>
#include <iomanip>

int main() {
    std::string name;
    int price, temperature;
    bool hasCashback;
    std::cout << "Product's name: ";
    std::cin >> name;
    std::cout << "Product's price: ";
    std::cin >> price;
    std::cout << "Is cash-back available for this product? (true/false) ";
    std::cin >> std::boolalpha >> std::fixed >> hasCashback;
    std::cout << "Maximum storing temperature: ";
    std::cin >> temperature;

    std::cout << '\n' << "*************** OUTPUT ***************" << "\n\n";

    std::cout << name << '\n';

    std::cout.unsetf(std::ios::dec);
    std::cout.setf(std::ios::hex);
    std::cout << "Price:" << std::setw(21) << std::setfill('.') << ' ' <<
        std::setw(8) << std::setfill('0') << std::uppercase << price << '\n';

    std::cout.unsetf(std::ios::hex);
    std::cout.setf(std::ios::dec);


    std::cout << "Has cash-back:" << std::boolalpha << std::fixed 
        << std::setw(21) << std::setfill('.') << hasCashback << '\n';

    std::cout << "Max temperature " << std::setw(19) <<
        std::setfill('.') << std::showpos << temperature;


    return 0;
}
