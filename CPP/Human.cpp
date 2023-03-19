// library
#include <iostream>
#include <stdio.h>
#include <string.h>
#ifndef Human_H
#define Human_H

using namespace std;

// membuat kelas Human
class Human{
    // atribut yang diperlukan
    protected:
        string nik;
        string name;
        string gender;
    
    public:
        // konstruktor kosong
        Human() {
        }

        // konstruktor dengan parameter
        Human(string nik, string name, string gender) {
            // set nilainya
            this->nik = nik;
            this->name = name;
            this->gender = gender;
        }

        // tetapkan nik
        void setNik(string nik) {
            this->nik = nik;
        }

        // get nik
        string getNik() {
            return this->nik;
        }

        // tetapkan name
        void setName(string name) {
            this->name = name;
        }

        // get name
        string getName() {
            return this->name;
        }

        // tetapkan gender
        void setGender(string gender) {
            this->gender = gender;
        }

        // get gender
        string getGender() {
            return this->gender;
        }

        void eat(){
            cout << this->name << " is eating" << '\n';
        }

        void drink(){
            cout << this->name << " is drinking" << '\n';
        }

        void sleep(){
            cout << this->name << " is sleeping" << '\n';
        }
        
        // deconstruct
        ~Human() {
        }
};

#endif