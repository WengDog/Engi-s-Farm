/*Kelas LinkedList untuk menyimpan tipe generik*/

#ifndef _LinkedList_HPP
#define _LinkedList_HPP

#include <iostream>
#include <vector>

using namespace std;

template<class Type>
class LinkedList{
    private:
        //isi dari linkedlist
        vector<Type> isi;

    public:
        //default ctor
        LinkedList();
        //default cctor
        LinkedList(const LinkedList&);
        //dtor
        ~LinkedList();

        //operator=
        LinkedList& operator=(const LinkedList&);

        //service
        //mengembalikan indeks dimana element ditemukan
        //jika tidak ditemukan akan mengembalikan -1
        int find(Type element);

        //mengembalikan true jika linked list kosong
        bool isEmpty();

        //menambahkan elemen sebagai elemen paling akhir
        void add(Type element);

        //membuang elemen dari linkedlist
        void remove(Type element);

        //mengembalikan elemen pada indeks
        //prekondisi : indeks < ukuran isi
        Type get(int indeks);

        //mengembalikan ukuran dari linkedlist
        int size();

        //mencetak isi linkedlist
        //misal isi linkedlist adalah l1, l2, ... ln maka akan tercetak [l1, l2, l3, ..., ln]
        //jika kosong akan menuliskan []
        void print();
};

#endif