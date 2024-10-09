
    //PSEUDOCODE KERJA


  //LIBRARY & FUNGSI MAIN

  //JUDUL = MENENTUKAN JAM KERJA


  //DEKLARASI 
  masuk, pulang, hasil = integer
  
  
  //ALGORITMA 
    output ("input jam kerja anda : ");
    input (masuk);
    output ("input jam pulang anda : ");
    input (pulang);
    
    if (pulang>masuk) then
    hasil = pulang - masuk
    else 
    hasil = (pulang+12)-masuk
    endif
    print ("anda kerja selama") read (hasil) print ("jam");
   
    endif
