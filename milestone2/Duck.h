#ifndef _DUCK_HPP
#define _DUCK_HPP

#include <iostream>
#include "EggProducer.h"
#include "MeatProducer.h"
using namespace std;

//! Kelas Duck
/*!
 * Kelas Duck, merupakan inherit class dari kelas EggProducer.
 * Digunakan untuk mengidentifikasi objek Duck.
 */
class Duck: virtual public EggProducer, virtual public MeatProducer{
    public:
			//! Konstruktor default dari kelas Duck.
					/*!
					 * Konstruktor default men-set isDuckAlive dengan true
					 */
    Duck();

		//! implementasi method virtual dari kelas Animal()
        /*!
         * implementasi method virtual dari kelas Animal().
         * Mencetak suara Duck
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
    bool isDuckAlive; /*<! boolean yang merepresentasikan apakah Duck hidup atau mati*/
};

#endif
