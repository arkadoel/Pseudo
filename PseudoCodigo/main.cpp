/* 
 * File:   main.cpp
 * Author: fer
 *
 * Created on 25 de junio de 2014, 15:51
 */
#include "pseudo.h"



Clase hola Contiene
    Publico Entero holar;
    
FinClase

/*
 * 
 */
Entero INICIO () Hacer

    Frase h = "hola amigo";
    
    Sistema::Salida::Escribir("Escribe una letra: ");
    Caracter c = Sistema::Entrada::LeerLetra();
    
    h +=c;
    Sistema::Salida::EscribirLinea("jor" + h);
    
    
    Retorno 0;
Fin

