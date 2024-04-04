#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dinheiro = 0, duzentos = 0, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;
    scanf("%d", &dinheiro);

    while(dinheiro >= 200){
        duzentos++;
        dinheiro -= 200;
    }

    while (dinheiro >= 100){
        cem++;
        dinheiro -= 100;
    }

    while (dinheiro >= 50){
        cinquenta++;
        dinheiro -= 50;
    }

    while (dinheiro >= 20){
        vinte++;
        dinheiro -= 20;
    }

    while (dinheiro >= 10){
        dez++;
        dinheiro -= 10;
    }

    while (dinheiro >= 5){
        cinco++;
        dinheiro -= 5;
    }

    while (dinheiro >= 2){
        dois++;
        dinheiro -= 2;
    }

    while (dinheiro >= 1){
        um++;
        dinheiro -= 1;
    }

    printf("%d nota(s) de R$ 200\n", duzentos);
    printf("%d nota(s) de R$ 100\n", cem);
    printf("%d nota(s) de R$ 50\n", cinquenta);
    printf("%d nota(s) de R$ 20\n", vinte);
    printf("%d nota(s) de R$ 10\n", dez);
    printf("%d nota(s) de R$ 5\n", cinco);
    printf("%d nota(s) de R$ 2\n", dois);
    printf("%d moeda(s) de R$ 1\n", um);


    return 0;
}
