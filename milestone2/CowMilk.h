#ifndef COWMILK_H_INCLUDED
#define COWMILK_H_INCLUDED

#include "FarmProduct.h"

//! Kelas CowMilk
/*!
 * Merupakan kelas turunan dari kelas FarmProduct yang merepresentasikan produk susu sapi.
 * Produk hasil kelas Cow.
 */
class CowMilk : public FarmProduct {
    public:
        //! Konstruktor default dari kelas CowMilk
        /*! Inisialiasi nama produk dengan "Cow Milk" dan harga awal 10000
        */
        CowMilk();
};

#endif // COWMILK_H_INCLUDED
