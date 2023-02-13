#include <iostream>

int main() {
    int firstMas[7]{1, 1, 1, 1, 1, 1, 1};
    for (int i = 0; i < 7; i++) {
        printf("%i\n", firstMas[i]);
    }
    printf("Введите числа: \n");
    int mas[7];
    for (int i = 0; i < 7; i++) {
        scanf("%i", &mas[i]);
    }
    for (int i = 0; i < 7; i++) {
        printf("%4i", mas[i]);
    }
    return 0;
}
