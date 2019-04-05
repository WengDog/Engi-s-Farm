#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

#include <iostream>
using namespace std;

//! Kelas Product
/*!
 * Kelas Product, merupakan abstract base class untuk objek produk.
 * Digunakan untuk mengidentifikasi objek produk-produk.
 */
class Product {
    protected:
        string name; /*<! string yang menyatakan nama produk*/
        double Price; /*<! double yang menyatakan harga produk*/
        bool farm_product; /*<! boolean yang menyatakan farm product bila bernilai true*/
        bool side_product; /*<! boolean yang menyatakan side product bila bernilai true*/

    public:
        //! Konstruktor default dari kelas Product.
        /*!
         * Inisialisasi Price = 0, farm_product = false, side_product = false
         */
        Product();

        //! Konstruktor berparameter dari kelas Product.
        /*!
         * Inisialisasi masing-masing atribut sesuai parameter
         */
        Product(string name, double Price,bool farm_product,bool side_product);

        //! Setter atribut Price dari kelas Product.
        /*!
         * Untuk mengubah nilai dari atribut Price dari kelas Product
         */
        void setPrice(double Price);

        //! Getter atribut Price dari kelas Product.
        /*!
         * Untuk mendapatkan @return double dari atribut Price dari kelas Product
         */
        double getPrice() const;
        //! Getter atribut Price dari kelas Product.
        /*!
         * Untuk mendapatkan @return string dari atribut Price dari kelas Product
         */
        string getName() const;
};

#endif // PRODUCT_H_INCLUDED
