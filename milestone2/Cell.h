#ifndef CELL_H
#define CELL_H

#include "Renderable.h"

//! Kelas Cell
/*!
 * Merupakan kelas turunan dari renderable yang merepresentasikan petak untuk tempat objek.
 */
class Cell: public Renderable{
public:
    //! Konstruktor default dari kelas Cell.
    /*!
     * Inisialisasi posisi x = 0 dan posisi y = 0
     */
    Cell();
    //! Konstruktor berparameter dari kelas Cell.
    /*!
     * Inisialisasi posisi awal sesuai parameter
     */
    Cell(int x,int y);
    //! Setter atribut posx dari kelas Cell.
    /*!
     * Untuk mengubah nilai dari atribut posx dari kelas Cell.
     */
    void setX(int);
    //! Setter atribut posy dari kelas Cell.
    /*!
     * Untuk mengubah nilai dari atribut posy dari kelas Cell.
     */
    void setY(int);
    //! Implementasi virtual render() dari kelas Renderable.
    /*!
     * Untuk mendapatkan @return karakter untuk representasi petak
     */
    char render();
};

#endif
