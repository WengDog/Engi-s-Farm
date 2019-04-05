#ifndef COWMEAT_H_INCLUDED
#define COWMEAT_H_INCLUDED

#include "FarmProduct.h"

//! Kelas CowMeat
/*!
 * Merupakan kelas turunan dari kelas FarmProduct yang merepresentasikan produk daging sapi.
 * Produk hasil kelas Cow.
 */
class CowMeat : public FarmProduct {
    public:
        //! Konstruktor default dari kelas CowMeat
        /*! Inisialiasi nama produk dengan "Cow Meat" dan harga awal 10000
        */
        CowMeat();
};

#endif // COWMEAT_H_INCLUDED
