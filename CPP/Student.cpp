// library
#include "Human.cpp"
#ifndef Student_H
#define Student_H

// membuat kelas Student yang merupakan turunan dari kelas Human
class Student: public Human {
    // atribut yang diperlukan
    protected:
        int nim;
        string major;
        string faculty;
        int textbooks;
        string laptop;
        string additionalRole;
    
    public:
        // konstruktor kosong
        Student() {
        }

        // konstruktor dengan parameter
        Student(string nik, string name, string gender, int nim, string major, string faculty, int textbooks, string laptop, string additionalRole) {
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
        }

        // tetapkan nim
        void setNim(int nim) {
            this->nim = nim;
        }

        // get nim
        int getNim() {
            return this->nim;
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

        // tetapkan textbooks
        void setTextbooks(int textbooks) {
            this->textbooks = textbooks;
        }

        // get textbooks
        int getTextbooks() {
            return this->textbooks;
        }

        // tetapkan laptop
        void setLaptop(string laptop) {
            this->laptop = laptop;
        }
        
        // get laptop
        string getLaptop() {
            return this->laptop;
        }

        // tetapkan additionalRole
        void setAdditionalRole(string additionalRole) {
            this->additionalRole = additionalRole;
        }
        
        // get additionalRole
        string getAdditionalRole() {
            return this->additionalRole;
        }

        void study(){
            cout << this->name << " is studying " << this->major << '\n';
        }

        void attendClass(){
            cout << this->name << " is attending " << this->major << " class" << '\n';
        }

        void doAssignments(){
            cout << this->name << " is working on assignments" << '\n';
        }

        void roleTask(){
            if(additionalRole == "President BEM"){
                cout << this->name << " is doing a program." << " After that, he will plan and work on inovations"<< '\n';
            }else if(additionalRole == "DPM"){
                cout << this->name << " is monitoring Rapi's work" << '\n';
            }
        }
        
        // deconstruct
        ~Student() {
        }
};

#endif