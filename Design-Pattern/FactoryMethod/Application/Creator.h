#include "IProduct.h"

class Creator { /* Super class */
public:
    virtual ~Creator() {};

    std::string productChecking() const;

    virtual IProduct* createProduct() const = 0;
};

class CreateProductA: public Creator {
public:
    virtual IProduct* createProduct() const override;
};

class CreateProductB: public Creator {
public:
    virtual IProduct* createProduct() const override;
};