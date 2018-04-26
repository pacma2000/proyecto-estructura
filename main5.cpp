#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

bool validacion=false;

FILE *archivo;
void insertar(Nodo *&,Nodo *&,int, int);
void mostrarElementos(Nodo *&,Nodo *&);
void Cargar(Nodo *&,Nodo *&);
void editarelementos(Nodo *&, Nodo *&);
void insertartxt(Nodo *&, Nodo *&);
void vaciarcola(Nodo *&,Nodo *&);
void estadocola(Nodo *&);
void buscarnumero(Nodo *&, int);
void mostrartxt(Nodo *&, Nodo *&);
void metordenamiento(Nodo *&,Nodo *&, int);
void pushcola(Nodo *&,Nodo *&,int);
void popcola(Nodo *&,Nodo *&,int);
bool colaVacia(Nodo *);
void menupila(Nodo *&);
void menucola(Nodo *&, Nodo *&);
void burbuja(Nodo *&);
void opeliminar(Nodo *&, Nodo *&, int);
void eliminarcola(Nodo *&, Nodo *&);
void insertarpila(Nodo *&,int,int);
void insertarp(Nodo *&,int);
void mostrarElementosp(Nodo *&);
void buscarnumeros(Nodo *&, int bus);
void editarelementosp(Nodo *&);
void metordenamientop(Nodo *&, int);
void burbujap(Nodo *&);
void mostrartxtp(Nodo *&);
void insertartxtp(Nodo *&);
void estadopila(Nodo *&);
void opeliminarp(Nodo *&, int);
void borrarpila(Nodo *&);
void eliminarpila(Nodo *&, int);

int contador_cola=0;


int main() {
	int op,opcion,cola;
	Nodo *frente=NULL;
	Nodo *fin=NULL;
	Nodo *pila=NULL;
	
	printf("----------------------\n");
	printf("******BIENVENIDO******\n");
	printf("-----------------------\n");
	printf("|     0) Salir.       |\n");
	printf("|     1) Pilas.       |\n|     2) Colas.       |\n");
	printf("----------------------\n");
	printf("Opcion: ");
	
	scanf("%d", &op);
	
	system("cls");
	
	switch(op){
		case 0:
			printf("Gracias por su visita!\n");
			
			
			break;
		case 1:
					
			menupila(pila);
			
			break;
		case 2:
			
			menucola(frente,fin);
		
			
		break;
		
		default:
			printf("La opcion que usted ingreso no se  encuentra en el menu..\n");
			printf("Por favor, vuelva a ingresar\n");
			
			system("pause");
			
			system("cls");
			
			main();
			break;
		
	}
	
	return 0;
}

void menupila(Nodo *&pila){
	int opcion, n, j, bus;
	
	
            printf("-----------------------------\n");
			printf("|**********MENU PILA*********|\n");
			printf("-----------------------------\n");
			printf("|  0. Salir                  |\n");
			printf("|  1. Generar Elementos      |\n");
			printf("|  2. Listar Elementos Pila  |\n");
			printf("|  3. Listar Elementos txt   |\n");
			printf("|  4. Buscar Elementos       |\n");
			printf("|  5. Editar Elementos       |\n");
			printf("|  6. Ordenar Elementos      |\n");
			printf("|  7. Salvar Elementos       |\n");
			printf("|  8. Estado Pila            |\n");
			printf("|  9. Eliminar               |\n");
			printf("------------------------------\n\n");
			
			printf("Opcion: ");
			scanf("%d",&opcion);
			
			system("cls");
			
	switch(opcion){
		case 0:
			main();
			break;
		case 1:
			printf("------------------------\n");
			printf("|***GENERAR ELEMENTOS***|\n");
			printf("-------------------------\n");
			printf("|  0) Salir             |\n");
			printf("|                       |\n");
			printf("| -Seleccione una opcion|\n");
			printf("|  segun el numero de   |\n");
			printf("|  elementos que desea  |\n");
			printf("|  generar:             |\n");
			printf("|  1) 100               |\n");
			printf("|  2) 200               |\n");
			printf("|  3) 300               |\n");
			printf("|  4) 400               |\n");
			printf("|  5) 500               |\n");
			printf("------------------------\n\n");
			
			printf("Opcion: ");
			scanf("%d", &n);
			
			insertarpila(pila,n,j);
			
			system("pause");
			
			system("cls");
			
			menupila(pila);
			
			break;
		case 2:
				if(pila == NULL){
				
				printf("Aun no existen datos en la pila.\n");
				
				}else{
				
					printf("Lista de numeros aleatorios:\n\n");
			
					mostrarElementosp(pila);
				}
			
				system("pause");
			
				system("cls");
			
				menupila(pila);
			break;
		case 3:	
		
			if(archivo==NULL){
					printf("El documento txt esta vacio!\n");
				}else{
					
					mostrartxtp(pila);
				}
			
			
				system("pause");
			
				system("cls");
			
				menupila(pila);
				
			break;
		case 4:
			if(pila==NULL){
			
				printf("Aun no se han generado datos en la pila...genere para buscar elementos.\n");
			
			}else{
				printf("Digite el elemento que desea buscar en la pila: ");
			
				scanf("%d", &bus);
			
				buscarnumeros(pila,bus);
			
			}
			
			
			system("pause");
			
			system("cls");
			
			menupila(pila);
			
			break;
		case 5:
			
			if(pila==NULL){
				
				printf("Aun no se han cargado datos a la pila, cargue para modificar.\n");
			}else{	
						
			editarelementosp(pila);
			
				if(validacion){
					
					printf("El dato ha sido modificado con exito!\n");
				}
				else{
					printf("El dato no existe!\n");
				}
		}
			
			system("pause");
			
			system("cls");
			
			menupila(pila);
						
			break;
		case 6:
			
			if(pila==NULL){
				printf("La pila esta vacia, genere datos para luego ordenarlos.\n");
			}
			else{
					printf("-----------------------------\n");
					printf("|**METODOS DE ORDENAMIENTO***|\n");
					printf("-----------------------------\n");
					printf("|  0. Salir                  |\n");
					printf("|  1. Burbuja                |\n");
					printf("|  2. Insercion              |\n");
					printf("-----------------------------\n\n");
			
					printf("Opcion: ");
			
					scanf("%d", &n);
			
					metordenamientop(pila,n);
			}
			system("pause");
			
			system("cls");
			
			menupila(pila);
						
			break;
		case 7:
			
			if(pila==NULL){
				printf("La pila esta vacia, cargue datos para insertarlos en un archivo de texto.\n");
			}
			else{
				insertartxtp(pila);
			}
			
			
			system("pause");
			
			system("cls");
			
			menupila(pila);
			
			break;
		case 8:
			printf("El estado en el que se encuentra la pila es:\n");
			
			estadopila(pila);
			
			system("pause");
			
			system("cls");
			
			menupila(pila);
			
			break;
		case 9:
			
			printf("----------------------------\n");
			printf("|*********ELIMINAR**********|\n");
			printf("----------------------------\n");
			printf("|  0. Salir                 |\n");
			printf("|  1. Eliminar Elementos    |\n");
			printf("|  2. Vaciar Pila           |\n");
			printf("----------------------------\n\n");
			
			printf("Opcion: ");
			
			scanf("%d", &n);
			
			opeliminarp(pila,n);
				
			system("pause");
			
			system("cls");
			
			menupila(pila);
		
			break;
		
				
			default:
				printf("La Opcion Ingresada NO SE ENCUENTRA En Las Opciones Dadas Anteriormente...\n");
				break;
				
			
		
	}
	
}


void eliminarpila(Nodo *&pila, int dato){
	printf("Digite el dato que desea eliminar:\n");
	scanf("%d", &dato);
	Nodo *Nueva_pila = pila;
	while(Nueva_pila != NULL){
		if(Nueva_pila->dato == dato){
			printf("El dato se ha borrado correctamente.\n");
			Nueva_pila->dato=NULL;
			//Nueva_pila=Nueva_pila->dato;
		}
			Nueva_pila=Nueva_pila->siguiente;
	}
}


void borrarpila(Nodo *&pila){
 while(pila!=NULL){
  Nodo *aux=pila;
  pila=aux->siguiente;
  delete aux; 
  }
}




void opeliminarp(Nodo *&pila, int n){
	int dato;
	switch(n){
		case 0:
			system("cls");
			
			menupila(pila);
				
			break;
		case 1:
			if(pila==NULL){
				
			printf("No hay datos registrados en la pila.\n");
			
			}
			else{
			
			eliminarpila(pila,dato);
	
			}
			
			
			system("pause");
			
			system("cls");
			
			menupila(pila);
			
			break;
		case 2:
			
			if(pila==NULL){
				
			printf("No hay datos registrados en la pila.\n");
			
			}
			else{
				printf("Eliminando...\n");
			
				borrarpila(pila);
				
				printf("Los datos se eliminaron correctamente\n");
			}
			
					
			system("pause");
			
			system("cls");
			
			menupila(pila);
			
			break;
			
		default:
			printf("La opcion que usted ingreso no se  encuentra en las opciones dadas..\n");
			printf("Por favor, vuelva a ingresar\n");
			
			system("pause");
			
			system("cls");
			
			main();
			break;
	}
		
	}




void estadopila(Nodo *&pila){
	Nodo *n_pila = pila;
	if(pila==NULL){
		printf("Vacia!\n");
	}
	else{
		printf("Llena!\n");
	}
}


void insertartxtp(Nodo *&pila){
	Nodo *aux=pila;
 	archivo = fopen("Elementos_Recuperados.txt", "w");
    while(aux!=NULL){
    	fprintf(archivo,"%d\n",aux->dato);
 		
 		aux=aux->siguiente;
	}
 	fclose(archivo);
 	printf("Los datos han sido copiados exitosamente en un archivo de texto!\n");
}



void mostrartxtp(Nodo *&pila){
 Nodo *polo = pila;
 int dato;
 archivo = fopen("Elementos_Recuperados.txt", "r");
 while(!feof(archivo)){
 fscanf(archivo,"%d\n",&dato);
 printf("dato desde archivo %d\n",dato);

 }printf("Cargado con exito\n");
 fclose(archivo);
}



void burbujap(Nodo *&pila){
	Nodo *p=pila;
	Nodo *j;
	
	while(p != NULL){
		j=p->siguiente;
		
		while(j != NULL){
			if(p->dato > j->dato){
				int aux = j->dato;
				j->dato = p->dato;
				p->dato = aux;
			}
			j=j->siguiente;
		}
		p=p->siguiente;
	}
	printf("Los datos de la pila han sido ordenados exitosamente!\n");
}


void metordenamientop(Nodo *&pila, int n){
	switch(n){
		case 0:
			system("cls");
			
			menupila(pila);
				
			fflush(stdin);
			break;
		case 1:
			printf("Ordenando los datos...\n");
			
			burbujap(pila);
			
			system("pause");
			
			system("cls");
			
			menupila(pila);
			
			break;
		case 2:
			printf("Ordenado los datos...\n");
			
			
			
			system("pause");
			
			system("cls");
			
			menupila(pila);
			
			break;
			
		default:
			printf("La opcion que usted ingreso no se  encuentra en las opciones dadas..\n");
			printf("Por favor, vuelva a ingresar\n");
			
			system("pause");
			
			system("cls");
			
			main();
			break;
	}
}



void editarelementosp(Nodo *&pila){
	int n,nuevo_dato;
	
	Nodo *aux=pila;
	printf("Digite el dato que desea modificar:\n");
	scanf("%d", &n);
	printf("Digite el nuevo dato:\n");
	scanf("%d", &nuevo_dato);
	while(aux!=NULL){
		if(aux->dato==n){
			aux->dato = nuevo_dato;
			validacion = true;
		}
		aux = aux->siguiente;
	}
	
}



void buscarnumeros(Nodo *&pila, int bus){
 	Nodo *act = new Nodo();
 	act = pila;
 	bool x=false;
 	
 	while(act != NULL){
 		
 			if(act->dato==bus){
 				
 				x=true;
 			
 				
			 }
			 
			 act=act->siguiente;
			 
		}
			 
			 if(!x){
			 	
			 	printf("el numero %i no se encuentra en la pila.\n", bus);
			 }
			 else{
			 	printf("el numero %i ha sido encontrado.\n", bus);
			 }
			
			 
		 
	 }
	 


void mostrarElementosp(Nodo *&pila){
 Nodo *Nueva_Pila = pila;
 if(pila==NULL){
 printf("La pila esta vacia!\n");
 }else if(Nueva_Pila != NULL){
 while(Nueva_Pila != NULL){
 printf("-Dato Agregado: %d\n",Nueva_Pila->dato);
 Nueva_Pila = Nueva_Pila->siguiente;
 }
 }else{
 printf("-Dato Agregado: %d",Nueva_Pila->dato);
 }printf("\n");
}


void insertarp(Nodo *&pila,int n){
Nodo *nuevo_nodo= new Nodo();
nuevo_nodo->dato=n;
nuevo_nodo->siguiente=pila;
pila=nuevo_nodo;
}


void insertarpila(Nodo *&pila,int n,int j){

	switch(n){
		case 0: 
			fflush(stdin);
			break;
		case 1:
			srand(time(NULL));
			for(j=0;j<100;j++){
		     					n=1+rand() % ((999999+1)-1);
		     					insertarp(pila,n);									     					
							
								}				
								printf("100 Elementos Han Sido Generados Correctamente.\n");
			break;
		case 2:
			srand(time(NULL));
			for(j=0;j<200;j++){
		        				n=1+rand() % ((99999+1)-1);
		        				insertarp(pila,n);
		        					
								}
								printf("200 Elementos Han Sido Generados Correctamente.\n");
			break;
		case 3:
			srand(time(NULL));
			for(j=0;j<300;j++){
		        				n=1+rand() % ((99999+1)-1);
		        				insertarp(pila,n);
	
								}
								printf("300 Elementos Han Sido Generados Correctamente.\n");
			
			break;
		case 4:
			srand(time(NULL));
			for(j=0;j<400;j++){
		        				n=1+rand() % ((99999+1)-1);
		        				insertarp(pila,n);
	
								}
								printf("400 Elementos Han Sido Generados Correctamente.\n");
			break;
		case 5:
			srand(time(NULL));
			for(j=0;j<500;j++){
		        				n=1+rand() % ((99999+1)-1);
		        				insertarp(pila,n);
	
								}
								printf("500 Elementos Han Sido Generados Correctamente.\n");
			break;
		default:
			printf("La opcion que usted ingreso no se  encuentra en el menu..\n");
			break;
	}
}
	


	

	






void menucola(Nodo *&frente,Nodo *&fin){
	int j, i, opcion,n, bus;

			printf("-----------------------------\n");
			printf("|*********MENU COLA**********|\n");
			printf("-----------------------------\n");
			printf("|  0. Salir                  |\n");
			printf("|  1. Generar Elementos      |\n");
			printf("|  2. Listar Elementos Cola  |\n");
			printf("|  3. Listar Elementos txt   |\n");
			printf("|  4. Buscar Elementos       |\n");
			printf("|  5. Editar Elementos       |\n");
			printf("|  6. Ordenar Elementos      |\n");
			printf("|  7. Salvar Elementos       |\n");
			printf("|  8. Estado Cola            |\n");
			printf("|  9. Eliminar               |\n");
			printf("-----------------------------\n\n");
			
			printf("Opcion: ");
			scanf("%d", &opcion);
			
				system("cls");
			
			switch(opcion){
		case 0:
			main();
			break;
		case 1:
			printf("------------------------\n");
			printf("|***GENERAR ELEMENTOS***|\n");
			printf("-------------------------\n");
			printf("|  0) Salir             |\n");
			printf("|                       |\n");
			printf("| -Seleccione una opcion|\n");
			printf("|  segun el numero de   |\n");
			printf("|  elementos que desea  |\n");
			printf("|  generar:             |\n");			
			printf("|  1) 100               |\n");
			printf("|  2) 200               |\n");
			printf("|  3) 300               |\n");
			printf("|  4) 400               |\n");
			printf("|  5) 500               |\n");
			printf("------------------------\n\n");
			
			printf("Opcion: ");
			scanf("%d", &n);
			
			insertar(frente,fin,n,j);
			
			system("pause");
			
			system("cls");
			
			menucola(frente,fin);
			
			
			break;
		case 2:
			if(frente == NULL){
				
				printf("Aun no existen datos en la cola.\n");
				
			}else{
				
				printf("Lista de numeros aleatorios:\n\n");
			
				mostrarElementos(frente,fin);
			}
			
			system("pause");
			
			system("cls");
			
			menucola(frente,fin);
			
			break;
		case 3:
				if(archivo==NULL){
					printf("El documento txt esta vacio!\n");
				}else{
					mostrartxt(frente,fin);
				}
			
			
				system("pause");
			
				system("cls");
			
				menucola(frente,fin);
			
			
			break;
			
		case 4:
			
		if(frente==NULL){
			
			printf("Aun no se han generado datos en la cola...genere para buscar elementos.\n");
			
		}else{
			printf("Digite el elemento que desea buscar en la cola: ");
			
			scanf("%d", &bus);
			
			buscarnumero(frente,bus);
			
		}
			
			
			system("pause");
			
			system("cls");
			
			menucola(frente,fin);
				
			break;
		case 5:
			
			if(frente==NULL){
				
				printf("Aun no se han cargado datos a la cola, cargue para modificar.\n");
			}else{	
						
			editarelementos(frente,fin);
			
				if(validacion){
					
					printf("El dato ha sido modificado con exito!\n");
				}
				else{
					printf("El dato no existe!\n");
				}
		}
			
			system("pause");
			
			system("cls");
			
			menucola(frente,fin);
						
			break;
		case 6:
			if(frente==NULL){
				printf("La cola esta vacia, genere datos para luego ordenarlos.\n");
			}
			else{
					printf("-----------------------------\n");
					printf("|**METODOS DE ORDENAMIENTO***|\n");
					printf("-----------------------------\n");
					printf("|  0. Salir                  |\n");
					printf("|  1. Burbuja                |\n");
					printf("|  2. Insercion              |\n");
					printf("-----------------------------\n\n");
			
					printf("Opcion: ");
			
					scanf("%d", &n);
			
					metordenamiento(frente,fin,n);
			}
			system("pause");
			
			system("cls");
			
			menucola(frente,fin);
						
			break;
		case 7:
			if(frente==NULL){
				printf("La cola esta vacia, cargue datos para insertarlos en un archivo de texto.\n");
			}
			else{
				insertartxt(frente,fin);
			}
			
			
			system("pause");
			
			system("cls");
			
			menucola(frente,fin);
			
			break;
		case 8:
			printf("El estado en el que se encuentra la cola es:\n");
			
			estadocola(frente);
			
			system("pause");
			
			system("cls");
			
			menucola(frente,fin);
			
			break;
			
		case 9:
			printf("----------------------------\n");
			printf("|*********ELIMINAR**********|\n");
			printf("----------------------------\n");
			printf("|  0. Salir                 |\n");
			printf("|  1. Eliminar Elementos    |\n");
			printf("|  2. Vaciar Cola           |\n");
			printf("----------------------------\n\n");
			
			printf("Opcion: ");
			
			scanf("%d", &n);
			
			opeliminar(frente,fin,n);
				
			system("pause");
			
			system("cls");
			
			menucola(frente,fin);
		
			break;
						
			default:
				printf("La Opcion Ingresada NO SE ENCUENTRA En Las Opciones Dadas Anteriormente...\n");
				break;
						
		
	}
			
}

void insertartxt(Nodo *&frente, Nodo *&fin){
	Nodo *aux=frente;
 	archivo = fopen("Elementos_Recuperados.txt", "w");
    while(aux!=NULL){
    	fprintf(archivo,"%d\n",aux->dato);
 		
 		aux=aux->siguiente;
	}
 	fclose(archivo);
 	printf("Los datos han sido copiados exitosamente en un archivo de texto!\n");
}

void insertar(Nodo *&frente, Nodo *&fin,int n,int j){

	switch(n){
		case 0: 
			fflush(stdin);
			break;
		case 1:
			srand(time(NULL));
			for(j=0;j<100;j++){
		     					n=1+rand() % ((999999+1)-1);
		     					pushcola(frente,fin,n);										     					
							
								}				
								printf("100 Elementos Han Sido Generados Correctamente.\n");
			break;
		case 2:
			srand(time(NULL));
			for(j=0;j<200;j++){
		        				n=1+rand() % ((99999+1)-1);
		        				pushcola(frente,fin,n);
		        					
								}
								printf("200 Elementos Han Sido Generados Correctamente.\n");
			break;
		case 3:
			srand(time(NULL));
			for(j=0;j<300;j++){
		        				n=1+rand() % ((99999+1)-1);
		        				pushcola(frente,fin,n);
	
								}
								printf("300 Elementos Han Sido Generados Correctamente.\n");
			
			break;
		case 4:
			srand(time(NULL));
			for(j=0;j<400;j++){
		        				n=1+rand() % ((99999+1)-1);
		        				pushcola(frente,fin,n);
	
								}
								printf("400 Elementos Han Sido Generados Correctamente.\n");
			break;
		case 5:
			srand(time(NULL));
			for(j=0;j<500;j++){
		        				n=1+rand() % ((99999+1)-1);
		        				pushcola(frente,fin,n);
	
								}
								printf("500 Elementos Han Sido Generados Correctamente.\n");
			break;
		default:
			printf("La opcion que usted ingreso no se  encuentra en el menu..\n");
			break;
	}
}
	
	
	
void pushcola(Nodo *&frente,Nodo *&fin,int n){
Nodo *nuevo_nodo = new Nodo();
 nuevo_nodo ->dato = n;
 nuevo_nodo -> siguiente=NULL;
 if(colaVacia(frente)){
 frente=nuevo_nodo;
 }else{
 fin -> siguiente = nuevo_nodo;
 }
 fin = nuevo_nodo;

}


bool colaVacia(Nodo *frente){
 return (frente==NULL)?true : false;
}


void mostrarElementos(Nodo *&frente, Nodo *&fin){
	
	Nodo *n_cola = frente;
	Nodo *n2_cola = fin;
 if(frente == NULL){
 printf("La Cola Esta Vacia!\n");
 }else if(n_cola != NULL){
 while(n_cola != NULL){
 printf("-Dato Agregado: %d\n",n_cola->dato);
 n_cola = n_cola->siguiente;
 }
 }else{
 printf("-Dato Agregado: %d",n_cola->dato);
 }printf("\n");
 
 if(fin == NULL){
 printf(".");
 }else if(n_cola != NULL){
 while(n2_cola != NULL){
 printf("-Dato Agregado: %d\n",n2_cola->dato);
 n2_cola = n2_cola->siguiente;
 }
 }
}

void estadocola(Nodo *&frente){
	Nodo *n_cola = frente;
	if(frente==NULL){
		printf("Vacia!\n");
	}
	else{
		printf("Llena!\n");
	}
}

void buscarnumero(Nodo *&frente, int bus){
 	Nodo *act = new Nodo();
 	act = frente;
 	bool x=false;
 	
 	while(act != NULL){
 		
 			if(act->dato==bus){
 				
 				x=true;
 			
 				
			 }
			 
			 act=act->siguiente;
			 
		}
			 
			 if(!x){
			 	
			 	printf("el numero %i no se encuentra en la cola.\n", bus);
			 }
			 else{
			 	printf("el numero %i ha sido encontrado.\n", bus);
			 }
			
			 
		 
	 }
	 
	 
 void eliminarcola(Nodo *&frente, Nodo *&fin){
 	int dato;
 	
 	printf("Digite el dato que desea eliminar:\n");
	scanf("%d",&dato);
	int n,nuevo_dato;
	Nodo *aux=frente;
	while(aux!=NULL){
		if(aux->dato==dato){
			contador_cola+=1;
			aux->dato=NULL;
			aux->dato = aux->dato;;
		}
		aux = aux->siguiente;
	}
	contador_cola=0;
}
	 
 void Cargar(Nodo *&frente, Nodo *&fin){
 Nodo *polo = frente;
 int dato;
 archivo = fopen("Elementos_Recuperados.txt", "W");
 if(frente==NULL){
 	printf("La cola esta vacia!\n");
 }
 else{
 	while(polo!=NULL){
 	fprintf(archivo,"%d\n",&polo->dato);
 	polo=polo->siguiente;

 }printf("Cargado con exito\n");
 }
 fflush(archivo);
 fclose(archivo);
 
}




void mostrartxt(Nodo *&frente, Nodo *&fin){
 Nodo *polo = frente;
 int dato;
 archivo = fopen("Elementos_Recuperados.txt", "r");
 while(!feof(archivo)){
 fscanf(archivo,"%d\n",&dato);
 printf("dato desde archivo %d\n",dato);

 }printf("Cargado con exito\n");
 fclose(archivo);
}


 
void editarelementos(Nodo *&frente, Nodo *&fin){
	int n,nuevo_dato;
	
	Nodo *aux=frente;
	printf("Digite el dato que desea modificar:\n");
	scanf("%d", &n);
	printf("Digite el nuevo dato:\n");
	scanf("%d", &nuevo_dato);
	while(aux!=NULL){
		if(aux->dato==n){
			aux->dato = nuevo_dato;
			validacion = true;
		}
		aux = aux->siguiente;
	}
	
}

void metordenamiento(Nodo *&frente,Nodo *&fin, int n){
	switch(n){
		case 0:
			system("cls");
			
			menucola(frente,fin);
				
			fflush(stdin);
			break;
		case 1:
			printf("Ordenando los datos...\n");
			
			burbuja(frente);
			
			system("pause");
			
			system("cls");
			
			menucola(frente,fin);
			
			break;
		case 2:
			printf("Ordenado los datos...\n");
			
			
			
			system("pause");
			
			system("cls");
			
			menucola(frente,fin);
			
			break;
			
		default:
			printf("La opcion que usted ingreso no se  encuentra en las opciones dadas..\n");
			printf("Por favor, vuelva a ingresar\n");
			
			system("pause");
			
			system("cls");
			
			main();
			break;
	}
}

void burbuja(Nodo *&frente){
	Nodo *p=frente;
	Nodo *j;
	
	while(p != NULL){
		j=p->siguiente;
		
		while(j != NULL){
			if(p->dato > j->dato){
				int aux = j->dato;
				j->dato = p->dato;
				p->dato = aux;
			}
			j=j->siguiente;
		}
		p=p->siguiente;
	}
	printf("Los datos de la cola han sido ordenados exitosamente!\n");
}

void opeliminar(Nodo *&frente, Nodo *&fin, int n){
	switch(n){
		case 0:
			system("cls");
			
			menucola(frente,fin);
				
			break;
		case 1:
				if(frente==NULL){
				
			printf("No hay datos registrados en la cola.\n");
			
			}
			else{	
				
				eliminarcola(frente,fin);
				
				printf("El dato fue eliminado correctamente.\n");
				
				}
				
				system("pause");
			
				system("cls");
			
				menucola(frente,fin);
			
			break;
		case 2:
			
			if(frente==NULL){
				
			printf("No hay datos registrados en la cola.\n");
			
			}
			else{
				printf("Eliminando...\n");
			
				vaciarcola(frente,fin);
				printf("Los datos se eliminaron correctamente\n");
			}
			
					
			system("pause");
			
			system("cls");
			
			menucola(frente,fin);
			
			break;
			
		default:
			printf("La opcion que usted ingreso no se  encuentra en las opciones dadas..\n");
			printf("Por favor, vuelva a ingresar\n");
			
			system("pause");
			
			system("cls");
			
			main();
			break;
	}
		
	}




void vaciarcola(Nodo *&frente,Nodo *&fin){
	
	
		while(frente != NULL){
				Nodo *aux = frente;
				
			if(frente==fin){
				
				frente=NULL;				 
			}else{
				frente=frente->siguiente;
			}
			delete aux;
		}	
}
