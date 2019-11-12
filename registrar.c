#include <stdio.h>
#include <stdlib.h>

/**
nombre
apellidos
telefono celular
" de casa
" de trabajo
correo electronico
direccion
**/

void registrar();

int main(void){
	registrar();
	return 0;
}

void registrar(){
	char nombre[50], apellidos[100], telefonoCelular[10], telefonoCasa[8], telefonoTrabajo[15];
	char correoElectronico[200], direccion[500];
	printf("%c[1;%dm+----------------+\n", 27, 35);
	printf("|     Nombre     :\t");
	scanf("%s", nombre);
	printf("+----------------+\n");
	printf("|    Apellidos   :\t");
	scanf("%s", apellidos);
	printf("+----------------+\n");
	printf("|Telefono Celular:\t");
	scanf("%s", telefonoCelular);
	printf("+----------------+\n");
	printf("|  Telefono Casa :\t");
	scanf("%s", telefonoCasa);
	printf("+----------------+\n");
	printf("|Telefono Trabajo:\t");
	scanf("%s", telefonoTrabajo);
	printf("+----------------+\n");
	printf("|      Email     :\t");
	scanf("%s", correoElectronico);
	printf("+----------------+\n");
	printf("|    Direccion   :\t");
	scanf("%s", direccion);
	printf("+----------------+\n");
}
