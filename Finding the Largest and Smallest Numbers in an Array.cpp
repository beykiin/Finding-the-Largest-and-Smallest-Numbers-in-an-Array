// Finding the Largest and Smallest Numbers in an Array.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

void findMinMax(const int* arr, int size, int& min, int& max) {

    min = arr[0];
    max = arr[0];

    for (int i = 1; i < size; i++) {

        if (arr[i] < min)

        min = arr[i];

        if (arr[i] > max)

        max = arr[i];

    }

}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++) {

        cout << "element " << i + 1 << " :";
        cin >> arr[i];

    }

    int min, max;
    findMinMax(arr, size, min, max);
    cout << "The smallest element of the array: " << min << endl;
    cout << "The biggest element of the array: " << max << endl;
    delete[] arr;
    return 0;


}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
