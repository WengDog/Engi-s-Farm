// Implementasi kelas product.h

#include "Product.h"

// ctor default Price = 0, farm_product = false, side_product = false
Product::Product() {
    this->Price = 0;
    this->farm_product = false;
    this->side_product = false;
}

// ctor user defined
Product::Product(double Price,bool farm_product,bool side_product) {
    this->Price = Price;
    this->farm_product = farm_product;
    this->side_product = side_product;
}

//Setter
void Product::SetPrice(double Price) {
    this->Price = Price;
}

//Getter
double Product::GetPrice() const {
    return(this->Price);
}

