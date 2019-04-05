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
        LinkedList(){
            //kosong
        }
        
        //default cctor
        LinkedList(const LinkedList& copy){
            for (int i = 0; i < copy.isi.size(); i++)
                isi.push_back(copy.isi[i]);
        }
        
        //dtor
        ~LinkedList(){
            isi.clear();
        }

        //operator=
        LinkedList& operator=(const LinkedList& copy){
            isi.clear();
            for (int i = 0; i < copy.isi.size(); i++)
                add(copy.isi[i]);
            return *this;
        }

        //service
        //mengembalikan indeks dimana element ditemukan
        //jika tidak ditemukan akan mengembalikan -1
        int find(Type element){
            int isi_size = isi.size();
            for (int i = 0; i < isi_size; i++){
                if (get(i).getName() == element.getName())
                    return i;
            }
            return -1;
        }

        //mengembalikan true jika linked list kosong
        bool isEmpty(){
            return (isi.size() == 0);
        }

        //menambahkan elemen sebagai elemen paling akhir
        void add(Type element){
            isi.push_back(element);
        }

        //membuang elemen dari linkedlist
        void remove(Type element){
            int pos = find(element);
            if (pos != -1){
                int find;
                isi.erase(isi.begin() + pos);
            }
        }

        //mengembalikan elemen pada indeks
        //prekondisi : indeks < ukuran isi
        Type get(int indeks){
            return isi[indeks];
        }

        //mengembalikan ukuran dari linkedlist
        int size(){
            return isi.size();
        }

        //mencetak isi linkedlist
        //misal isi linkedlist adalah l1, l2, ... ln maka akan tercetak [l1, l2, l3, ..., ln]
        //jika kosong akan menuliskan []
        void print(){
            if (isi.size() == 0){
                cout << "[]\n";
            }else {
                cout << "[";
                for (int i = 0; i < isi.size(); i++){
                    isi[i].print();
                    cout << (i == isi.size() - 1 ? "]\n" : ", ");
                }
            }
        }

        void clear(){
            isi.clear();
        }
};

#endif