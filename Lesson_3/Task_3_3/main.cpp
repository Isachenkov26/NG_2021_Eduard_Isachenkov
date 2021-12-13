#include <iostream>

using namespace std;

int main()
{
    int FirstArr[4], SecondArr[4], i, Sum1, Sum2, Sum3, Sum4;
    for (i = 0; i < 4; i++){
        FirstArr[i] = rand() % 5;
    }
    for (i = 0; i < 4; i++){
        SecondArr[i] = rand() % 5;
    }
    for (i = 0; i < 4; i++){
        cout << FirstArr[i] << " ";
    }
    cout << " " << endl;
    for (i = 0; i < 4; i++){
        cout << SecondArr[i] << " ";
    }
    cout << " " << endl;
    Sum1 = FirstArr[0] + SecondArr[0];
    Sum2 = FirstArr[1] + SecondArr[1];
    Sum3 = FirstArr[2] + SecondArr[2];
    Sum4 = FirstArr[3] + SecondArr[3];
    cout << Sum1;
    cout << Sum2;
    cout << Sum3;
    cout << Sum4;
    return 0;
}
