[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/2u8wiDFW)
# UTSPraktekom-2
1. Lengkapi file FindMax.c agar dapat mencari nilai terbesar dari suatu array (Score 50).  
2. Kalkulator Sederhana (Score 50).
Dalam file bernama kalkulator.c, buatlah program dalam C untuk melakukan perhitungan 2 buah bilangan yang diinputkan oleh user menggunakan function. 

Contoh : 
```c
$ make kalkulator                                                                    
$ ./kalkulator                                                                       
================================
     KALKULATOR SEDERHANA
================================
Pilih Operator (+, -, *, /): +
Bilangan Pertama: 6
Bilangan Kedua: 3
Hasilnya: 9.00
$
```

Program akan menampilkan tulisan **operator salah** jika operator yang dipilih tidak ada dalam daftar. 

Contoh : 
```c
$ make kalkulator                                                                    
$ ./kalkulator                                                                       
================================
     KALKULATOR SEDERHANA       
================================
Pilih Operator (+, -, *, /): a
Bilangan Pertama: 7
Bilangan Kedua: 6
Operator Salah.
$
```

TIPS <br/>
Anda bisa menggunakan Perintah **Switch.. Case** untuk membuat pilihan operator. 
Syntax : 
```c
switch (expression)
​{
    case constant1:
      // statements
      break;

    case constant2:
      // statements
      break;
    .
    .
    .
    default:
      // default statements
}
```