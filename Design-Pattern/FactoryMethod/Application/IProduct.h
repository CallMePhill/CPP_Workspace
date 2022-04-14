#include <iostream>
#include <string>

class IProduct { /* Interface */
public:
    virtual ~IProduct() {};
    virtual std::string showInfo() const = 0;

};

class ProductA: public IProduct {
public:
    virtual std::string showInfo() const override;
};

class ProductB: public IProduct {
public:
    virtual std::string showInfo() const override;
};
