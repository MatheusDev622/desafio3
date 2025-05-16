#include <stdio.h>
#define TAM 100

void ceb(char str[TAM]){
    for(int i = 0;str[i] != '\0';i++){
        if(str[i] == 'r'){
            str[i] = 'l';
            if(str[i+1] == 'r'){
                for (int j = i + 1; str[j] != '\0'; j++){
                    str[j] = str[j + 1]; 
                }
            }
        }else if(str[i] == 'R'){
            str[i] = 'L';
        }
    }
    printf("Nova string: %s",str);
}

int main(){
    char str[TAM];
    puts("Digite uma palavra para ter o efeito 'cebolinha': ");
    fgets(str,sizeof(str),stdin);
    ceb(str);
}