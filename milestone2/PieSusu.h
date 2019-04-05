#ifndef PIESUSU_H_INCLUDED
#define PIESUSU_H_INCLUDED

#include "SideProduct.h"
//! Kelas PieSusu
/*!
 * Merupakan kelas turunan dari kelas SideProduct yang merepresentasikan objek pie susu.
 * Produk sampingan hasil dari kelas ChickenEgg dan CowMilk.
 */
class PieSusu : public SideProduct {
    public:
        //! Konstruktor default dari kelas PieSusu
        /*! Inisialiasi nama produk dengan "Pie Susu" dan harga awal 20000
        */
        PieSusu();
};

#endif // PIESUSU_H_INCLUDED
