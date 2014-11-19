/* 
 * File:   Ficheros.h
 * Author: https://github.com/Arkadoel
 *
 * Created on 19 de noviembre de 2014, 20:06
 */
#include "PseudoBase.h"
#include <fstream>
#include <string>
#include <sstream>

EspacioDeNombres Sistema Contiene
    EspacioDeNombres Ficheros Contiene
        Clase FichEntrada Contiene
            Privado Frase __Ruta;
            Privado ifstream fs; 
            Publico Booleano Abrir(Frase Ruta) Hacer
                    __Ruta = Ruta;
                    Aqui->fs.open(Ruta.c_str(),ios::in);
                    
            Fin
            Publico Frase LeerLinea() Hacer
                Frase linea = "";
                //fs >> linea;
                getline(fs, linea);
                Retorno linea;
            Fin
            Publico Booleano EsFinalFichero() Hacer
                if(fs.eof()) return true;
                else return false;
            Fin
                            
            Publico Booleano Cerrar() Hacer
               Aqui->fs.close();     
            Fin
        FinClase
    Fin
Fin

