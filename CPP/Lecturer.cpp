// library
#include "Human.cpp"
#include "Assistant.cpp"
#ifndef Lecturer_H
#define Lecturer_H

// membuat kelas Lecturer yang merupakan turunan dari kelas Human
class Lecturer: public Human {
    // atribut yang diperlukan
    protected:
        int nip;
        string course;
        string major;
        string faculty;
        int markers;
        string laptop;
        Assistant assistant;

    public:
        // konstruktor kosong
        Lecturer() {
        }

       // konstruktor dengan parameter
        Lecturer(string nik, string name, string gender, int nip, string course, string major, string faculty, int markers, string laptop,  Assistant assistant) {
            // set nilainya
            this->nik = nik; 
            this->nip = nip; 
            this->name = name;
            this->gender = gender;
            this->course = course;
            this->major = major;
            this->faculty = faculty;
            this->markers = markers;
            this->laptop = laptop;
            this->assistant = assistant;
        }

        // tetapkan nip
        void setNip(int nip) {
            this->nip = nip;
        }

        // get nip
        int getNip() {
            return this->nip;
        }

        // tetapkan course
        void setCourse(string course) {
            this->course = course;
        }
        
        // get course
        string getCourse() {
            return this->course;
        }
        
        // tetapkan major
        void setMajor(string major) {
            this->major = major;
        }
        
        // get major
        string getMajor() {
            return this->major;
        }

        // tetapkan faculty
        void setFaculty(string faculty) {
            this->faculty = faculty;
        }
        
        // get faculty
        string getFaculty() {
            return this->faculty;
        }

        // tetapkan markers
        void setMarkers(int markers) {
            this->markers = markers;
        }

        // get markers
        int getMarkers() {
            return this->markers;
        }

        // tetapkan laptop
        void setLaptop(string laptop) {
            this->laptop = laptop;
        }
        
        // get laptop
        string getLaptop() {
            return this->laptop;
        }

        // tetapkan assistant
        void setAssistant(Assistant assistant) {
            this->assistant = assistant;
        }
        
        // get assistant
        Assistant getAssistant() {
            return this->assistant;
        }

        void teach(){
            cout << this->name << " is teaching " << this->major << '\n';
        }

        void giveAssignments(){
            cout << this->name << " is giving some assignments" << '\n';
        }

        void giveScores(){
            cout << this->name << " is giving scores" << '\n';
        }

        // deconstruct
        ~Lecturer() {
        }
};

#endif