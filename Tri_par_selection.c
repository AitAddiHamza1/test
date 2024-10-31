#include <stdio.h>

void tri_selection(int *T, int tab); 

int main() {
    int tab, T[100];  

    printf("Enter the size of the array: ");
    scanf("%d", &tab);

    for (int i = 0; i < tab; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &T[i]);
    }

    tri_selection(T, tab);

    printf("Sorted array:\n");
    for (int i = 0; i < tab; i++) {
        printf("%d ", T[i]);
    }
    return 0;
}

void tri_selection(int *T, int tab) {
    int i, j, temp, index;

    for (i = 0; i < tab - 1; i++) {
        index = i;
        for (j = i + 1; j < tab; j++) {
            if (T[index] > T[j]) {
                index = j;
            }
        }
        if (index != i) {
         
            temp = T[i];
            T[i] = T[index];
            T[index] = temp;
        }
    }
}
