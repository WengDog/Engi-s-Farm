#ifndef CARBONARA_H_INCLUDED
#define CARBONARA_H_INCLUDED

#include "SideProduct.h"

//! Kelas Carbonara
/*!
 * Merupakan kelas turunan dari kelas SideProduct yang merepresentasikan objek carbonara.
 * Produk sampingan hasil dari kelas GoatMeat dan HorseMilk.
 */
class Carbonara : public SideProduct {
    public:
        //! Konstruktor default dari kelas Carbonara
        /*! Inisialiasi nama produk dengan "Carbonara" dan harga awal 25000
        */
        Carbonara();
};

#endif // CARBONARA_H_INCLUDED
