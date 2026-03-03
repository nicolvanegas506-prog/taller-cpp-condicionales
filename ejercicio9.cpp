#include <iostream>
#include <cmath>



int main() {
    
    double peso;     // en kilogramos
    double altura;   // en metros
    double imc;

    std::cout << "Ingrese su peso en kg: ";
    std::cin >> peso;

    std::cout << "Ingrese su altura en metros: ";
    std::cin >> altura;

    if (peso <= 0 || altura <= 0) {
        std::cout << "Error: Valores invalidos." << "\n";
        return 0;
    }

    
    imc = peso / pow(altura, 2);

    std::cout << "Su IMC es: " << imc << "\n";

    std::cout << "Clasificacion" << "\n";

    if (imc < 18.5) {
        std::cout << "Bajo peso" << "\n";
        std::cout << "Sugerencia: Consulte con un profesional y mejore su alimentacion." << "\n";
    }
    else if (imc >= 18.5 && imc < 25) {
        std::cout << "Normal\n";
        std::cout << "Sugerencia: Mantenga una dieta equilibrada y ejercicio regular." << "\n";
    }
    else if (imc >= 25 && imc < 30) {
        std::cout << "Sobrepeso\n";
        std::cout << "Sugerencia: Aumente actividad fisica y controle su dieta."<< "\n";
    }
    else if (imc >= 30 && imc < 35) {
        std::cout << "Obesidad I\n";
        std::cout << "Sugerencia: Consulte un medico y adopte un plan nutricional." << "\n";
    }
    else {
        std::cout << "Obesidad II\n";
        std::cout << "Sugerencia: Busque atencion medica especializada." << "\n";
    }

    return 0;
}
