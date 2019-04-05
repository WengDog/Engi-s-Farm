#ifndef _RABBIT_HPP
#define _RABBIT_HPP

#include <iostream>
#include "MeatProducer.h"
using namespace std;

//! Kelas Chicken
/*!
 * Kelas Chicken, merupakan inherit class dari kelas EggProducer.
 * Digunakan untuk mengidentifikasi objek Chicken.
 */
class Rabbit: virtual public MeatProducer{
    public:
			//! Konstruktor default dari kelas Chicken.
					/*!
					 * Konstruktor default men-set isChickenAlive dengan true
					 */
    Rabbit();

		//! implementasi method virtual dari kelas Animal()
        /*!
         * implementasi method virtual dari kelas Animal().
         * Mencetak suara Chicken
         */
    void printSound();
		//! implementasi method virtual dari kelas Animal()
        /*!
         * implementasi method virtual dari kelas Animal().
         * @return integer digunakan untuk menghasilkan endurance.
         */
    int getEndurance();
		//! implementasi method virtual dari kelas Animal()
        /*!
         * implementasi method virtual dari kelas Animal().
         * @return integer digunakan untuk menghasilkan endurance_default.
         */
    int getEndurance_Default();
		//! implementasi method virtual dari kelas Animal()
        /*!
         * implementasi method virtual dari kelas render().
         * mengubah nilai endurance
         */
    void setEndurance(int);
		//! implementasi method virtual dari kelas Animal()
        /*!
         * implementasi method virtual dari kelas Animal().
         * @return karakter digunakan untuk menghasilkan kode render.
         */
    char render();

    private:
    bool isRabbitAlive; /*<! boolean yang merepresentasikan apakah Chicken hidup atau mati*/
};

#endif
