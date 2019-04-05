#ifndef GOATMEAT_H_INCLUDED
#define GOATMEAT_H_INCLUDED

#include "FarmProduct.h"

//! Kelas GoatMeat
/*!
 * Merupakan kelas turunan dari kelas FarmProduct yang merepresentasikan produk daging kambing.
 * Produk hasil kelas Goat.
 */
class GoatMeat : public FarmProduct {
    public:
        //! Konstruktor default dari kelas GoatMeat
        /*! Inisialiasi nama produk dengan "Goat Meat" dan harga awal 12000
        */
        GoatMeat();
};


#endif // GOATMEAT_H_INCLUDED
