#ifndef GOLDENMEATDESPACITO_H_INCLUDED
#define GOLDENMEATDESPACITO_H_INCLUDED

#include "SideProduct.h"

//! Kelas GoldenMeatDespacito
/*!
 * Merupakan kelas turunan dari kelas SideProduct yang merepresentasikan objek Golden Meat Despacito.
 * Produk sampingan hasil dari kelas DuckEgg, CowMeat dan HorseMilk.
 */
class GoldenMeatDespacito : public SideProduct {
    public:
        //! Konstruktor default dari kelas GoldenMeatDespacito
        /*! Inisialiasi nama produk dengan "Golden Meat Despacito" dan harga awal 50000
        */
        GoldenMeatDespacito();
};

#endif // GOLDENMEATDESPACITO_H_INCLUDED
