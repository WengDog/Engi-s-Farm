#ifndef RABBITMEAT_H_INCLUDED
#define RABBITMEAT_H_INCLUDED

#include "FarmProduct.h"

//! Kelas RabbitMeat
/*!
 * Merupakan kelas turunan dari kelas FarmProduct yang merepresentasikan produk daging kelinci.
 * Produk hasil kelas Rabbit.
 */
class RabbitMeat : public FarmProduct {
    public:
        //! Konstruktor default dari kelas RabbitMeat
        /*! Inisialiasi nama produk dengan "Rabbit Meat" dan harga awal 8000
        */
        RabbitMeat();
};

#endif // RABBITMEAT_H_INCLUDED
