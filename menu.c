#ifdef __linux__
#define LIMPIAR "clear"
#endif
#ifdef __MINGW32__
#define LIMPIAR "cls"
#endif
#include <stdio.h>
#include <stdlib.h>

void Transpuesta();
void mulriEscalar();
void multiMat();
void determinante();
int main(){
	system(LIMPIAR);
	int opc = 0;
	do{
		printf("Seleccione una opcion\n");
		printf("\t1)Transpuesta\n");
		printf("\t2)Multiplicacion por escalar\n");
		printf("\t3)multiplicar dos matrices\n");
		printf("\t4)determinante\n");
		printf("\t5)salir\n");
		scanf("%d", &opc);
		switch(opc){
			case 1:
				system(LIMPIAR);
				Transpuesta();
			break;
			case 2:
				system(LIMPIAR);
				mulriEscalar();
			break;
			case 3:
				system(LIMPIAR);
				multiMat();
			break;
			case 4:
				system(LIMPIAR);
				determinante();
			break;
			case 5:
				system(LIMPIAR);
				printf("Adios\n");
			break;
		}
	}while(opc != 5);
	return 0;
}

void Transpuesta(){
	int m1[3][3], m2[3][3], pos = 0;
	printf("Vamos a llenar la primer matriz de 3 x 3\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Espacio %d, %d\n", i, j);
			scanf("%d", &pos);
			m1[i][j] = pos;
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			m2[i][j]= m1[j][i];
		}
	}
	system(LIMPIAR);
	printf("Matriz original:\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("| %d |", m1[i][j]);
		}
		printf("\n");
	}
	printf("Matriz transpuesta:\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("| %d |", m2[i][j]);
		}
		printf("\n");
	}
}

void mulriEscalar(){
	int m1[3][3], m2[3][3], pos = 0, esc = 0;
	printf("Vamos a llenar la primer matriz de 3 x 3\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Espacio %d, %d\n", i, j);
			scanf("%d", &pos);
			m1[i][j] = pos;
		}
	}
	printf("Dame un escalar para multiplicarla: \n");
	scanf("%d", &esc);
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			m2[i][j]= esc * m1[i][j];
		}
	}
	system(LIMPIAR);
	printf("Matriz original:\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("| %d |", m1[i][j]);
		}
		printf("\n");
	}
	printf("Matriz multiplicada:\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("| %d |", m2[i][j]);
		}
		printf("\n");
	}
}

void multiMat(){
	int m1[2][2], m2[2][2], m3[2][2], pos = 0;
	printf("Vamos a llenar la primer matriz de 2 x 2\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Espacio %d, %d\n", i, j);
			scanf("%d", &pos);
			m1[i][j] = pos;
		}
	}
	printf("Vamos a llenar la segunda matriz de 2 x 2\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("Espacio %d, %d\n", i, j);
			scanf("%d", &pos);
			m2[i][j] = pos;
		}
	}
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			m3[i][j] = m1[i][j] * m2[j][i];
		}
	}

	printf("Matriz uno:\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("| %d |", m1[i][j]);
		}
		printf("\n");
	}
	printf("Matriz dos:\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("| %d |", m2[i][j]);
		}
		printf("\n");
	}

	printf("Matriz tres(multiplicacion):\n");
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("| %d |", m3[i][j]);
		}
		printf("\n");
	}
}

void determinante(){
	int m1[3][3], pos = 0, det = 0, aei = 0, dhc = 0, gbf = 0, bdi = 0, ahf = 0, gec = 0, suben = 0, bajan = 0;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Llenando matriz posicion %d, %d\n", i, j);
			scanf("%d", &pos);
		}
	}
	aei = m1[0][0] * m1[1][1] * m1[2][2];
	dhc = m1[0][1] * m1[1][2] * m1[2][0];
	gbf = m1[0][2] * m1[1][0] * m1[2][1];
	bdi = m1[1][0] * m1[0][1] * m1[2][2];
	ahf = m1[0][0] * m1[1][2] * m1[2][1];
	gec = m1[0][2] * m1[1][1] * m1[2][0];
	suben = aei * dhc * gbf;
	bajan = bdi * ahf * gec;
	det = suben - bajan;
	printf("El determinante de la matriz: %d\n", det);
}
