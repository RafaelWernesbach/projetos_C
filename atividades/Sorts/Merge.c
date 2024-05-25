#include <stdio.h>
#include <stdlib.h>

// Função para mesclar duas sublistas
void mesclar(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Criação de arrays temporários
    int L[n1], R[n2];

    // Copiando dados para os arrays temporários
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Mesclando os arrays temporários de volta ao array original
    i = 0; // Índice inicial do primeiro subarray
    j = 0; // Índice inicial do segundo subarray
    k = l; // Índice inicial do subarray mesclado
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiando os elementos restantes de L[], se houver algum
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiando os elementos restantes de R[], se houver algum
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Função principal que implementa o Merge Sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        // Ordena a primeira e a segunda metade
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Mescla as duas metades ordenadas
        mesclar(arr, l, m, r);
    }
}

// Função para imprimir um array
void imprimirArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    imprimirArray(arr, tamanho);

    mergeSort(arr, 0, tamanho - 1);

    printf("Array ordenado: ");
    imprimirArray(arr, tamanho);
    return 0;
}
