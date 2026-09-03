#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char* empty = (char*)malloc(1);
        empty[0] = '\0';
        return empty;
    }

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char char_atual = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != char_atual || strs[j][i] == '\0') {
                char* resposta = (char*)malloc((i + 1) * sizeof(char));
                strncpy(resposta, strs[0], i);
                resposta[i] = '\0';
                return resposta;
            }
        }
    }

    int tamanho = strlen(strs[0]);
    char* resposta = (char*)malloc((tamanho + 1) * sizeof(char));
    strcpy(resposta, strs[0]);
    
    return resposta;
}
