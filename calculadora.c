#include <stdio.h>
#include <stdlib.h>
#include <string.h>

        

int main(int argc, char *argv[]){
        int a,b,soma,multiplicacao,divisao,subtracao;
        
        if(strcmp(argv[1],"-h")==0) {
                printf("Utilização:\n");
                printf("%s \t <numero1> <operação> <numero2>\n", argv[0]);
                printf("lista de operações disponíveis:\n");
                printf("Operações básicas: +, -, x, /\n");
                return -1;
        } else if(argc!=4) {
                printf("Por favor, utilize 3 argumentos\n");
                printf("utilize %s -h para ajuda\n",argv[0]);
                return -1;

        }
        a = atoi(argv[1]);
        b = atoi(argv[3]);
        soma = a+b;
        multiplicacao = a*b;
        divisao = a/b;
        subtracao = a-b;
        if (strcmp(argv[2],"+")==0) {
                printf("%d %s %d = %d\n",a,argv[2],b,soma);
        } else if (strcmp(argv[2],"x")==0) {
                printf("%d %s %d = %d\n",a,argv[2],b,multiplicacao);
        } else if (strcmp(argv[2],"/")==0) {
                printf("%d %s %d = %d\n",a,argv[2],b,divisao);
        } else if (strcmp(argv[2],"-")==0) {
                printf("%d %s %d = %d\n",a,argv[2],b,subtracao);
        } else {
                printf("Operação \"%s\" não reconhecida. Utilize \"%s -h\" para ajuda \n",argv[2],argv[0]);
                return -1;
        }
        
        
return 0;
}
