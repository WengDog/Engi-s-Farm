#ifndef SIDEPRODUCT_H_INCLUDED
#define SIDEPRODUCT_H_INCLUDED

#include "Product.h"

//! Kelas SideProduct
/*!
 * Merupakan kelas turunan dari kelas Product yang merepresentasikan produk sampingan.
 */
class SideProduct : public Product {
    public:
        //! Konstruktor default dari kelas PieSusu
        /*! Inisialiasi atribut side_product dengan true
        */
        SideProduct();
};


#endif // SIDEPRODUCT_H_INCLUDED
