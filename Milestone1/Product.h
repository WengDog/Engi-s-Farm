#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

#include <iostream>
using namespace std;

class Product {
    // Basis Kelas Abstrak
    protected:
        double Price; // Menyatakan harga dari hasil produk
        bool farm_product; // Menandakan Farm product
        bool side_product; // MEnandakan Side Product

    public:
        // ctor default Price = 0, farm_product = false, side_product = false
        Product();

        // ctor user defined
        Product(double Price,bool farm_product,int side_product);

        //Setter
        void SetPrice(double _Price);

        //Getter
        double GetPrice() const;

};

#endif // PRODUCT_H_INCLUDED
