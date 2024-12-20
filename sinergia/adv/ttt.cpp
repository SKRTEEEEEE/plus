#include <iostream>
#include <ctime>

void dibujarTablero(char *espacios);
void turnoPl(char *espacios, char jugador);
void turnoMa(char *espacios, char maquina);
bool isWin(char *espacios, char jugador, char maquina);
bool isDraw(char *espacios);
int main(){
    char espacios[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char jugador, computadora;
    bool exec = false;
    std::cout << "Elige X o O: ";
        std::cin >> jugador;
        if(jugador == 'X' || jugador == 'x'){
            jugador = 'X';
            computadora = 'O';
            exec = true;
            dibujarTablero(espacios);
        }else if(jugador == 'O' || jugador == 'o'){
            jugador = 'O';
            computadora = 'X';
            exec = true;
            dibujarTablero(espacios);
        }else{
            std::cout << "Opcion no valida\n";
        }
    while(exec){
        turnoPl(espacios, jugador);
        dibujarTablero(espacios);
        if(isWin(espacios, jugador, computadora )){
            exec = false;
            break;
        }
        if(isDraw(espacios)){
            exec = false;
            break;
        }

        turnoMa(espacios, computadora);
        dibujarTablero(espacios);
        if(isWin(espacios, jugador, computadora )){
            exec = false;
            break;
        }
        if(isDraw(espacios)){
            exec = false;
            break;
        }
    }
    return 0;
}
void dibujarTablero(char *espacios){
    std::cout << "\n";
    std::cout << "     |     |     \n";
    std::cout << "  "<< espacios[0] <<"  |  "<< espacios[1] <<"  |  "<< espacios[2] <<"  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  "<< espacios[3] <<"  |  "<< espacios[4] <<"  |  "<< espacios[5] <<"  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  "<< espacios[6] <<"  |  "<< espacios[7] <<"  |  "<< espacios[8] <<"  \n";
    std::cout << "     |     |     \n";
}
void turnoPl(char *espacios, char jugador){
    int numero;
    do{
        std::cout << "Elige un numero del 1 al 9 como casilla: ";
        std::cin >> numero;
        numero--;
        if(espacios[numero] == ' '){
            espacios[numero] = jugador;
            break;
        }
    }while(!numero > 0 || !numero < 8 );
}
void turnoMa(char *espacios, char maquina){
    int num;
    srand(time(0));
    while(true){
        num = rand() % 9;
        if(espacios[num] == ' '){
            espacios[num] = maquina;
            break;
        }
    }
}
bool isWin(char *espacios, char jugador, char maquina){
    //Filas
    if(espacios[0] != ' ' && (espacios[0] == espacios[1])&&(espacios[1] == espacios[2])){
        espacios[0] == jugador ? std::cout << "Ganaste\n" : std::cout << "Perdiste\n";
    }
    else if(espacios[3] != ' ' && (espacios[3] == espacios[4])&&(espacios[4] == espacios[5])){
        espacios[3] == jugador ? std::cout << "Ganaste\n" : std::cout << "Perdiste\n";
    }
    else if(espacios[6] != ' ' && (espacios[6] == espacios[7])&&(espacios[7] == espacios[8])){
        espacios[6] == jugador ? std::cout << "Ganaste\n" : std::cout << "Perdiste\n";
    }
    //Columnas
    else if(espacios[0] != ' ' && (espacios[0] == espacios[3])&&(espacios[3] == espacios[6])){
        espacios[0] == jugador ? std::cout << "Ganaste\n" : std::cout << "Perdiste\n";
    }
    else if(espacios[1] != ' ' && (espacios[1] == espacios[4])&&(espacios[4] == espacios[7])){
        espacios[1] == jugador ? std::cout << "Ganaste\n" : std::cout << "Perdiste\n";
    }
    else if(espacios[2] != ' ' && (espacios[2] == espacios[5])&&(espacios[5] == espacios[8])){
        espacios[2] == jugador ? std::cout << "Ganaste\n" : std::cout << "Perdiste\n";
    }
    //Diagonales
    else if(espacios[0] != ' ' && (espacios[0] == espacios[4])&&(espacios[4] == espacios[8])){
        espacios[0] == jugador ? std::cout << "Ganaste\n" : std::cout << "Perdiste\n";
    }
    else if(espacios[2] != ' ' && (espacios[2] == espacios[4])&&(espacios[4] == espacios[6])){
        espacios[2] == jugador ? std::cout << "Ganaste\n" : std::cout << "Perdiste\n";
    }else{
        return false;
    }
    return true;
}
bool isDraw(char *espacios){
    for(int i = 0; i < 9; i++){
        if(espacios[i] == ' '){
            return false;
        }
    }
            std::cout << "Empate\n";
            return true;
        
    
}