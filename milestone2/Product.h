#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

#include <iostream>
using namespace std;

class Product {
    // Basis Kelas Abstrak
    protected:
        string name; // Menyatakan nama produk
        double Price; // Menyatakan harga dari hasil produk
        bool farm_product; // Menandakan Farm product
        bool side_product; // Menandakan Side Product

    public:
        // ctor default Price = 0, farm_product = false, side_product = false
        Product();

        // ctor user defined
        Product(string name, double Price,bool farm_product,bool side_product);

        //Setter
        void setPrice(double Price);

        //Getter
        double getPrice() const;
        string getName() const;
};

#endif // PRODUCT_H_INCLUDED
