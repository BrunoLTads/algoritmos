#include <stdio.h>

int main() {
	int campo_revelado[5][5] = {
		{0, -1, -1, 0, 0},
		{-1, -1, 0, -1, -1},
		{-1, 0, 0, -1, 0},
		{0, 0, -1, 0, 0},
		{-1, 0, -1, -1, 0}
	};

	int campo[5][5] = {
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0}
	};


	int linha, coluna;
	int vidas = 1;

	while (vidas >= 1) {
		printf("Escolha uma linha e coluna.\n");
		scanf("%d%d", &linha, &coluna);


		if (linha >= 0 && linha < 5 && coluna >= 0 && coluna < 5) {
			campo[linha][coluna] = campo_revelado[linha][coluna];
			if (campo_revelado[linha][coluna] == 0){
				int bombas_redor = 0;

				// aqui é pra percorrer as posições num alcance de 3x3 tomando a posição que o usuário botou sendo o centro ( 0 em i e j ) 
				for (int i = -1; i <= 1; i++) {
					for (int j = -1; j <= 1; j++) {

						if (i == 0 && j == 0) continue;

						int linha_adj = linha + i;
						int coluna_adj = coluna + j;

						// Aqui conta bomba
						if (linha_adj >= 0 && linha_adj < 5 && coluna_adj >= 0 && coluna_adj < 5) {
							if (campo_revelado[linha_adj][coluna_adj] == -1) {
								bombas_redor++;
							}
						}
					}
				}
				
				// Nova matriz sendo que substituindo a posição escolhida pelo número de bombas adjascentes que detectou
				campo[linha][coluna] = bombas_redor;
			}
			else {if (campo_revelado[linha][coluna] == -1) {
				campo[linha][coluna] = campo_revelado[linha][coluna];
				vidas = -1;
				printf("   ____   ____   ____  __  __ _ \n  |  _ \\ / __ \\ / __ \\|  \\/  | | \n  | |_) | |  | | |  | | \\  / | | \n  |  _ <| |  | | |  | | |\\/| | | \n  | |_) | |__| | |__| | |  | |_| \n  |____/ \\____/ \\____/|_|  |_(_) \n ");

				printf("Deseja jogar novamente? \n");
				
			}
			
			};
			// Mostrando o campo atualizado (número de bombas e bomba se foi selecionada)
				for (int i = 0; i < 5; i++) {
					for (int j = 0; j < 5; j++) {
						printf("%d ", campo[i][j]);
					}
					printf("\n");
				}
			
		}
		else {
			printf("Digite uma posição no alcance. \n");
		};
	};

	return 0;
}
