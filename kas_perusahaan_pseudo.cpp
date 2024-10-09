//PSEUDOCODE SOAL 2

//LIBRARY & FUNGSI MAIN

//JUDUL = MENENTUKAN JENIS PERUSAHAAN
//        BERDASARKAN JUMLAH KAS


//DEKLARASI 
  kas = integer

//ALGORITMA 
  output = ("Masukan jumlah kas perusahaan lebih kecil dari 11 M : ");
  input = (kas);
   
 
      if (kas <=10) then
        if (kas ==10) then
          output ("=> Perusahaan Makro Kelas A <=");
          else if (kas ==9) then
          output ("=> Perusahaan Makro Kelas B <=");
          else if (kas ==8) then
          output ("=> Perusahaan Makro Kelas C <=");
          else if (kas ==7) then
          output ("=> Perusahaan Makro Kelas D <=");
          if (kas <=6) then
            if (kas ==6) then
              output ("=> Perusahaan Menengah Kelas A <=");
              else if (kas ==5)then
              output ("=> Perusahaan Menengah Kelas B <=");
              else if (kas ==4)then
              output ("=> Perusahaan Menengah Kelas C <=");
              else if (kas ==3)then
              output ("=> Perusahaan Menengah Kelas D <=");
              else if (kas ==2)then
              output ("=> Perusahaan Menengah Kelas E <=");
              else if (kas ==1)then
              output ("=> Perusahaan Menengah Kelas F <=");
              else
              output ("=> Perusahaan Belum Terdaftar <=");
        
        endif
     endif
 endif