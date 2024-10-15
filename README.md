# esp32-led-controller
 

## Deskripsi
Proyek ini merupakan implementasi sistem IoT sederhana yang menggunakan **ESP32** sebagai mikrokontroler untuk mengontrol **dua lampu LED** melalui aplikasi **Blynk**. Sistem ini memungkinkan kontrol jarak jauh lampu-lampu LED dari ponsel atau perangkat lain yang terhubung ke aplikasi Blynk.

Untuk simulasi dan pengujian, proyek ini menggunakan **Wokwi**, sebuah **emulator ESP32** online, karena perangkat keras fisik (ESP32 dan komponen) tidak tersedia. Wokwi memungkinkan pengguna untuk membuat, menguji, dan menjalankan kode IoT secara virtual tanpa harus memiliki perangkat keras fisik.

## Komponen utama:
1. **ESP32**: Mikrokontroler yang digunakan untuk menghubungkan ke internet dan mengontrol dua lampu LED.
2. **Dua Lampu LED**: Dikendalikan secara independen menggunakan pin GPIO ESP32 melalui aplikasi Blynk.
3. **Resistor 100Ω**: Digunakan untuk membatasi arus yang mengalir ke setiap LED, mencegah kerusakan pada LED.
4. **Blynk**: Platform IoT yang digunakan untuk mengontrol LED secara nirkabel melalui aplikasi mobile.
5. **Wokwi Emulator**: Digunakan sebagai pengganti perangkat fisik untuk pengembangan dan pengujian kode.

## Alasan Penggunaan:
- **ESP32**: Dipilih karena kemampuannya yang kuat untuk konektivitas Wi-Fi, harga yang terjangkau, dan kompatibilitas dengan platform IoT seperti Blynk.
- **Blynk**: Memungkinkan kontrol jarak jauh dan monitoring status LED secara real-time dari aplikasi mobile dengan antarmuka yang ramah pengguna.
- **Resistor 100Ω**: Penting untuk melindungi LED dari kelebihan arus, menjaga agar arus tidak melebihi batas yang aman untuk LED.
- **Wokwi Emulator**: Digunakan karena perangkat keras fisik tidak tersedia, namun emulator ini memungkinkan simulasi yang akurat dari perangkat keras ESP32 dan komponen lainnya tanpa harus membeli perangkat fisik.

## Cara Penggunaan:
1. Clone repository ini.
2. Simulasikan proyek menggunakan **Wokwi Emulator** untuk ESP32 dengan dua lampu LED.
3. Gunakan aplikasi Blynk untuk mengontrol lampu LED melalui Wi-Fi.

## Keunggulan:
- Tidak memerlukan perangkat keras fisik untuk pengujian dan simulasi.
- Kontrol jarak jauh yang mudah dengan Blynk.
- Sistem sederhana namun efektif untuk mempelajari dasar-dasar IoT dan kontrol perangkat melalui internet.
"""