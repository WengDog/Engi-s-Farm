#ifndef RENDERABLE_H
#define RENDERABLE_H

#include <iostream>

using namespace std;

//! Kelas Renderable
/*!
 * Merupakan Abstract Base Class yang merepresentasikan posisi objek,
 * agar membantu menampilkan objek ke layar
 */
class Renderable{
    protected:
        int posx; /*<! integer yang merupakan posisi absis dari objek*/
        int posy; /*<! integer yang merupakan posisi absis dari objek*/

    public:
        //! Konstruktor default dari kelas Renderable.
        /*!
         * Inisialisasi psosisi awal (0,0)
         */
        Renderable();
        //! method pure virtual
        /*!
         * Untuk @return karakter dari representasi objek ke layar.
         */
        virtual char render() = 0;

        //! Getter atribut posx dari kelas Renderable.
        /*!
         * Untuk mendapatkan @return integer dari atribut posx dari kelas Renderable
         */
        int getposx();
        //! Getter atribut posy dari kelas Renderable.
        /*!
         * Untuk mendapatkan @return integer dari atribut posy dari kelas Renderable
         */
        int getposy();

        //! Setter atribut posx dari kelas Renderable.
        /*!
         * Untuk mengubah nilai dari atribut posx dari kelas Renderable.
         */
        void setposx(int);
        //! Setter atribut posy dari kelas Renderable.
        /*!
         * Untuk mengubah nilai dari atribut posy dari kelas Renderable.
         */
        void setposy(int);
};

#endif
