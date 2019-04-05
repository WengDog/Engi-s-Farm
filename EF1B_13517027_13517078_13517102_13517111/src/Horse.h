#ifndef _HORSE_HPP
#define _HORSE_HPP

#include <iostream>
#include "MilkProducer.h"
using namespace std;

//! Kelas Horse
/*!
 * Kelas Horse, merupakan inherit class dari kelas EggProducer.
 * Digunakan untuk mengidentifikasi objek Horse.
 */
class Horse: virtual public MilkProducer{
    public:
			//! Konstruktor default dari kelas Horse.
					/*!
					 * Konstruktor default men-set isHorseAlive dengan true
					 */
    Horse();

		//! implementasi method virtual dari kelas Animal()
        /*!
         * implementasi method virtual dari kelas Animal().
         * Mencetak suara Horse
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
    bool isHorseAlive; /*<! boolean yang merepresentasikan apakah Horse hidup atau mati*/
};

#endif
