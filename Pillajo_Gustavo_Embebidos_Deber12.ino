/*
 * Gustavo Pillajo
 * Embebidos
 * K-nn
 * Se realizo el algoritmo de K-nn y se lo puso a prueba con la base de 
 * datos de IRIS, la cual se usa para clasificar que tipo de flor es y la
 * etiqueta que se coloco a cada variedad de flor.
 */


#include "datos.h"
float datos_entrada [5] = {6.2,2.6,2.1,3.5,3}; //Datos usados para realizar pruebas
int on;

void setup () {
  Serial.begin(9600);
}

void loop() {
  on=knn(90,5,3,3); //k=3 quiere decir que aceptara a tres vecinos
  switch(on) {
    case 1:
    Serial.println("Iris-setosa");
    break;
    case 2:
    Serial.println("Iris-versicolor");
    break;
    case 3:
    Serial.println("Iris-virginica");
    break;
}
delay(5000);
}



int knn (int fil, int columna, int vecinos, int etiquetas) {
int col; //Para recorrer las columnas
int fila = 0; //Para recorrer las filas
float promedio = 0; //Para almacenar el promedio de las distancias
float distancia; //Para almacenar la raíz de la distancia
const int k = vecinos; //Número de vecinos
float dist_menores [2][k]; //Matriz para distancias y etiquetas. 
int i = 0; //Contador
int j = 0; //Contador

float aux; //Auxiliar para almacenar Distancia
float aux1; //Auxiliar para almacenar Etiqueta
int x=0;
float num_etiquetas [2][etiquetas];
float respuesta;  //imprimir la etiqueta ganadora
float mayor=0;



for (; i < k; i++) { //Primero almacena valores de las distancias altas
    dist_menores[0][i] = 4000 + i;//Escoger un valor alto para entrar a la condición
    dist_menores[1][i] = 0; // Valor para cualquier etiqueta
  }
  i=0; //Reseteo de la variable para volver a ser usada
  for(;i<etiquetas;i++) {
    num_etiquetas[0][i]=i+1;   
     num_etiquetas[1][i]=0;   
  }
  i=0;//reseteo de la variable 
for (; fila < fil; fila++) { //Para recorrer todas las filas de la matriz
    for (col = 0; col < columna-1; col++) { //Para recorrer las columnas de la matriz
      promedio = promedio + (pow(datos_entrada[col] - matriz[fila][col], 2)); //Fórmula para Potencia.  
    }
    distancia = sqrt(promedio); //Fórmula para la raíz del promedio 
    promedio = 0; //Reinicio de la variable para la siguiente lectura
    
    if (distancia < dist_menores[0][k - 1]) { //Inicio de comparación. Valor de k de los vecinos
      dist_menores[0][k - 1] = distancia; //Almacena la distancia después de ser comparada
      dist_menores[1][k - 1] = matriz[fila][columna-1]; //Almacena la etiqueta
    }  

    //Para ordenar las distancias de menor a mayor
    for (; i < k; i++) { //Para recorrer las filas
      for (j = i + 1; j < k; j++) { //Para recorrer las columnas
        if (num_etiquetas[0][i] > dist_menores[0][j]) { //Compara las distancias de dos en dos siempre
          aux = dist_menores[0][i]; //Primero ordena la fila de la distancia
          dist_menores[0][i] = dist_menores[0][j];
          dist_menores[0][j] = aux;

          // etiquetas
          aux1 = dist_menores[1][i]; //Para ordenar la fila de las etiquetas
          dist_menores[1][i] = dist_menores[1][j];
          dist_menores[1][j] = aux1;
        }
      }
    }  
  }
  //Determinar el número de cada etiqueta
  for(i=0;i<etiquetas;i++){
    for(j=0;j<k;j++) {
      if(num_etiquetas[0][i]==dist_menores[1][j]) {
        num_etiquetas[1][i]=1+num_etiquetas[1][i];
      }
    }
  }
 for(;x<etiquetas;x++) {
  if(num_etiquetas[1][x]>mayor){
    mayor=num_etiquetas[1][x];
    respuesta=num_etiquetas[0][x];
    Serial.println(String("La etiqueta es:")+ String(respuesta));
  }
 }
  return respuesta;
 }
