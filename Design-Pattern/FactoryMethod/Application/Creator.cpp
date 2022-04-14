#include "Creator.h"

IProduct* CreateProductA::createProduct() const {
    return new ProductA();
}

IProduct* CreateProductB::createProduct() const {
    return new ProductB();
}

std::string Creator::productChecking() const {
    IProduct* product = this->createProduct();
    std::string result = product->showInfo();
    delete product;
    return result;
}