# TP1C1DPBO2023-

Saya Zahra Fitria Maharani NIM 2102545 mengerjakan soal Tugas Praktikum 1 dalam mata kuliah Desain dan Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## ALUR

Membuat 4 kelas. Kelas-kelas tersebut dipisah menjadi 4 file, yakni :
- Human (kelas nenek)
- Lecturer (kelas ayah/anak dari Human)
- Student (kelas ayah/anak dari Human)
- Assistant (kelas anak dari Student)

Kemudian terdapat satu file main. Bahasa yg digunakan adalah C++ dan merupakan hardcode.

## DESAIN PROGRAM
![image.png](https://github.com/zahraftrm/TP1C1DPBO2023/blob/main/desain.png)

- Kelas Human: 
  Merupakan kelas nenek karena terdapat atribut-atribut yg dibutuhkan oleh kelas bawahnya. Selain itu, terdapat method-method yang bisa dilakukan oleh semua manusia,  seperti eat, sleep, dan drink.  
- Kelas Lecturer: Merupakan kelas ayah karena kelas ini merupakan bagian dari Human atau is a Human.
- Kelas Student: Merupakan kelas ayah pula karena kelas ini merupakan bagian dari Human atau is a Human. Selain itu, student pastinya berbeda dgn kelas lecturer karena je;as-jelas merupakan 2 objek yg berbeda
- Kelas Assistant: Merupakan kelas cucu ataupun anak dari kelas Student karena asisten itu pastinya merupakan student. Selain itu, saya membuat kelas student karena ada method" yg hanya dimiliki oleh kelas Assistant

Saya tidak membuat kelas laptop karena merasa tidak perlu mengetahui lebih detail tentang spesifikasi laptop yg digunakan walaupun disebutkan sebagai atribut dalam kelas Lecturer dan Student. Selain itu, saya juga tidak membuat atribut laptop dalam kelas Human karena pastinya tidak semua human punya laptop. Kemudian, saya tidak membuat kelas untuk BEM ataupun DPM karena saya merasa tidak perlu dibuatkan lebih detail mengenai kedua organisasi tersebut dan juga tidak dirasa akan ada pengembangan lebih lanjut untuk kedua kelas tersebut.

## CONTOH PROGRAM CPP
<img src="https://github.com/zahraftrm/TP1C1DPBO2023/blob/main/Screenshots/Screenshot%20(1129).png" width=50% height=50%>
<img src="https://github.com/zahraftrm/TP1C1DPBO2023/blob/main/Screenshots/Screenshot%20(1130).png" width=50% height=50%>
