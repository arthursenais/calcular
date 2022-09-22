#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
        

int main(int argc, char *argv[]){
        float a,b,raiz,soma,multiplicacao,divisao,subtracao,potencia;
        
        if(strcmp(argv[1],"-h")==0) {
                printf("Utilização:\n");
                printf("%s \t <numero1> <operação> <numero2>\n", argv[0]);
                printf("\nlista de operações disponíveis:\n");
                printf("+, -, *, /, ^,r\nobs: caso alguma não funcione, utilize-a entre aspas\n");
                return -1;
        } else if(argc!=4) {
                printf("Por favor, utilize 3 argumentos\n");
                printf("utilize %s -h para ajuda\n",argv[0]);
                return -1;

        }
        a = atof(argv[1]);
        b = atof(argv[3]);
        soma = a+b;
        multiplicacao = a*b;
        divisao = a/b;
        subtracao = a-b;
        potencia = pow(a,b);
        raiz = pow(a,1/b);
        switch (*argv[2]) {
                case '+': printf("%g %s %g = %g\n",a,argv[2],b,soma);
                        break;
                case '-': printf("%g %s %g = %g\n",a,argv[2],b,subtracao);
                        break;
                case '*': printf("%g %s %g = %g\n",a,argv[2],b,multiplicacao);
                        break;
                case '/': printf("%g %s %g = %g\n",a,argv[2],b,divisao);
                        break;
                case '^': printf("%g %s %g = %g\n",a,argv[2],b,potencia);
                        break;
                case 'r': printf("%g índice %g = %g\n",a,argv[2],b,raiz);
                break;
        default:
                printf("Operação \"%s\" não reconhecida. Utilize \"%s -h\" para ajuda \n",argv[2],argv[0]);
                return -1;
        }
        
        
return 0;
}
