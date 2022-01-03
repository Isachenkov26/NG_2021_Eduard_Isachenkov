#include <iostream>
#include <string>

using namespace std;

int main()
{
    string characters;
    int number;
    cout << "Write different characters (.,!?;:%^*|/&)" << endl;
    getline (cin, characters);
    for (int i = 0; i < characters.length(); i++){
            if (characters[i] == '.' || characters[i] == ',' || characters[i] == '!' || characters[i] == '?' ||
                characters[i] == ';' || characters[i] == ':' || characters[i] == '%' || characters[i] == '*' ||
                characters[i] == '|' || characters[i] == '/' || characters[i] == '&' || characters[i] == '^'){
                number++;
            }
    }
    cout << "Characters in line: " << number;
    return 0;
}

