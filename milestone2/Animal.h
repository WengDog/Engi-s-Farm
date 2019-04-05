#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

#include <iostream>
#include "Renderable.h"
#define DEFAULT_ENDURANCE 5

//! Kelas Animal
/*!
 * Kelas Animal, merupakan abstract base class untuk objek hewan.
 * Digunakan untuk mengidentifikasi objek hewan-hewan.
 */
class Animal : public Renderable{
    public:
        //! Konstruktor default dari kelas Animal.
        /*!
         * Konstruktor default tidak ada implementasi
         */
        Animal();
        //! Konstruktor berparameter dari kelas Animal.
        /*!
         * Konstruktor berparameter Animal yang menerima sebuah integer
         * untuk menentukan waktu kelaparan tiap hewan.
         */
        Animal(int);
        //! method pure virtual
        /*!
         * Untuk menampilkan suara hewan.
         */
        virtual void printSound()=0;
        //! method pure virtual
        /*!
         * Untuk @return integer waktu lapar hewan dan dapat berkurang tiap ticknya.
         */
        virtual int getEndurance()=0;
        //! method pure virtual
        /*!
         * Untuk @return integer waktu lapar default hewan dan bersifat konstan.
         */
        virtual int getEndurance_Default()=0;
        //! method pure virtual
        /*!
         * Untuk mengubah waktu lapar default hewan.
         */
        virtual void setEndurance(int)=0;
        //! implementasi method virtual dari kelas render()
        /*!
         * implementasi method virtual dari kelas render().
         * @return karakter digunakan untuk representasi objek pada layar.
         */
        char render();
        /**
         * method untuk mengubah status apakah hewan dapat menghasilkan produk.
         */
        void setIsProductable(bool);
        /**
         * method untuk @return boolean apakah hewan dapat menghasilkan produk.
         */
        bool getIsProductable();

    protected:
        int endurance;/*<! integer yang merepresentasikan waktu hewan lapar dan bisa berkurang tiap waktunya*/
        int endurance_default;/*<! integer yang merepresentasikan batas waktu hewan lapar dan bersifat konstan*/
        bool meat; /*<! boolean yang menandakan hewan penghasil daging bila bernilai true*/
        bool milk; /*<! boolean yang menandakan hewan penghasil susu bila bernilai true*/
        bool egg; /*<! boolean yang menandakan hewan penghasil telur bila bernilai true*/
        bool isProductable; /*<! boolean yang menandakan hewan dapat menghasilkan produk bila bernilai true*/
};

#endif
