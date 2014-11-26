/* 
 * File:   Sistema.h
 * Author: fer
 *
 * Created on 25 de junio de 2014, 17:01
 */

#include "PseudoBase.h"
#include <string.h>
#include <cstring>
#include <sstream>

    Booleano FrasesIguales(Frase f1, Frase f2) {
        Si (strcmp(f1.c_str(), f2.c_str()) == 0) Hacer
            Retorno Verdadero;
        Sino
            Retorno Falso;
        FinSi
    FinFuncion
        
 
EspacioDeNombres Sistema Contiene
        
    EspacioDeNombres Salida Contiene
        /**
         * Permite escribir una frase en la consola y saltar a la linea siguiente
         * @param frase
         */
        Procedimiento EscribirLinea(Frase frase) Hacer
            cout << frase << endl;
        FinProcedimiento
        
        /**
         * Permite escribir una frase en la consola sin 
         * saltar a la linea siguiente
         * @param frase
         */
        Procedimiento Escribir(Frase frase) Hacer
            cout << frase;
        FinProcedimiento
    Fin
                
    EspacioDeNombres Entrada Contiene
                
       /**
        * Lee un solo caracter introducido en la consola de comandos
        * @return 
        */
       Caracter LeerLetra() Hacer
            Frase input ="";
            Caracter myChar =' ';
            
            getline(cin, input);
            
            Si (input.length() == 1) Hacer
                myChar = input[0];                
            FinSi     
            Retorno myChar;
       FinFuncion
            
        /**
        * Lee un solo caracter introducido en la consola de comandos
        *  
        */
       Frase Leer() Hacer
            Frase input2 ="";
            
            getline(cin, input2);  
            Retorno input2; 
       FinFuncion       
                    
    Fin
               
Fin

