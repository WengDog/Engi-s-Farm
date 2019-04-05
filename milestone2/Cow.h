#ifndef _COW_HPP
#define _COW_HPP

#include <iostream>
#include "MeatProducer.h"
#include "MilkProducer.h"
using namespace std;

//! Kelas Cow
/*!
 * Kelas Cow, merupakan inherit class dari kelas EggProducer.
 * Digunakan untuk mengidentifikasi objek Cow.
 */
class Cow: virtual public MeatProducer, virtual public MilkProducer{
    public:
			//! Konstruktor default dari kelas Cow.
					/*!
					 * Konstruktor default men-set isCowAlive dengan true
					 */
    Cow();

		//! implementasi method virtual dari kelas Animal()
				/*!
				 * implementasi method virtual dari kelas Animal().
				 * Mencetak suara Cow
				 */
    void printSound();
		//! implementasi method virtual dari kelas Animal()
        /*!
         * implementasi method virtual dari kelas Animal().
         * @return karakter digunakan untuk menghasilkan kode render.
         */
    char render();
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

    private:
    bool isCowAlive; /*<! boolean yang merepresentasikan apakah Cow hidup atau mati*/
};

#endif
