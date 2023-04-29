#include <iostream>


int main()
{
    std::string greeting{ "/* \n 1.Enter deposit \n 2.Enter month.\n */" };
    std::cout << greeting << std::endl;
    double value;
    double deposit = 0;
    double month = 0;
    int const a = 5;
    int const b = 365;
    int const c = 30;
    double d = 0;
    std::cin >> deposit >> value;
    std::cin >> month >> value;
    d = deposit * (static_cast<double>(a) / 100) / b * c;
    std::cout << deposit << " * " << a << "%  / " << b << " * " << c << " = " << d << " $" << std::endl;
    d *= month;
    std::cout << d << " $" << std::endl;
    std::cout << "summ deposit + 5% = " << deposit + d << " $";
    std::cout << std::endl << std::endl;

    return 0;
}