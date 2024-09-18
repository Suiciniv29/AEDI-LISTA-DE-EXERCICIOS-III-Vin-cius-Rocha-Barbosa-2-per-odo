#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
    int num[] = {5, 1, 4, 8, 3, 7};
    int tam = 6; 
    int i, j, temp;
    int troca;

    for (i = 0; i < tam - 1; i++) {
        troca = 0;  
        for (j = 0; j < tam - i - 1; j++) {
            if (num[j] < num[j + 1]) {  
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
                troca++;
            }
        }
        if (troca == 0) {
            break;  
    }

    printf("Aqui está o seu array em ordem decrescente: ");
    for (i = 0; i < tam; i++) {
        printf("%d ", num[i]);  
    }
    printf("\n");

    return 0;
}
	}

