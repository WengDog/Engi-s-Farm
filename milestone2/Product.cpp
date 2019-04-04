// Implementasi kelas product.h

#include "Product.h"

// ctor default Price = 0, farm_product = false, side_product = false
Product::Product() {
    this->name =  "\0";
    this->Price = 0;
    this->farm_product = false;
    this->side_product = false;
}

// ctor user defined
Product::Product(string name, double Price,bool farm_product,bool side_product) {
    this->name = name;
    this->Price = Price;
    this->farm_product = farm_product;
    this->side_product = side_product;
}

//Setter
void Product::setPrice(double Price) {
    this->Price = Price;
}

//Getter
double Product::getPrice() const {
    return(this->Price);
}

string Product::getName() const {
    return(this->name);
}

