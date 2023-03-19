// library
#include <iostream>
#include "Assistant.cpp"
#include "Lecturer.cpp"

int main() {
    // welcome!
    cout << "\n===== Selamat Datang di Database UPI =====" << endl;

    // membuat array of objects untuk kelas Student
    Student iniStudent[4];

    // input data hardcode
    iniStudent[0] = Student("1800456712330987","Rapi", "L", 2105667, "Ilmu Komputer", "FPMIPA", 2, "Acer", "President BEM");
    iniStudent[1] = Student("1800456710030900", "Alga", "L", 2105617, "Ilmu Komputer", "FPMIPA", 2, "HP", "DPM");
    iniStudent[2] = Student("1800458715030200", "Anin", "P", 2105627, "Ilmu Komputer", "FPMIPA", 2, "Asus", "-");

    // keluarkan output
    cout << "\n== Data Student ==";

    for(int i = 0; i < 3; i++) {
        cout << "\n# Data Ke-" << i+1 << endl;
        cout << "NIM        : " << iniStudent[i].getNim() << endl;
        cout << "Nama       : " << iniStudent[i].getName() << endl;
        cout << "Prodi      : " << iniStudent[i].getMajor() << endl;
        cout << "Fakultas   : " << iniStudent[i].getFaculty() << endl;
        cout << "Organisasi : " << iniStudent[i].getAdditionalRole() << endl;
    }

    // membuat array of objects untuk kelas Assistant
    Assistant iniAssistant[3];

    // input data hardcode
    iniAssistant[0] = Assistant("1800458715030161", "Bulan", "L", 2105100, "Ilmu Komputer", "FPMIPA", 5, "Acer", "-", "Alpro", "Membuat Kode");
    iniAssistant[1] = Assistant("1800458715030160", "Najmi", "P", 2105657, "Ilmu Komputer", "FPMIPA", 2, "Asus", "-", "Alpro", "Menulis Modul");

    // keluarkan output
    cout << "\n== Data Assistant ==";

    for(int i = 0; i < 2; i++) {
        cout << "\n# Data Ke-" << i+1 << endl;
        cout << "NIM         : " << iniAssistant[i].getNim() << endl;
        cout << "Nama        : " << iniAssistant[i].getName() << endl;
        cout << "Prodi       : " << iniAssistant[i].getMajor() << endl;
        cout << "Fakultas    : " << iniAssistant[i].getFaculty() << endl;
        cout << "Ass. Matkul : " << iniAssistant[i].getCourse() << endl;
        cout << "Tugas       : " << iniAssistant[i].getRole() << endl;
    }

    // membuat array of objects untuk kelas Dosen
    Lecturer iniLecturer[3];

    // input data hardcode
    iniLecturer[0] = Lecturer("1800458715030170", "Rose", "P", 1678901, "Alpro", "Ilmu Komputer", "FPMIPA", 2, "Lenovo", iniAssistant[0]);

    // keluarkan output
    cout << "\n== Data Dosen ==";

    for(int i = 0; i < 1; i++) {
        cout << "\n# Data Ke-" << i+1 << endl;
        cout << "NIP         : " << iniLecturer[i].getNip() << endl;
        cout << "Nama        : " << iniLecturer[i].getName() << endl;
        cout << "Bidang Ajar : " << iniLecturer[i].getMajor() << endl;
        cout << "Prodi       : " << iniLecturer[i].getMajor() << endl;
        cout << "Fakultas    : " << iniLecturer[i].getFaculty() << endl;
        cout << "Asisten     : " << iniLecturer[i].getAssistant().getName() << endl;
    }

    // keluarkan output berupa aktivitas yg dapat dilakukan
    cout << "\n== Aktivitas Manusia ==\n";
    cout << "- "; iniStudent[0].eat();
    cout << "- "; iniAssistant[1].sleep();
    
    cout << "\n== Aktivitas Mahasiswa ==\n";
    cout << "- "; iniStudent[0].study();
    cout << "- "; iniStudent[2].attendClass();
    
    cout << "\n== Aktivitas Member Organisasi ==\n";
    cout << "- "; iniStudent[0].roleTask();
    cout << "- "; iniStudent[1].roleTask();

    cout << "\n== Aktivitas Dosen ==\n";
    cout << "- "; iniLecturer[0].teach();
    cout << "- "; iniLecturer[0].giveAssignments();

    cout << "\n== Aktivitas Asisten ==\n";
    cout << "- "; iniAssistant[0].teach();
    cout << "- "; iniAssistant[1].giveHomework();

    return 0;
}