#include <stdlib.h>
#include <stdio.h>

void convertUniTempo (int selecTemp, float numAtualTemp) {

    float secPmin, secPhor;
    float minPsec, minPhor;
    float horPsec, horPmin;
    
    secPmin = numAtualTemp/60;
    secPhor = numAtualTemp/3600;
    minPsec = numAtualTemp*60;
    minPhor = numAtualTemp/60;
    horPsec = numAtualTemp*3600;
    horPmin = numAtualTemp*60;

   switch (selecTemp) {
    case 1:
        printf("%.2f segundo(s) equivale a %.2f minuto(s)\n", numAtualTemp, secPmin);
        break;
    case 2:
        printf("%.2f segundo(s) equivale a %.2f hora(s)\n", numAtualTemp, secPhor);
        break;
    case 3:
        printf("%.2f minuto(s) equivale a %.2f segundo(s)\n", numAtualTemp, minPsec);
        break;
    case 4:
        printf("%.2f minuto(s) equivale a %.2f hora(s)\n", numAtualTemp, minPhor);
        break;
    case 5:
        printf("%.2f hora(s) equivale a %.2f segundo(s)\n", numAtualTemp, horPsec);
        break;
    case 6:
        printf("%.2f hora(s) equivale a %.2f minuto(s)\n", numAtualTemp, horPmin);
        break;            
    default: printf("Opcao invalida\n");
    }
    system("PAUSE");
}

void converterTempo() {
    float numAtualTemp;
    int selecTemp;

    printf("Informe o valor a ser convertido\n");
    scanf("%f", &numAtualTemp);
    printf("Informe a conversão que deseja\n");
    printf("Digite:\n");
    printf("(1) - segundo(s) para minuto(s)\n");
    printf("(2) - segundo(s) para hora(s)\n");
    printf("(3) - minuto(s) para segundo(s)\n");
    printf("(4) - minuto(s) para hora(s)\n");
    printf("(5) - hora(s) para segundo(s)\n");
    printf("(6) - hora(s) para minuto(s)\n");
    scanf("%d", &selecTemp);

    convertUniTempo(selecTemp, numAtualTemp);
}