# Push_swap

## Çünkü Swap_push o kadar doğal değil

_Özet:
Bu proje size mümkün olan en düşük sayıda hamleyi yaparak ve sınırlı bir talimat seti
kullanarak bir yığındaki verileri sıralatacak. Başarabilmek için çeşitli tiplerdeki
algoritmaları manipüle edip optimal bir veri sıralaması için en uygun olanını(birçoğu
arasından) seçmeniz gerekecek._

```
Versiyon: 6
```

## İçindekiler

- I Foreword
- II Giriş
- III Hedefler
- IV Genel Talimatlar
- V Zorunlu kısım
   - V.1 Oyun kuralları
   - V.2 Örnek
   - V.3 ‘push_swap” programı
- VI Bonus kısım
   - VI.1 “checker” programı
- VII Teslim etme ve değerlendirme


# Bölüm I

# Foreword

#### • C

```
#include <stdio.h>
int main(void)
{
printf("hello, world\n");
return 0;
}
```
#### • ASM

```
cseg segment
assume cs:cseg, ds:cseg
org 100h
main proc
jmp debut
mess db'Hello world!$'
debut:
mov dx, offset mess
mov ah, 9
int 21h
ret
main endp
cseg ends
end main
```
#### • LOLCODE

```
HAI
CAN HAS STDIO?
VISIBLE "HELLO WORLD!"
KTHXBYE
```
#### • PHP

```
<?php
echo "Hello world!";
?>
```
- BrainFuck
    ++++++++++[>+++++++>++++++++++>+++>+<<<<-]
    >++.>+.+++++++..+++.>++.
    <<+++++++++++++++.>.+++.------.--------.>+.>.


Push_swap Çünkü Swap_push o kadar doğal değil

#### • C#

```
using System;
public class HelloWorld {
public static void Main () {
Console.WriteLine("Hello world!");
}
}
```
#### • HTML

```
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>Hello world !</title>
</head>
<body>
<p>Hello World !</p>
</body>
</html>
```
#### • YASL

```
"Hello world!"
print
```
- OCaml
    let main () =
       print_endline "Hello world !"
    let _ = main ()


# Bölüm II

# Giriş

Push_swapprojesi çok basit ve etkili bir algoritma projesidir: verileri sıralamak. Elinizde
bir dizi integer, 2 yığın ve bu yığınları manipüle etmek için bir talimat setiniz var.

Siz ne mi yapacaksınız? C dilinde argüman olarak alınan integerları sıralayanPush_swap
talimatlarını kullanarak en kısa programı hesaplayan ve bastıranpush_swapprogramını
yazacaksınız..

```
Kolay mı?
```
```
Bunu göreceğiz...
```

# Bölüm III

# Hedefler

Bir coder’ın hayatında sıralama algoritması yazmak her zaman çok önemli bir adımdır,
çünkü genellikle karmaşıklık kavramı ile ilk karşılaşılan yer burasıdır.

Sıralama algoritmaları ve karmaşıklıkları, iş görüşmeli sırasında sorulan klasik soru-
ların bir parçasıdır. Şu an bu kavramlara bakmak için iyi bir zaman çünkü bir noktada
onlarla yüzleşmeniz gerekecek.

Bu projenin öğrenme hedefleriCve temel algoritmaların titizlikle kullanılmasıdır. Bu
basit algoritmaların karmaşıklıklarını özellikle incelemeniz gerek.

Değerleri sıralamak kolaydır. Onları en hızlı şekilde sıralamak ise daha az kolaydır,
En verimli algoritma integer grubundan grubuna farklılık gösterebilir.


# Bölüm IV

# Genel Talimatlar

- Bu proje sadece insanlar tarafından kontrol edilecektir. Bu yüzden dosyalarınızı
    istediğiniz gibi isimlendirmekte özgürsünüz, yine de aşağıda dikkat etmeniz gereken
    bazı noktalardan bahsettik.
- Çalıştırılacak dosyapush_swapşeklinde isimlendirilmelidir.
- BirMakefilehazırlamalısınız. BuMakefile’ın projeyi derlemesi ve her zaman kul-
    lanılan kuralları içermesi gerekmektedir. Sadece gerekli olduğunda tekrar derleme
    yapmalıdır.
- Eğer zekiyseniz, projenizde kendi oluşturduğunuz kütüphaneyi kullanırsınız, ve aynı
    zamanda repository’nizin kök dizinindeki kendiMakefile ’ına sahip olan libft
    klasörünü de teslim edersiniz.Makefiledosyanız önce kütüphaneyi sonra da proj-
    enizi derleyecektir.
- Global değişken kullanımı yasaktır.
- ProjenizCdilinde Norm’a uygun olacak şekilde yazılmalıdır.
- Oluşabilecek hataları hassas bir şekilde ele almalısınız. Program beklenmedik bir
    hatayla kapanmamalıdır (Segmentation fault, bus error, double free, vb.).
- Program aynı zamandamemory leaks’e sahip olmamalıdır.
- Zorunlu kısımda aşağıdaki fonksiyonları kullanmanıza izin vardır:

```
◦ write
◦ read
◦ malloc
◦ free
◦ exit
```
- Sorularınızı forum & Slack üzerinden sorabilirsiniz...


# Bölüm V

# Zorunlu kısım

### V.1 Oyun kuralları

- Oyunavebisimli 2 yığın’dan oluşmaktadır.
- Başlangıç olarak:

```
◦ a yığını rastgele sayıda birbirinin kopyası olmayan negative ve/veya pozitif
sayıdan oluşmaktadır.
◦ byığını boştur.
```
- Amaç yığındaki sayıları artan şekildeayığınında sıralamaktır.
- Bunu yapmak için aşağıdaki işlemleri kullanabilirsiniz:

```
sa : swap a-İlk 2 elementiayığınının en üstüne çıkarır. Bir veya daha az eleman
varsa hiçbir şey yapmaz.
```
```
sb : swap b-İlk 2 elementibyığınının en üstüne çıkarır. Bir veya daha az eleman
varsa hiçbir şey yapmaz.
```
```
ss : savesbaynı anda kullanılır.
```
```
pa : push a-byığınının en üstteki ilk elemanınıayığının en üstüne yerleştirir.b
boşsa hiçbir şey yapmaz.
```
```
pb : push b-ayığınının en üstteki ilk elemanınıbyığının en üstüne yerleştirir.a
boşsa hiçbir şey yapmaz.
```
```
ra : rotate a-ayığınının tüm elemanlarını 1 üste taşır. İlk eleman son eleman
haline gelir.
```
```
rb : rotate b-byığınının tüm elemanlarını 1 üste taşır. İlk eleman son eleman
haline gelir.
```
```
rr : raverbaynı anda kullanılır.
```
```
rra : reverse rotate a-ayığınının tüm elemanlarını 1 alta taşır. Son eleman
ilk eleman haline gelir.
```

Push_swap Çünkü Swap_push o kadar doğal değil

```
rrb : reverse rotate b-byığınının tüm elemanlarını 1 alta taşır. Son eleman
ilk eleman haline gelir.
```
```
rrr : rraverrbaynı anda kullanılır.
```

Push_swap Çünkü Swap_push o kadar doğal değil

### V.2 Örnek

Bazı talimatların çalışmasını göstermek için rastgele bir integer listesini sıralayalım. Bu
örnekte iki yığının da sağ taraftan büyüdüğünü düşüneceğiz..

----------------------------------------------------------------------------------------------------------
Init a and b:
2 1 3 6 5 8

_ _
a b
----------------------------------------------------------------------------------------------------------
Exec sa:
1 2 3 6 5 8

_ _
a b
----------------------------------------------------------------------------------------------------------
Exec pb pb pb:
6 3
5 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec ra rb (equiv. to rr):
5 2
8 1
6 3
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec rra rrb (equiv. to rrr):
6 3
5 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec sa:
5 3
6 2
8 1
_ _
a b
----------------------------------------------------------------------------------------------------------
Exec pa pa pa:
1 2 3 5 6 8

_ _
a b
----------------------------------------------------------------------------------------------------------

Bu örnekteayığını 12 talimat kullanılarak sıralanmaktadır. Daha iyisini yapabilir
misin?


Push_swap Çünkü Swap_push o kadar doğal değil

### V.3 ‘push_swap” programı

- Integer listesi olarak biçimlendirilmiş bir yığını argüman olarak alacak birpush_swap
    programı yazmalısınız. İlk eleman yığının en üstünde olmalıdır. (sıralamaya dikkat
    edin).
- Programayığınını sıralayabilen en küçük talimat listesini en küçük sayı en üstte
    olacak şekilde bastırmalıdır.
- Talimatlar sadece ve sadece ’\n’ ile ayrılmalıdır.
- Amaç yığını mümkün olan en az sayıda hamleyle sıralamak. Değerlendirilme sırasında
    programınızın bulduğu talimat sayısıyla kabul edilen maksimum hamle sayısı karşılaştırıla-
    cak. Eğer programınız çok büyük bir liste veya doğru sıralanmamış bir liste basıy-
    orsa, puan alamazsınız.
- Eğer parametre belirlenmemişse program hiçbir şey bastırmamalı ve bitmelidir.
- Hata alma durumunda terminale ’\n’ ile takip edilen birErroryazısı bastırmalısınız.
    Bazı hatalar: tüm argümanlar integer değil, bazı argümanlar integerdan büyük,
    ve/veya bazı kopyalar mevcut.

$>./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
$>./push_swap 0 one 2 3
Error
$>

Değerlendirilme sırasında programınızı düzgünce test etmek için bir binary sağlaya-
cağız. Şu şekilde çalışacak:

$>ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
6
$>ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
OK
$>

checker_OS KObastırırsa,push_swapintegerları sıralamayan bir talimat seti kullan-
mıştır. checker_OSprogramı intranette proje sayfasında bulunabilir. Bonus kısımda
nasıl çalıştığı hakkında bir açıklama bulabilirsiniz.


# Bölüm VI

# Bonus kısım

Bonus kısım, yalnızca zorunlu kısım MÜKEMMEL ise değerlendirilecektir. Bu zorunlu
kısmın baştan sona tamamlanıp tüm kontrollerin kusursuzca yapılması anlamına gelir.
IEğer bu koşul sağlanmamışsa bonuslarınız değerlendirilmeye alınmayacaktır.

Push_swapbasitliğinden dolayı bir bonus kısmını hak ediyor gibi görünüyor. Kendi
checker programınızı yazmaya ne dersiniz?


Push_swap Çünkü Swap_push o kadar doğal değil

### VI.1 “checker” programı

- Integer listesi şeklinde ayarlanmışayığınını argüman olarak alan bircheckerpro-
    gramı yazın. İlk eleman yığının en üstünde olmalıdır. (sıralamaya dikkat edin).
    Eğer hiç argüman yoksacheckerdurmalı ve hiçbir şey bastırmamalıdır.
- checkerçıktıdaki ’\n’ le takip edilen talimatları okuyacak. Tüm talimatlar okun-
    duğunda,checkerargüman olarak alınan stack üzerinde işlemleri gerçekleştirecek.
- Talimatlar gerçekleştirildikten sonraayığını düzgünce sıralanmış vebyığını boşsa
    checker ’\n’ ile takip edilen"OK"yazısını çıktı olarak basmalıdır. Diğer tüm koşullarda
    checker ’\n’ ile takip edilen"OK"yazısını çıktı olarak basmalıdır..
- Hata alma durumunda terminale ’\n’ ile takip edilen birErroryazısı bastırmalısınız.
    Bazı hatalar: tüm argümanlar integer değil, bazı argümanlar integerdan büyük,
    ve/veya bazı kopyalar mevcut, talimat mevcut değil ya da yanlış şekilde yazılmış.

```
checker programı sayesinde programınızın sayıları doğru şekilde
sıralayıp sıralamadığını öğrenebileceksiniz.
```
$>./checker 3 2 1 0
rra
pb
sa
rra
pa
OK
$>./checker 3 2 1 0
sa
rra
pb
KO
$>./checker 3 2 one 0
Error
$>./checker "" 1
Error
$>

```
Oluşacak durumları bizim verdiğimiz binary ile birebir olacak şekilde
İNCELEMEYİN. Hataları halletmeniz zorunlu fakat argümanları ne
şekilde ayrıştıracağınıza siz karar vereceksiniz.
```

# Bölüm VII

# Teslim etme ve değerlendirme

Çalışmanızı her zaman olduğu gibiGiTss repository’nize yapın. Sadece repository’nizdeki
çalışma notlandırılacak.
Herkese bol şans!


