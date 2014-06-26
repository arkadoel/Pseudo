/* 
 * File:   main.cpp
 * Author: fer
 *
 * Created on 25 de junio de 2014, 15:51
 */
#include "pseudo.h"

Constante Frase fra="";

Clase myClase Contiene
    Publico Real holar = 0.2;
    Constante Real _MetrosCuadrados_ =0.0;

    Publico Procedimiento HacerCosas(Frase _frase) Contiene
            
    FinProcedimiento
            
    Publico Entero HacerCosas(Frase _frase, Entero _i) Contiene
            
        Retorno 0;
    FinProcedimiento
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
    
    myClase mia;
    mia.holar=32;
    
    
    Retorno 0;
Fin

