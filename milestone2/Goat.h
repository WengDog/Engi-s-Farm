#ifndef _GOAT_HPP
#define _GOAT_HPP

#include <iostream>
#include "MeatProducer.h"
using namespace std;

class Goat: virtual public MeatProducer{
    public:
			//! Konstruktor default dari kelas Goat.
					/*!
					 * Konstruktor default men-set isGoatAlive dengan true
					 */
    Goat();

		//! implementasi method virtual dari kelas Animal()
        /*!
         * implementasi method virtual dari kelas Animal().
         * Mencetak suara Goat
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
    bool isGoatAlive; /*<! boolean yang merepresentasikan apakah Goat hidup atau mati*/
};

#endif
