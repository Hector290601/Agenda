#include <stdio.h>
#include <stdlib.h>

void menu();

int main(void){
	menu();
	return 0;
}

void menu(){
	int sel;
	do{
		printf("%c[1;%dmSelecciona una de las siguientes:\n", 27, 34);
		printf("\t 1) AGREGAR CONTACTO \n");
		printf("\t 2) MODIFICAR CONTACTO \n");
		printf("\t 3) BORRAR CONTACTO \n");
		printf("\t 4) MOSTRAR DATOS DEL CONTACTO \n");
		printf("\t 5) ENLISTAR TODOS LOS CONTACTOS\n");
		printf("\t 6) AYUDA \n");
		printf("\t 7) SALIR \n");
		if (scanf("%i", &sel) != 1) {
			printf("Error! No es un numero!\n");
			while (getchar() != '\n');
		}else{
			switch (sel){
				case 1:
			//		AGREGAR
				break;
				case 2:
				//	MODIFICAR
				break;
				case 3:
			//		BORRAR
				break;
				case 4:
				//	MOSTRAR
				break;
				case 5:
				//	ENLISTAR
				break;
				case 6:
			//			AYUDA
				break;
				case 7:
					//SALIR
				break;
				default:
					printf("Esta no es una opción, selecciona otra \n");
					menu();
				break;
			}
		}
		menu();
	}while(sel >= 1 && sel <= 7);
}
