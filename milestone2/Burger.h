#ifndef BURGER_H_INCLUDED
#define BURGER_H_INCLUDED

#include "SideProduct.h"

//! Kelas Burger
/*!
 * Merupakan kelas turunan dari kelas SideProduct yang merepresentasikan objek burger.
 * Produk sampingan hasil dari kelas RabbitMeat dan DuckEgg.
 */
class Burger : public SideProduct {
    public:
        //! Konstruktor default dari kelas Burger
        /*! Inisialiasi nama produk dengan "Burger" dan harga awal 20000
        */
        Burger();
};

#endif // BURGER_H_INCLUDED
