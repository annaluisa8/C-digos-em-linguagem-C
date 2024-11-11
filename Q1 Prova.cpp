#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
int matriz[10][2], id, quantidade, opcao;
float vetor[10], venda;

	setlocale (LC_ALL, "portuguese");
	for(int i=0; i<10; i++)
	{
		printf("Produto %d\n", i+1);
		printf("Insira o ID do produto: ");
		scanf("%d", &matriz[i][0]);
		printf("Insira a quantidade do produto no estoque: ");
		scanf("%d", &matriz[i][1]);
		printf("Insira o preço do produto: ");
		scanf("%f", &vetor[i]);
	}
	
	do{
		printf("\nMenu:\n");
		printf("[1] Exibir Produtos\n[2] Vender Produto\n[0] Sair\n");
		scanf("%d", &opcao);
		switch(opcao)
		{
			case 1: 
			printf("ID; Quantidade; Preço\n");
			for(int i=0; i<10; i++)
			{
				printf("\nID: %d | Quantidade: %d | Preço: %.2f\n", matriz[i][0], matriz[i][1], vetor[i]);
			
			if(matriz[i][1]<3){
				printf("->Estoque baixo\n");}
			}
			break;
			
			case 2: 
			printf("Insira o ID do produto: ");
			scanf("%d", &id);
			printf("Insira a quantidade de produto que deseja: ");
			scanf("%d", &quantidade);
			for(int i=0; i<10; i++)
			{
				if(id==matriz[i][0]){
					if(matriz[i][1]==0){
						printf("Estoque esgotado.");
					}else if(quantidade<=matriz[i][1]){
						matriz[i][1] = matriz[i][1]-quantidade; 
						venda = quantidade*vetor[i];
						printf("Compra realizada!\nTotal: %.2f\nQuantidade restante do produto %d: %d\n", venda, matriz[i][0], matriz[i][1]);}
					else{
					printf("Estoque insuficiente!");}
	}
}
break;
			
		}
	}while(opcao!=0);
}

