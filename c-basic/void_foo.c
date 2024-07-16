#include <stdio.h>

void foo()
{
    printf("foo\n");
}

int main()
{
    printf("I am main\n");

    foo();

    return 0;
}

/*
Fonksiyonun geri dönüş değeri yerine void anahtar sözcüğü yazılırsa bu durum fonksiyonun geri dönüş değerinin 
olmadığı  anlamına  gelir.  Böyle  fonksiyonlara  void  fonksiyonlar  denir.  void  fonksiyonlarda  return  kullanılabilir 
fakat yanına ifade yazılamaz. void fonksiyonlarda return kullanılmamışsa fonksiyon ana blok sonlanınca sonlanır.  
*/