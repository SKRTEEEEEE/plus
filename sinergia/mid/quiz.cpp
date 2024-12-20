#include <iostream>

int main()
{
    std::string preguntas[] = {
        "En que anyo se invento C++?",
        "Es la tierra plana?",
        "Cual es el predecesor de C++?",
        "Que lenguaje utilizan los navegadores?"};
    std::string opciones[][4] = {
        {"a). 1983", "b). 1985", "c). 1995", "d). 1996"},
        {"a). Si", "b). No lo se", "c). Tal vez", "d). No"},
        {"a). Cobol", "b). C#", "c). C", "d). B++"},
        {"a). JavaScript", "b). C#", "c). Python", "d). C++"}

    };
    char resultados[] = {'B', 'D', 'C', 'A'};
    int tam = 4;
    char respuesta;
    int puntos = 0;

    for (int i = 0; i < tam; i++)
    {
        std::cout << "\nPregunta #" << i + 1 << std::endl;
        std::cout << preguntas[i] << std::endl;
        for (int j = 0; j < 4; j++)
        {
            std::cout << opciones[i][j] << " ";
        }
        std::cin >> respuesta;
        respuesta = toupper(respuesta);
        if (respuesta == resultados[i])
        {
            std::cout << "\nCorrecto!" << std::endl;
            puntos++;
        }
        else
        {
            std::cout << "\nIncorrecto!";
        }
        std::cout << " - Puntos: "<<puntos<<std::endl;
    }

    std::cout << "\n\n\n\n************************************\n\nFelicidades, Has finalizado!\n\n Aciertos: " << puntos<<"/4\n\n"<< std::endl;
    return 0;
}