#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    const char CaracteresIndeseados[] = { '[', ']'};
    char Palabra[100]; int Switch = 0;
    cout << "Escribe la palabra: "; cin.getline(Palabra, 100);
    for (int i = 0; i < strlen(Palabra); i++)
    {
        for (int j = 0; j < strlen(CaracteresIndeseados); j++)
            if (Palabra[i] == CaracteresIndeseados[j]) Switch = 1;

        if (Switch == 0) cout << Palabra[i];
        Switch = 0;
    }
    cout << '\n';
    return 0;
}
