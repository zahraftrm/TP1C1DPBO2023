// library
#include "Student.cpp"
#ifndef Assistant_H
#define Assistant_H

// membuat kelas Assistant yang merupakan turunan dari kelas Student
class Assistant: public Student {
    // atribut yang diperlukan
    protected:
        string course;
        string role;
    
    public:
        // konstruktor kosong
        Assistant() {
        }

        // konstruktor dengan parameter
        Assistant(string nik, string name, string gender, int nim, string major, string faculty, int textbooks, string laptop, string additionalRole, string course, string role){
            // set nilainya
            this->nik = nik; 
            this->nim = nim; 
            this->name = name;
            this->gender = gender;
            this->major = major;
            this->faculty = faculty;
            this->textbooks = textbooks;
            this->laptop = laptop;
            this->additionalRole = additionalRole;
            this->course = course;
            this->role = role;
        }

        // tetapkan course
        void setCourse(string course) {
            this->course = course;
        }

        // get course
        string getCourse() {
            return this->course;
        }

         // tetapkan role
        void setRole(string role) {
            this->role = role;
        }

        // get role
        string getRole() {
            return this->role;
        }

        void teach(){
            cout << this->name << " is teaching " << this-> major << '\n';
        }

        void giveHomework(){
            cout << this->name << " is giving some homeworks" << '\n';
        }

        // deconstruct
        ~Assistant() {
        }
};

#endif