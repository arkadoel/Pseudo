/* 
 * File:   main.cpp
 * Author: fer
 *
 * Created on 25 de junio de 2014, 15:51
 */
#include "pseudo.h"
#include "Ficheros.h"


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
Entero INICIO (Entero argc, Caracter *argv[]) Hacer

    Frase h = "hola amigo";
    
    Sistema::Salida::Escribir("Escribe una letra: ");
    Caracter c = Sistema::Entrada::LeerLetra();
    
    h +=c;
    Sistema::Salida::EscribirLinea("jor" + h);
    
    myClase mia;
    mia.holar=32;
    
    Sistema::Ficheros::FichEntrada f;
    f.Abrir("/home/fer/actualiza.sh");
    Frase linea="";
    Mientras (No f.EsFinalFichero()) Hacer
        linea = f.LeerLinea();
        Sistema::Salida::EscribirLinea( linea );
    FinMientras
    
    f.Cerrar();
    
    
    Retorno 0;
Fin

