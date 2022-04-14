#include "Creator.h"

#include <conio.h>

void calling(const Creator* product);

int main() { system("cls");
    Creator* example01 = new CreateProductA();
    calling(example01);
    std::cout << std::endl;

    Creator* example02 = new CreateProductB();
    calling(example02);
    std::cout << std::endl;
    delete example01;
    delete example02;
    return 0;
}

void calling(const Creator* product) {
    std::cout << product->productChecking() << std::endl;
}