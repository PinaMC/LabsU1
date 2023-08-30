#include<stdio.h>
#include<string.h>
#include<stdbool.h>
//ejercicio1
void parImpar(int varParImpar){
	
	if(varParImpar %2 == 0){
		
		printf("\nEs par");
	}
	else{
	    
		printf("\nEs impar");
	}
}

//ejercicio2
void primos(){  //un numero es primo si solo e divisible por 1 y por si mismo
    int numPrimo;
    bool noPrimo = false;
    
    printf("\nIngresa un numero para saber si es primo o no: ");
    scanf("%d",&numPrimo);
    printf("\nNumero ingresado: %d",numPrimo);
    
    //Hacer un for que parta de 2 y que recorra todos los numeros anteriores a el y los divida para ver si da resto 0
    //
    for(int i = 2; i < numPrimo; i++){
    	
    	if (numPrimo %i == 0)
    	{
    		noPrimo = true;
    		//return;
		}
	}
	
	if(noPrimo){
		printf("\nNo es numero primo");
	} 
	else {
		printf("\nEs primo");
		noPrimo = false;
	}  
	noPrimo = false;
}



int main()
{
    //DECLARACION DE VARIABLES
    //EJ1
    int varParImpar;
    int varRest;
    //EJ2
    
    printf("Ejercicio numero 1\n");
    printf("Vas a usar una funcion 2 veces para saber si el numero ingresado es par o impar\nIngresa el numero: ");
    scanf("%d",&varParImpar);
    
    parImpar(varParImpar);//funcion par o impar
    printf("\nAhora va a ingresar el segundo numero para revisar si es par o impar\nIngresa el numero: ");
    scanf("%d",&varParImpar);
    parImpar(varParImpar);
                //fin ejercicio1
    
                //Ejercicio2 
    primos(); //1 llamada
    primos();//2 llamada
    			//fin ejercicio2
    			
    			//Ejercicio3
    
    //Permita determinar el promedio, valor máximo y valor
    //mínimo dentro de un arreglo de enteros. Realice la llamada a la función para
	//corroborar su funcionamiento.	
    			
    
    
    
    
    
    return 0;
}

