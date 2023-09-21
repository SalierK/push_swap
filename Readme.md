


#include <stdio.h>

// Bir diziyi radix sıralama algoritmasıyla sıralayan yardımcı bir fonksiyon

void radixSort(int arr[], int n) {
    // Dizideki en büyük sayıyı bulma
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // En büyük sayının basamak sayısını bulma
    int exp = 1;
    while (max / exp > 0) {
        // Her bir basamağına göre sıralama işlemi
        int output[n];
        int count[10] = {0};

        // Her bir basamağı say ve count dizisine kaydet
        for (int i = 0; i < n; i++) {
            count[(arr[i] / exp) % 10]++;
        }

        // count dizisini güncelleme
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        // output dizisine sıralama işlemi
        for (int i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        // output dizisini arr dizisine kopyalama
        for (int i = 0; i < n; i++) {
            arr[i] = output[i];
        }

        // Bir sonraki basamağa geçme
        exp *= 10;
    }
}

int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Sıralanmamış dizi:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    radixSort(arr, n);

    printf("\nSıralanmış dizi:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
 A      B       
100     001     
011     011
001
010

 A      B       
100     001          
010     011