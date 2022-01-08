#include <iostream>

using namespace std;

void AccountOne();
void ScoreOne();
void AccountTwo();
void ScoreTwo();
void AccountThird();
void ScoreThird();
void AccountFour();
void ScoreFour();
void AccountFive();
void ScoreFive();
void AccountSix();
void ScoreSix();
void AccountSeven();
void ScoreSeven();
void AccountEight();
void ScoreEight();
void AccountNine();
void ScoreNine();
void AccountTen();
void ScoreTen();
int main()
{
    char Writing;
    cout << "============================" << endl;
    cout << "Bank account:\n0-Kostya_Zadorozhny \n1-Jonas_Freide \n2-Piter_Parker \n3-Eduard_Isachenkov \n4-Roman_Tkachuk \n5-Vadim_Harbar \n6-Danyil_Mykytenko \n7-Andrey_Kobiz \n8-Yan_Kozlov \n9-Danya_Yurchenko" << endl;
    cout << "============================" << endl;
    cin >> Writing;
    if (Writing == '1')
    {
        AccountOne();
    }
    if (Writing == '2')
    {
        AccountTwo();
    }
    if (Writing == '3')
    {
        AccountThird();
    }
    if (Writing == '4')
    {
        AccountFour();
    }
    if (Writing == '5')
    {
        AccountFive();
    }
    if (Writing == '6')
    {
        AccountSix();
    }
    if (Writing == '7')
    {
        AccountSeven();
    }
    if (Writing == '8')
    {
        AccountEight();
    }
    if (Writing == '9')
    {
        AccountNine();
    }
    if (Writing == '0')
    {
        AccountTen();
    }
    return 0;
}

void AccountOne()
{
    string Pincode;
    cout << "Enter your pin code: " << endl;
    cin >> Pincode;
    if (Pincode != "1111"){
        cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
        cin >> Pincode;
        if (Pincode != "1111"){
            cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
            cin >> Pincode;
            if (Pincode != "1111"){
                cout << "You have used all attempts to log in to your account. Your account has been blocked.";
            }
            else{
                ScoreOne();
            }
        }
        else {
            ScoreOne();
        }
    }
    else {
        ScoreOne();
    }
}

void ScoreOne()
{
    char Writing2, Confirmation;
    int Money = 500, AddMoney, WithdrawMoney;
    do {
        cout << "" << endl;
        cout << "Hello Jonas" << endl;
        cout << "Your money: " << Money << "$" << endl;
        cout << "What I can do?" << endl;
        cout << "1 - add money" << endl;
        cout << "2 - withdraw money" << endl;
        cin >> Writing2;
        if (Writing2 == '1'){
           cout << "How much money do you want to add to the account?" << endl;
           cin >> AddMoney;
           Money += AddMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
        if (Writing2 == '2'){
           cout << "How much money do you want to withdraw?" << endl;
           cin >> WithdrawMoney;
           Money -= WithdrawMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
    }while (Confirmation == '1' || Confirmation == '1');
}

void AccountTwo()
{
    string Pincode;
    cout << "Enter your pin code: " << endl;
    cin >> Pincode;
    if (Pincode != "2222"){
        cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
        cin >> Pincode;
        if (Pincode != "2222"){
            cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
            cin >> Pincode;
            if (Pincode != "2222"){
                cout << "You have used all attempts to log in to your account. Your account has been blocked.";
            }
            else{
                ScoreTwo();
            }
        }
        else {
            ScoreTwo();
        }
    }
    else {
        ScoreTwo();
    }
}

void ScoreTwo()
{
    char Writing2, Confirmation;
    int Money = 5000, AddMoney, WithdrawMoney;
    do {
        cout << "" << endl;
        cout << "Hello Piter" << endl;
        cout << "Your money: " << Money << "$" << endl;
        cout << "What I can do?" << endl;
        cout << "1 - add money" << endl;
        cout << "2 - withdraw money" << endl;
        cin >> Writing2;
        if (Writing2 == '1'){
           cout << "How much money do you want to add to the account?" << endl;
           cin >> AddMoney;
           Money += AddMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
        if (Writing2 == '2'){
           cout << "How much money do you want to withdraw?" << endl;
           cin >> WithdrawMoney;
           Money -= WithdrawMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
    }while (Confirmation == '1' || Confirmation == '1');
}

void AccountThird()
{
    string Pincode;
    cout << "Enter your pin code: " << endl;
    cin >> Pincode;
    if (Pincode != "3333"){
        cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
        cin >> Pincode;
        if (Pincode != "3333"){
            cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
            cin >> Pincode;
            if (Pincode != "3333"){
                cout << "You have used all attempts to log in to your account. Your account has been blocked.";
            }
            else{
                ScoreThird();
            }
        }
        else {
            ScoreThird();
        }
    }
    else {
        ScoreThird();
    }
}

void ScoreThird()
{
    char Writing2, Confirmation;
    int Money = 2500, AddMoney, WithdrawMoney;
    do {
        cout << "" << endl;
        cout << "Hello Eduard" << endl;
        cout << "Your money: " << Money << "$" << endl;
        cout << "What I can do?" << endl;
        cout << "1 - add money" << endl;
        cout << "2 - withdraw money" << endl;
        cin >> Writing2;
        if (Writing2 == '1'){
           cout << "How much money do you want to add to the account?" << endl;
           cin >> AddMoney;
           Money += AddMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
        if (Writing2 == '2'){
           cout << "How much money do you want to withdraw?" << endl;
           cin >> WithdrawMoney;
           Money -= WithdrawMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
    }while (Confirmation == '1' || Confirmation == '1');
}

void AccountFour()
{
    string Pincode;
    cout << "Enter your pin code: " << endl;
    cin >> Pincode;
    if (Pincode != "4444"){
        cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
        cin >> Pincode;
        if (Pincode != "4444"){
            cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
            cin >> Pincode;
            if (Pincode != "4444"){
                cout << "You have used all attempts to log in to your account. Your account has been blocked.";
            }
            else{
                ScoreFour();
            }
        }
        else {
            ScoreFour();
        }
    }
    else {
        ScoreFour();
    }
}

void ScoreFour()
{
    char Writing2, Confirmation;
    int Money = 2000, AddMoney, WithdrawMoney;
    do {
        cout << "" << endl;
        cout << "Hello Roman" << endl;
        cout << "Your money: " << Money << "$" << endl;
        cout << "What I can do?" << endl;
        cout << "1 - add money" << endl;
        cout << "2 - withdraw money" << endl;
        cin >> Writing2;
        if (Writing2 == '1'){
           cout << "How much money do you want to add to the account?" << endl;
           cin >> AddMoney;
           Money += AddMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
        if (Writing2 == '2'){
           cout << "How much money do you want to withdraw?" << endl;
           cin >> WithdrawMoney;
           Money -= WithdrawMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
    }while (Confirmation == '1' || Confirmation == '1');
}

void AccountFive()
{
    string Pincode;
    cout << "Enter your pin code: " << endl;
    cin >> Pincode;
    if (Pincode != "5555"){
        cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
        cin >> Pincode;
        if (Pincode != "5555"){
            cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
            cin >> Pincode;
            if (Pincode != "5555"){
                cout << "You have used all attempts to log in to your account. Your account has been blocked.";
            }
            else{
                ScoreFive();
            }
        }
        else {
            ScoreFive();
        }
    }
    else {
        ScoreFive();
    }
}

void ScoreFive()
{
    char Writing2, Confirmation;
    int Money = 20000, AddMoney, WithdrawMoney;
    do {
        cout << "" << endl;
        cout << "Hello Vadim" << endl;
        cout << "Your money: " << Money << "$" << endl;
        cout << "What I can do?" << endl;
        cout << "1 - add money" << endl;
        cout << "2 - withdraw money" << endl;
        cin >> Writing2;
        if (Writing2 == '1'){
           cout << "How much money do you want to add to the account?" << endl;
           cin >> AddMoney;
           Money += AddMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
        if (Writing2 == '2'){
           cout << "How much money do you want to withdraw?" << endl;
           cin >> WithdrawMoney;
           Money -= WithdrawMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
    }while (Confirmation == '1' || Confirmation == '1');
}

void AccountSix()
{
    string Pincode;
    cout << "Enter your pin code: " << endl;
    cin >> Pincode;
    if (Pincode != "6666"){
        cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
        cin >> Pincode;
        if (Pincode != "6666"){
            cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
            cin >> Pincode;
            if (Pincode != "6666"){
                cout << "You have used all attempts to log in to your account. Your account has been blocked.";
            }
            else{
                ScoreSix();
            }
        }
        else {
            ScoreSix();
        }
    }
    else {
        ScoreSix();
    }
}

void ScoreSix()
{
    char Writing2, Confirmation;
    int Money = 10000, AddMoney, WithdrawMoney;
    do {
        cout << "" << endl;
        cout << "Hello Danyil" << endl;
        cout << "Your money: " << Money << "$" << endl;
        cout << "What I can do?" << endl;
        cout << "1 - add money" << endl;
        cout << "2 - withdraw money" << endl;
        cin >> Writing2;
        if (Writing2 == '1'){
           cout << "How much money do you want to add to the account?" << endl;
           cin >> AddMoney;
           Money += AddMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
        if (Writing2 == '2'){
           cout << "How much money do you want to withdraw?" << endl;
           cin >> WithdrawMoney;
           Money -= WithdrawMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
    }while (Confirmation == '1' || Confirmation == '1');
}

void AccountSeven()
{
    string Pincode;
    cout << "Enter your pin code: " << endl;
    cin >> Pincode;
    if (Pincode != "7777"){
        cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
        cin >> Pincode;
        if (Pincode != "7777"){
            cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
            cin >> Pincode;
            if (Pincode != "7777"){
                cout << "You have used all attempts to log in to your account. Your account has been blocked.";
            }
            else{
                ScoreSeven();
            }
        }
        else {
            ScoreSeven();
        }
    }
    else {
        ScoreSeven();
    }
}

void ScoreSeven()
{
    char Writing2, Confirmation;
    int Money = 0, AddMoney, WithdrawMoney;
    do {
        cout << "" << endl;
        cout << "Hello Andrey" << endl;
        cout << "Your money: " << Money << "$" << endl;
        cout << "What I can do?" << endl;
        cout << "1 - add money" << endl;
        cout << "2 - withdraw money" << endl;
        cin >> Writing2;
        if (Writing2 == '1'){
           cout << "How much money do you want to add to the account?" << endl;
           cin >> AddMoney;
           Money += AddMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
        if (Writing2 == '2'){
           cout << "How much money do you want to withdraw?" << endl;
           cin >> WithdrawMoney;
           Money -= WithdrawMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
    }while (Confirmation == '1' || Confirmation == '1');
}

void AccountEight()
{
    string Pincode;
    cout << "Enter your pin code: " << endl;
    cin >> Pincode;
    if (Pincode != "8888"){
        cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
        cin >> Pincode;
        if (Pincode != "8888"){
            cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
            cin >> Pincode;
            if (Pincode != "8888"){
                cout << "You have used all attempts to log in to your account. Your account has been blocked.";
            }
            else{
                ScoreEight();
            }
        }
        else {
            ScoreEight();
        }
    }
    else {
        ScoreEight();
    }
}

void ScoreEight()
{
    char Writing2, Confirmation;
    int Money = 1000000, AddMoney, WithdrawMoney;
    do {
        cout << "" << endl;
        cout << "Hello Yan" << endl;
        cout << "Your money: " << Money << "$" << endl;
        cout << "What I can do?" << endl;
        cout << "1 - add money" << endl;
        cout << "2 - withdraw money" << endl;
        cin >> Writing2;
        if (Writing2 == '1'){
           cout << "How much money do you want to add to the account?" << endl;
           cin >> AddMoney;
           Money += AddMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
        if (Writing2 == '2'){
           cout << "How much money do you want to withdraw?" << endl;
           cin >> WithdrawMoney;
           Money -= WithdrawMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
    }while (Confirmation == '1' || Confirmation == '1');
}

void AccountNine()
{
    string Pincode;
    cout << "Enter your pin code: " << endl;
    cin >> Pincode;
    if (Pincode != "9999"){
        cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
        cin >> Pincode;
        if (Pincode != "9999"){
            cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
            cin >> Pincode;
            if (Pincode != "9999"){
                cout << "You have used all attempts to log in to your account. Your account has been blocked.";
            }
            else{
                ScoreNine();
            }
        }
        else {
            ScoreNine();
        }
    }
    else {
        ScoreNine();
    }
}

void ScoreNine()
{
    char Writing2, Confirmation;
    int Money = 11, AddMoney, WithdrawMoney;
    do {
        cout << "" << endl;
        cout << "Hello Danya" << endl;
        cout << "Your money: " << Money << "$" << endl;
        cout << "What I can do?" << endl;
        cout << "1 - add money" << endl;
        cout << "2 - withdraw money" << endl;
        cin >> Writing2;
        if (Writing2 == '1'){
           cout << "How much money do you want to add to the account?" << endl;
           cin >> AddMoney;
           Money += AddMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
        if (Writing2 == '2'){
           cout << "How much money do you want to withdraw?" << endl;
           cin >> WithdrawMoney;
           Money -= WithdrawMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
    }while (Confirmation == '1' || Confirmation == '1');
}

void AccountTen()
{
    string Pincode;
    cout << "Enter your pin code: " << endl;
    cin >> Pincode;
    if (Pincode != "0000"){
        cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
        cin >> Pincode;
        if (Pincode != "0000"){
            cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
            cin >> Pincode;
            if (Pincode != "0000"){
                cout << "You have used all attempts to log in to your account. Your account has been blocked.";
            }
            else{
                ScoreTen();
            }
        }
        else {
            ScoreTen();
        }
    }
    else {
        ScoreTen();
    }
}

void ScoreTen()
{
    char Writing2, Confirmation;
    int Money = 10, AddMoney, WithdrawMoney;
    do {
        cout << "" << endl;
        cout << "Hello Kostya" << endl;
        cout << "Your money: " << Money << "$" << endl;
        cout << "What I can do?" << endl;
        cout << "1 - add money" << endl;
        cout << "2 - withdraw money" << endl;
        cin >> Writing2;
        if (Writing2 == '1'){
           cout << "How much money do you want to add to the account?" << endl;
           cin >> AddMoney;
           Money += AddMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
        if (Writing2 == '2'){
           cout << "How much money do you want to withdraw?" << endl;
           cin >> WithdrawMoney;
           Money -= WithdrawMoney;
           cout << "If you want to return to the main account, press 1, press another key to exit." << endl;
           cin >> Confirmation;
        }
    }while (Confirmation == '1' || Confirmation == '1');
}
