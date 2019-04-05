#ifndef DUCKEGG_H_INCLUDED
#define DUCKEGG_H_INCLUDED

#include "FarmProduct.h"

//! Kelas DuckEgg
/*!
 * Merupakan kelas turunan dari kelas FarmProduct yang merepresentasikan produk telur bebek.
 * Produk hasil kelas Duck.
 */
class DuckEgg : public FarmProduct {
    public:
        //! Konstruktor default dari kelas DuckEgg
        /*! Inisialiasi nama produk dengan "Duck Egg" dan harga awal 6000
        */
        DuckEgg();
};

#endif // DUCKEGG_H_INCLUDED
