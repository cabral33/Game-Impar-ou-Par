#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

soma(int n1, int n2){
	return n1+n2;
}

linhas(){
int i;
	for(i=0; i<=21; i++)
		printf("--");
}

int main(){
setlocale(LC_ALL, "portuguese");

int n1=0, fim=0, re=0, decisao;
char escolha[10];

puts("\t\t---Jogo Par ou Ímpar---\n");

printf("Jogador: ");
scanf("%d", &n1);
printf("Impar ou Par: ");
scanf("%s", &escolha);

srand(time(NULL));

if(escolha[0] == 'p' || escolha[0] == 'P'){
	printf("\nMaquina: %d\n", re = rand() % 100);
	printf("Maquina é Impar\n");

fim = (n1+re)%2;

	switch(fim){
		case 1:
			printf("\nMaquina ganhou!!!\n");
			printf("O resultado foi %d\n\n", soma(n1, re));
			break;
		default:
			printf("\nJogador ganhou !!!\n");
			printf("O resultado foi %d\n\n", soma(n1, re));
			break;
		}

}else{
	printf("\nMaquina: %d\n", re = rand() % 100);
	printf("Maquina é par\n");

fim = (n1+re)%2;

	switch(fim){
		case 1:
			printf("\nJogador ganhou!!!\n");
			printf("O resultado foi %d\n\n", soma(n1, re));
			break;
		default:
			printf("\nMaquina ganhou !!!\n");
			printf("O resultado foi %d\n\n", soma(n1, re));
			break;
		}
	}

linhas();
puts("\nQuer continuar no jogo ? (Sim=1 Não=2)");
scanf("%d", &decisao);

	switch (decisao){
		case 1:
			linhas();
			puts("\n");
			return main();
			break;

		case 2:
			break;

		default:
			puts("Não zoe a parada.");
			linhas();
			puts("\n");
			return main();
			break;
	}

}
