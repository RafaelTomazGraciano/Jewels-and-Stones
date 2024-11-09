#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 256  // Para suportar caracteres ASCII

int numJewelsInStones(unsigned char* jewels, unsigned char* stones);

int main() {
    unsigned char jewels[] = "abc";
    unsigned char stones[] = "aabcccAABCC";

    int result = numJewelsInStones(jewels, stones);
    printf("Numero de pedras que sao joias: %d\n", result);

    return 0;
} 

int numJewelsInStones(unsigned char* jewels, unsigned char* stones) {
    unsigned int tabela_jewels[ALPHABET_SIZE] = {0};
    int count = 0;

    for (int i = 0; jewels[i] != '\0'; i++) {
        tabela_jewels[jewels[i]]++;  //Preenche a tabela na posição correta da tabela ASCII
    }

    for (int i = 0; stones[i] != '\0'; i++) {
        if (tabela_jewels[stones[i]] != 0) {
            count++; 
        }
    }

    return count;
}