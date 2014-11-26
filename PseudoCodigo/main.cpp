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
    Publico Real holar ;
    Constante Real _MetrosCuadrados_ = 0.0;
    
    myClase() Contiene
        holar= 0.2;
    FinProcedimiento

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
    mia.holar = 32;
    
    /*Sistema::Ficheros::FichEntrada f;
    f.Abrir("/home/fer/actualiza.sh");
    Frase linea="";
    Mientras (No f.EsFinalFichero()) Hacer
        linea = f.LeerLinea();
        Sistema::Salida::EscribirLinea( linea );
    FinMientras
    
    f.Cerrar();
     * */
    Convertir::REDONDEO.ARRIBA;
    
    Frase f = "32.2";
    f +="numero convertido" + Convertir::aFrase( Convertir::aEntero(32.5, Convertir::REDONDEO.ARRIBA));
    Sistema::Salida::EscribirLinea(f);
    
    Retorno 0;
Fin

