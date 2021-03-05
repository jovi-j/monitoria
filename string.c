#include <stdio.h>
#include <string.h>
void busca(char * busca, char * string){
    char * pch;
    pch = strstr(string,busca);
    if(pch != NULL){
        int pos = string - pch;
        pos = pos * -1;
        printf("Encontrado \"%s\" na posição %d.\n", busca, pos);
    }else{
        printf("Não encontrado.\n");
    }
}

int main(int argc, char *argv[])
{
	char frase[] = "Hello world!";
	busca("ld",frase);
	return 0;
}
