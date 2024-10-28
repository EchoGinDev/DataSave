#include <stdio.h>

int main() {
    int arr[] = {12, 45, 67, 89, 34, 67, 12, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = 0;
    for (int i = 1; i < size; i++)
    {
        if(arr [i]>max){
            max = arr[i];
        }
    }
     

    printf("Nilai terbesar dari array adalah : %d\n", max);

    return 0;
}
