/*
2. Criar um programa que dados 3 números inteiros, utilize uma função do tipo void que imprima o maior desses números.
*/
#include <stdio.h>

void maior(int, int, int);
int main(){
    int n1, n2, n3;
    scanf(" %d %d %d", &n1, &n2, &n3);
    maior(n1, n2, n3);
    return 0;
}
void maior(int n1, int n2, int n3){
    int m = n1;
    if(n2 > m)
        m = n2;
    if(n3 > m)
        m = n3;
    printf("%d é o maior \n", m);
}
