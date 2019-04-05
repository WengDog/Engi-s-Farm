#ifndef CHICKENEGG_H_INCLUDED
#define CHICKENEGG_H_INCLUDED

#include "FarmProduct.h"

//! Kelas ChickenEgg
/*!
 * Merupakan kelas turunan dari kelas FarmProduct yang merepresentasikan produk telur ayam.
 * Produk hasil kelas Chicken.
 */
class ChickenEgg : public FarmProduct {
    public:
        //! Konstruktor default dari kelas ChickenEgg
        /*! Inisialiasi nama produk dengan "Chicken Egg" dan harga awal 5000
        */
        ChickenEgg();
};

#endif // CHICKENEGG_H_INCLUDED
