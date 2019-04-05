#ifndef HORSEMILK_H_INCLUDED
#define HORSEMILK_H_INCLUDED

#include "FarmProduct.h"

//! Kelas HorseMilk
/*!
 * Merupakan kelas turunan dari kelas FarmProduct yang merepresentasikan produk susu kuda.
 * Produk hasil kelas Horse.
 */
class HorseMilk : public FarmProduct {
    public:
        //! Konstruktor default dari kelas HorseMilk
        /*! Inisialiasi nama produk dengan "Horse Milk" dan harga awal 13000
        */
        HorseMilk();
};

#endif // HORSEMILK_H_INCLUDED
