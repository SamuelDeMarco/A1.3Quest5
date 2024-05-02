#include <stdio.h>
#include <stdio_ext.h>

int qtdprod, qtdprodtot, qtdnotas;
char verifica;
float valprod, valtotal, valmedio;

int main(void) {
  do 
  {
    qtdprodtot = 0;
    printf("Informe a quantidade de um produto: ");
      scanf("%d", &qtdprod);
      while (qtdprod > 0)
      {
        printf("Informe o valor unitario do produto: ");
        scanf("%f", &valprod);
        valtotal = valtotal + (qtdprod * valprod);
        qtdprodtot = qtdprodtot + qtdprod;
        valmedio = valtotal / qtdprodtot;
        printf("\nInforme a quantidade de um produto: ");
        scanf("%d", &qtdprod);
      }

      printf("VALOR TOTAL DA COMPRA: R$ %.2f\n", valtotal);
      printf("VALOR MEDIO DA COMPRA: R$ %.2f\n", valmedio);
      printf("\nO valor total da compra eh %d reais e %.2f centavos\n", (int)valtotal, (valtotal - (int)valtotal));

      printf("\n%d reais equivale a:\n",(int)valtotal);

      while(valtotal >= 100)
      {
        qtdnotas = (int)valtotal/100;
        valtotal = (int)valtotal - (qtdnotas * 100);
        printf("\n%d nota(s) de 100", qtdnotas);
      }
     while(valtotal > 50)
     {
       qtdnotas = (int)valtotal/50;
       valtotal = (int)valtotal - (qtdnotas * 50);
       printf("\n%d nota(s) de 50", qtdnotas);
     }
      while(valtotal > 20)
      {
        qtdnotas = (int)valtotal/20;
        valtotal = (int)valtotal - (qtdnotas * 20);
        printf("\n%d nota(s) de 20", qtdnotas);
      }
      while(valtotal > 10)
      {
        qtdnotas = (int)valtotal/10;
        valtotal = (int)valtotal - (qtdnotas * 10);
        printf("\n%d nota(s) de 10", qtdnotas);
      }
      while(valtotal > 5)
      {
        qtdnotas = (int)valtotal/5;
        valtotal = (int)valtotal - (qtdnotas * 5);
        printf("\n%d nota(s) de 5", qtdnotas);
      }
      while(valtotal > 2)
      {
        qtdnotas = (int)valtotal/2;
        valtotal = (int)valtotal - (qtdnotas * 2);
        printf("\n%d nota(s) de 2", qtdnotas);
      }
      while(valtotal >= 1)
      {
        qtdnotas = (int)valtotal/1;
        valtotal = (int)valtotal - (qtdnotas * 1);
        printf("\n%d moeda(s) de 1", qtdnotas);
      }
    __fpurge(stdin);
    printf("\n\nDeseja repetir o programa (S ou N)? ");
    scanf("%c", &verifica);
    printf("\n");
    
  }while(verifica == 'S' || verifica == 's');
  
  return 0;
}