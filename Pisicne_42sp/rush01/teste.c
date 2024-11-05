#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

void printMatrix(char matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}

void shuffleArray(int *array, int size) {
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int isValidPosition(int row, int col) {
    // Verifica se a posição (row, col) é uma das permitidas
    if ((row == 2 && col == 2) ||
        (row == 2 && col == 3) ||
        (row == 1 && col == 4) ||
        (row == 1 && col == 2) ||
        (row == 1 && col == 3)) {
        return 1; // Posição permitida
    }
    return 0; // Posição não permitida
}

int canPlaceNumber(int number, int row, int col, char matrix[SIZE][SIZE]) {
    // Verifica se o número `number` pode ser colocado na linha `row` e coluna `col`
    if (matrix[row][col] != '0') {
        return 0; // Não pode colocar o número se a posição já está preenchida
    }

    // Verifica se a posição é válida conforme as regras fornecidas
    if (!isValidPosition(row, col)) {
        return 0; // Posição não permitida
    }
    
    return 1; // Pode colocar o número
}

int main() {
    char matrix[SIZE][SIZE];
    int numbers[4] = {1, 2, 3, 4}; // Array de números para bordas

    srand(time(NULL)); // Inicializa a semente para números aleatórios

    // Inicializa a matriz
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if ((i == 0 && (j == 0 || j == SIZE-1)) || (i == SIZE-1 && (j == 0 || j == SIZE-1)) ||
                (j == 0 && (i == 0 || i == SIZE-1)) || (j == SIZE-1 && (i == 0 || i == SIZE-1))) {
                matrix[i][j] = 'X';  // Cantos
            } else if (i == 0 || i == SIZE-1 || j == 0 || j == SIZE-1) {
                matrix[i][j] = '0';  // Inicialmente definir bordas como '0'
            } else {
                matrix[i][j] = '0';  // Interior da matriz
            }
        }
    }

    // Randomiza a ordem dos números para as bordas
    shuffleArray(numbers, 4);

    // Preenche as bordas com os números randomizados
    for (int k = 0; k < 4; k++) {
        int number = numbers[k] + '0'; // Converte número para caractere
        int placed = 0; // Flag para verificar se o número foi colocado

        // Tenta colocar o número na borda sem violar as regras
        for (int i = 0; i < SIZE && !placed; i++) {
            for (int j = 0; j < SIZE && !placed; j++) {
                if ((i == 0 || i == SIZE-1 || j == 0 || j == SIZE-1) && matrix[i][j] == '0') {
                    // Verifica se o número pode ser colocado
                    if (canPlaceNumber(numbers[k], i, j, matrix)) {
                        matrix[i][j] = number;
                        placed = 1; // Marca que o número foi colocado
                    }
                }
            }
        }

        // Caso o número não tenha sido colocado devido às restrições, você pode optar por tratá-lo ou ignorá-lo
        if (!placed) {
            printf("Não foi possível colocar o número %d\n", numbers[k]);
        }
    }

    // Imprime a matriz final
    printMatrix(matrix);

    return 0;
}
