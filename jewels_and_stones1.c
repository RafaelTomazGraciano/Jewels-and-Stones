#include <stdio.h>
#include <string.h>

int numJewelsInStones(char* jewels, char* stones);

int main() {
    char jewels[] = "abc";
    char stones[] = "aabcccAABCC";

    int resultado = numJewelsInStones(jewels, stones);
    printf("Numero de pedras que sao joias: %d\n", resultado);

    return 0;
}

int numJewelsInStones(char* jewels, char* stones) {
    int count = 0;

    for (int i = 0; stones[i] != '\0'; i++) {
        for (int j = 0; jewels[j] != '\0'; j++) {
            if (stones[i] == jewels[j]) {
                count++;  
                break;    
            }
        }
    }
    return count;
}