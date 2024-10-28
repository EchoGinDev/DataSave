#include <stdio.h>


char operator;
float hasil;
float penjumlahan(float a, float b);
float pengurangan(float a, float b);
float perkalian(float a, float b);
float pembagian(float a, float b);
int main(){
    float bil1, bil2, hasil1 , hasil2 ,hasil3,hasil4;







    printf("================================");
    printf("      KALKULATOR SEDERHANA      ");
    printf("================================");

    printf("\npilih operator + - * / : ");
    scanf("%c",& operator);

    switch (operator)
    {
    case'+':
        printf("\nmasukkan angka pertama: ");
        scanf("%f",& bil1);
        printf("\nmasukkan angka pertama: ");
        scanf("%f",&  bil2);
        hasil1 = penjumlahan (bil1,bil2);
        printf("hasil: %.2f", hasil1);
        break;
    case'-':
        printf("\nmasukkan angka pertama: ");
        scanf("%f",& bil1);
        printf("\nmasukkan angka pertama: ");
        scanf("%f",&  bil2);
        hasil2 = pengurangan (bil1,bil2);
        printf("hasil: %.2f", hasil2);
        break;
    case'*':
        printf("\nmasukkan angka pertama: ");
        scanf("%f",& bil1);
        printf("\nmasukkan angka pertama: ");
        scanf("%f",&  bil2);
        hasil3 = perkalian (bil1,bil2);
        printf("hasil: %.2f", hasil3);
        break;
    case'/':
        printf("\nmasukkan angka pertama: ");
        scanf("%f",& bil1);
        printf("\nmasukkan angka pertama: ");
        scanf("%f",&  bil2);
        hasil4 = pembagian (bil1,bil2);
        printf("hasil: %.2f", hasil4);
        break;
    
    default:printf("operator tidak valid!");
        break;
    }
}
float penjumlahan (float a, float b){
    return a + b;
}
float pengurangan (float a, float b){
    return a - b;
}
float perkalian (float a, float b){
    return a * b;
}
float pembagian (float a, float b){
    return a / b;
}
