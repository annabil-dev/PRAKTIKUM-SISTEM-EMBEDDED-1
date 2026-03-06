LED Blink with Button (STM32 & ESP32)

Deskripsi

Project ini merupakan simulasi dan implementasi sederhana sistem
embedded untuk mengontrol LED menggunakan tombol (push button). Ketika
tombol ditekan, LED akan berubah status (toggle) dari OFF menjadi ON
atau sebaliknya.

Project ini dibuat untuk mempelajari konsep dasar input-output digital
pada mikrokontroler serta memahami mekanisme debounce, pull-up /
pull-down resistor, dan pengolahan sinyal tombol pada sistem embedded.

Platform yang digunakan pada project ini adalah mikrokontroler
STM32F103C8T6 dan ESP32.

Tujuan Project

-   Memahami dasar kontrol GPIO (General Purpose Input Output)
-   Mengimplementasikan push button sebagai input
-   Mengontrol LED sebagai output
-   Menggunakan metode toggle LED dengan button
-   Mempelajari konsep pull-up dan pull-down resistor

Komponen yang Digunakan

-   Mikrokontroler STM32 / ESP32 (1)
-   LED (1)
-   Push Button (1)
-   Resistor 220Ω untuk LED (1)
-   Resistor Pull-down / Pull-up (1)
-   Breadboard dan kabel jumper

Konfigurasi Pin

STM32 LED : PA5 Button : PB0

ESP32 LED : GPIO13 Button : GPIO12

Cara Kerja Sistem

1.  Sistem membaca status tombol secara terus menerus.
2.  Ketika tombol ditekan, mikrokontroler mendeteksi perubahan logika
    pada pin input.
3.  Program mengubah status LED menggunakan metode toggle.
4.  LED tetap pada kondisi terakhir sampai tombol ditekan kembali.

Struktur Repository

led-blink-button/ │ ├── STM32/ │ └── main.c │ ├── ESP32/ │ └── main.c │
├── schematic/ │ └── wiring-diagram.png │ └── README.md

Cara Menjalankan Project

STM32 1. Buka project menggunakan STM32CubeIDE. 2. Hubungkan board STM32
ke komputer. 3. Compile dan upload program ke board.

ESP32 1. Buka project menggunakan Visual Studio Code dengan extension
PlatformIO. 2. Hubungkan board ESP32. 3. Upload program ke board dan
jalankan.

Hasil yang Diharapkan

-   LED menyala ketika tombol ditekan pertama kali.
-   LED mati ketika tombol ditekan kembali.
-   Sistem bekerja stabil tanpa bouncing pada tombol.

Pengembangan Selanjutnya

-   Menambahkan OLED display untuk menampilkan status LED
-   Menggunakan interrupt pada button
-   Menambahkan mode timer atau counter
-   Implementasi RTOS pada ESP32
