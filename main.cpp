// TP 3 - Preguntas
// German Gruschka
// Empezado el 4/25/15.


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>


using namespace std;

int main() {
    
    int tematica;
    srand(time(NULL));
    
    cout << "Juego de preguntas y respuestas\nSeleccione temática:\n";
    
    
    
    // Reiteracion del menu principal
    while (tematica != 0){
        
        
        cout << "1-Preguntas con numeros\n2-Preguntas con letras\n3-Preguntas con palabras\n0-Salir del programa\n";
        
        cin >> tematica;
        
        // Validacion de entrada
        while (tematica<0 || tematica>3) {
            
            cout << "Numero ingresado inválido. Reingrese numero por favor\n";
            
            cout << "1-Preguntas con numeros\n2-Preguntas con letras\n3-Preguntas con palabras\n0-Salir del programa\n";
            
            cin >> tematica;
            
        }
        
        int preguntaRandom = rand() % 3;
        
        int respuesta;
        char respuestaChar;
        string respuestaString;
        
        switch (tematica) {
            
                
            case 1:
                

                if(preguntaRandom == 0){
                    
                    cout << "Cuanto es 1x1+1/1-1 ?\n";
                    cin >> respuesta;
                    
                    if (respuesta == 1) {
                        cout << "Correcto! Felicitaciones!\n";
                    } else {
                        cout << "Anda a estudiar Filosofia y Letras!\n";
                    }
                    
                }
                
                if (preguntaRandom == 1) {
                    
                    cout << "Cuantos dedos tienen en las manos los Simpsons?\n";
                    cin >> respuesta;
                    
                    if (respuesta == 4) {
                        cout << "Correcto! Felicitaciones!\n";
                    } else {
                        cout << "Equivocado. Seguí participando!\n";
                    }
                }
                
                if (preguntaRandom == 2) {
                    
                    cout << "En que ano se declaro la Independencia Argentina?\n";
                    cin >> respuesta;
                    
                    if (respuesta == 1816) {
                        cout << "Correcto! Felicitaciones!\n";
                    } else {
                        cout << "Anda a estudiar historia...\n";
                    }
                    
                }
        
                break;
                
                
            case 2:
                
                if(preguntaRandom == 0){
                    
                    cout << "Qué letra viene antes? K o D\n";
                    cin >> respuestaChar;
                    
                    if (respuestaChar == 'D' || respuestaChar == 'd') {
                        cout << "Correcto! Felicitaciones!\n";
                    } else {
                        cout << "Menos mal que 'abecedario' no es materia...\n";
                    }
                    
                }
                
                if (preguntaRandom == 1) {
                    
                    cout << "Con qué letra empieza el nombre de San Martín?\n";
                    cin >> respuestaChar;
                    
                    if (respuestaChar == 'j' || respuestaChar == 'J') {
                        cout << "Correcto! Felicitaciones!\n";
                    } else {
                        cout << "Sin comentarios...\n";
                    }
                }
                
                if (preguntaRandom == 2) {
                    
                    cout << "Cual es la ultima letra del segundo nombre de Mozart?\n";
                    cin >> respuestaChar;
                    
                    if (respuestaChar == 's' || respuestaChar == 'S') {
                        cout << "Correcto! Felicitaciones!\n";
                    } else {
                        cout << "Anda a escuchar a justin bieber...\n";
                    }
                }
                
                break;
                
            case 3:
                
                if(preguntaRandom == 0){
                    
                    cout << "Apple o Microsoft?\n";
                    cin >> respuestaString;
                    
                    if (respuestaString.compare("Apple") == 0 || respuestaString.compare("apple") == 0){
                        cout << "Sos groso,sabelo!!\n";
                    } else {
                        cout << "No pibe, no...\n";
                    }
                    
                }
                
                if(preguntaRandom == 1){
                    
                    cout << "De que color era el caballo blanco de San Martin?\n";
                    cin >> respuestaString;
                    
                    if (respuestaString.compare("blanco") == 0 || respuestaString.compare("Blanco") == 0) {
                        cout << "Bien! En realidad cruzo los Andes en mula, pero bueno!\n";
                    } else {
                        cout << "No...\n";
                    }
                    
                }
                
                if(preguntaRandom == 2){
                    
                    cout << "Quien es más grande? River o Boca? \n";
                    cin >> respuestaString;
                    
                    if (respuestaString.compare("river") == 0 || respuestaString.compare("River") == 0) {
                        cout << "Correcto!!Sabes de sistemas y de buen futbol!!\n";
                    } else {
                        cout << "Incorrecto.\n";
                    }
                    
                }
                
                break;
                
        
                
        }
    
        
        
        
    }
    
    
    
    
}
