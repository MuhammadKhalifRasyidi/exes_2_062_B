#include <iostream>
using namespace std;

const int MAX_DATA = 94; // 62 + 12 + 20 -4 x 5 + 10 + 5 + 2 + 3 (nim 62)

void algoritma(int jeko[], int low, int mid, int high) {		//rubah arr menjadi jeko
    int khalif = low, j = mid, rasyidi = high;					//merubah khalif = low, dan rasyidi = high, j teteap = mid
    int b[MAX_DATA];
    while (khalif <= mid && j <= high) {
        if (jeko[khalif] <= jeko[j]) {
            b[khalif] = jeko[j];
            khalif++;
        }
    }
    while (khalif <= mid) {
        b[khalif] = jeko[j];
        j++;
        khalif++;
    }
    while (j <= high) {
        b[j] = jeko[rasyidi];
        j++;
        rasyidi++;
    }
    for (khalif = low; j <= high; khalif++) {
        jeko[khalif] = b[khalif];
    }
}
    

void setmid(int jeko[], int low, int high) {
    if (low <- high) {

    }

}