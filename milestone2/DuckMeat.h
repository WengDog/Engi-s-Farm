#ifndef DUCKMEAT_H_INCLUDED
#define DUCKMEAT_H_INCLUDED

#include "FarmProduct.h"

//! Kelas DuckMeat
/*!
 * Merupakan kelas turunan dari kelas FarmProduct yang merepresentasikan produk daging bebek.
 * Produk hasil kelas Duck.
 */
class DuckMeat : public FarmProduct {
    public:
        //! Konstruktor default dari kelas DuckMeat
        /*! Inisialiasi nama produk dengan "Duck Meat" dan harga awal 7000
        */
        DuckMeat();
};

#endif // DUCKMEAT_H_INCLUDED
