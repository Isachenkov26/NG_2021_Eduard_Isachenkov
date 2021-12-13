#include <iostream>

using namespace std;

int main()
{
    char characters[50], jdi;
    int number;
    cout << "Write different characters (.,!?;:%^*|/&)" << endl;
    cin >> characters;
    for (int i = 0; i < 50; i++){
            if (characters[i] == '.' || characters[i] == ',' || characters[i] == '!' || characters[i] == '?' ||
                characters[i] == ';' || characters[i] == ':' || characters[i] == '%' || characters[i] == '*' ||
                characters[i] == '|' || characters[i] == '/' || characters[i] == '&' || characters[i] == '^'){
                    number++;
            }
    }
    cout << "Characters in line: " << number;
    return 0;
}

