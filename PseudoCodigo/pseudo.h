#include "PseudoBase.h"
#include "Sistema.h"
#include <cmath>
#include <iomanip>


EspacioDeNombres Convertir Contiene
    Estatico Constante Estructura _redon{
           Constante Frase ARRIBA="ARRIBA";
           Constante Frase ABAJO="ABAJO";
    }REDONDEO;
    /**
     * Convierte un entero en frase
     * @param numero entero
     * @return frase
     */
    Frase aFrase(Entero entero) Contiene    
        ostringstream temp;
        temp<< entero;
        Retorno temp.str();
    FinFuncion
        
    /**
     * Convierte un numero real en frase
     * @param numero real
     * @return frase
     */
    Frase aFrase(Real real) Contiene    
        ostringstream temp;
        temp<< real;
        Retorno temp.str();
    FinFuncion
        
    /**
     * Convierte un numero entero corto en frase
     * @param numero entero corto
     * @return frase
     */
    Frase aFrase(EnteroCorto entero) Contiene    
        ostringstream temp;
        temp<< entero;
        Retorno temp.str();
    FinFuncion
        
    /**
     * Convierte un numero entero largo en frase
     * @param numero entero largo
     * @return frase
     */
    Frase aFrase(EnteroLargo entero) Contiene    
        ostringstream temp;
        temp<< entero;
        Retorno temp.str();
    FinFuncion
        
    /**
     * Convierte un numero real de doble precision en frase
     * @param numero real de doble precision
     * @return frase
     */
    Frase aFrase(RealLargo real) Contiene    
        ostringstream temp;
        temp<< real;
        Retorno temp.str();
    FinFuncion
        
    Entero aEntero(Frase frase) Contiene
        Entero numero;
        istringstream ( frase ) >> numero;
        Retorno numero;
    FinFuncion
                
    Entero aEntero(RealLargo real, Frase redondeo) Contiene
        Entero numero;
        Si (FrasesIguales(redondeo, REDONDEO.ABAJO)){
            numero = (Entero) floor(real);  
            //cout << "abajo" << endl;
        Sino
            numero = (Entero) ceil(real);  
            //cout << "arriba" << endl;
        FinSi
        Retorno numero;
    FinFuncion
Fin