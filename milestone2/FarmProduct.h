#ifndef FARMPRODUCT_H_INCLUDED
#define FARMPRODUCT_H_INCLUDED

#include "Product.h"

//! Kelas FarmProduct
/*!
 * Merupakan kelas turunan dari kelas Product yang merepresentasikan produk peternakan.
 */
class FarmProduct : public Product {
    public:
        //! Konstruktor default dari kelas FarmProduct
        /*! Inisialiasi atribut farm_product dengan true
        */
        FarmProduct();

};

#endif // FARMPRODUCT_H_INCLUDED
