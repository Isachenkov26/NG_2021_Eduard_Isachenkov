#include <iostream>

using namespace std;

//Removed features

int main()
{
    char Writing;
    cout << "============================" << endl;
    cout << "Bank account:\n0-Kostya_Zadorozhny \n1-Jonas_Freide \n2-Piter_Parker \n3-Eduard_Isachenkov \n4-Roman_Tkachuk \n5-Vadim_Harbar \n6-Danyil_Mykytenko \n7-Andrey_Kobiz \n8-Yan_Kozlov \n9-Danya_Yurchenko" << endl;
    cout << "============================" << endl;
    cin >> Writing;
    if (Writing == '1'){
        string Pincode;
        cout << "Enter your pin code: " << endl;
        cin >> Pincode;
        if (Pincode != "1111"){
            cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
            cin >> Pincode;
        }
        else {
        char Writing2, Confirmation;
        int Money = 500, AddMoney, WithdrawMoney;
        do {
            cout << endl;
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
            if (Pincode != "1111"){
                cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
                cin >> Pincode;
            }
            else {
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
                if (Pincode != "1111"){
                    cout << "You have used all attempts to log in to your account. Your account has been blocked.";
                }
                else{
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
    }
    if (Writing == '2')
    {
        string Pincode;
        cout << "Enter your pin code: " << endl;
        cin >> Pincode;
        if (Pincode != "2222"){
            cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
            cin >> Pincode;
        }
        else {
        char Writing2, Confirmation;
        int Money = 1500, AddMoney, WithdrawMoney;
        do {
            cout << endl;
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
            if (Pincode != "2222"){
                cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
                cin >> Pincode;
            }
            else {
            char Writing2, Confirmation;
            int Money = 1500, AddMoney, WithdrawMoney;
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
                if (Pincode != "2222"){
                    cout << "You have used all attempts to log in to your account. Your account has been blocked.";
                }
                else{
                char Writing2, Confirmation;
                int Money = 1500, AddMoney, WithdrawMoney;
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
    }
    if (Writing == '3')
    {
        string Pincode;
        cout << "Enter your pin code: " << endl;
        cin >> Pincode;
        if (Pincode != "3333"){
            cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
            cin >> Pincode;
        }
        else {
        char Writing2, Confirmation;
        int Money = 2500, AddMoney, WithdrawMoney;
        do {
            cout << endl;
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
            if (Pincode != "3333"){
                cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
                cin >> Pincode;
            }
            else {
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
                if (Pincode != "3333"){
                    cout << "You have used all attempts to log in to your account. Your account has been blocked.";
                }
                else{
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
    }
    if (Writing == '4')
    {
        string Pincode;
        cout << "Enter your pin code: " << endl;
        cin >> Pincode;
        if (Pincode != "4444"){
            cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
            cin >> Pincode;
        }
        else {
        char Writing2, Confirmation;
        int Money = 3500, AddMoney, WithdrawMoney;
        do {
            cout << endl;
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
            if (Pincode != "4444"){
                cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
                cin >> Pincode;
            }
            else {
            char Writing2, Confirmation;
            int Money = 3500, AddMoney, WithdrawMoney;
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
                if (Pincode != "4444"){
                    cout << "You have used all attempts to log in to your account. Your account has been blocked.";
                }
                else{
                char Writing2, Confirmation;
                int Money = 3500, AddMoney, WithdrawMoney;
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
    }
    if (Writing == '5')
    {
        string Pincode;
        cout << "Enter your pin code: " << endl;
        cin >> Pincode;
        if (Pincode != "5555"){
            cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
            cin >> Pincode;
        }
        else {
        char Writing2, Confirmation;
        int Money = 4500, AddMoney, WithdrawMoney;
        do {
            cout << endl;
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
            if (Pincode != "5555"){
                cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
                cin >> Pincode;
            }
            else {
            char Writing2, Confirmation;
            int Money = 4500, AddMoney, WithdrawMoney;
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
                if (Pincode != "5555"){
                    cout << "You have used all attempts to log in to your account. Your account has been blocked.";
                }
                else{
                char Writing2, Confirmation;
                int Money = 4500, AddMoney, WithdrawMoney;
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
    }
    if (Writing == '6')
    {
        string Pincode;
        cout << "Enter your pin code: " << endl;
        cin >> Pincode;
        if (Pincode != "6666"){
            cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
            cin >> Pincode;
        }
        else {
        char Writing2, Confirmation;
        int Money = 5500, AddMoney, WithdrawMoney;
        do {
            cout << endl;
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
            if (Pincode != "6666"){
                cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
                cin >> Pincode;
            }
            else {
            char Writing2, Confirmation;
            int Money = 5500, AddMoney, WithdrawMoney;
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
                if (Pincode != "6666"){
                    cout << "You have used all attempts to log in to your account. Your account has been blocked.";
                }
                else{
                char Writing2, Confirmation;
                int Money = 5500, AddMoney, WithdrawMoney;
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
    }
    if (Writing == '7')
    {
        string Pincode;
        cout << "Enter your pin code: " << endl;
        cin >> Pincode;
        if (Pincode != "7777"){
            cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
            cin >> Pincode;
        }
        else {
        char Writing2, Confirmation;
        int Money = 6500, AddMoney, WithdrawMoney;
        do {
            cout << endl;
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
            if (Pincode != "7777"){
                cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
                cin >> Pincode;
            }
            else {
            char Writing2, Confirmation;
            int Money = 6500, AddMoney, WithdrawMoney;
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
                if (Pincode != "7777"){
                    cout << "You have used all attempts to log in to your account. Your account has been blocked.";
                }
                else{
                char Writing2, Confirmation;
                int Money = 6500, AddMoney, WithdrawMoney;
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
    }
    if (Writing == '8')
    {
        string Pincode;
        cout << "Enter your pin code: " << endl;
        cin >> Pincode;
        if (Pincode != "8888"){
            cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
            cin >> Pincode;
        }
        else {
        char Writing2, Confirmation;
        int Money = 7500, AddMoney, WithdrawMoney;
        do {
            cout << endl;
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
            if (Pincode != "8888"){
                cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
                cin >> Pincode;
            }
            else {
            char Writing2, Confirmation;
            int Money = 7500, AddMoney, WithdrawMoney;
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
                if (Pincode != "8888"){
                    cout << "You have used all attempts to log in to your account. Your account has been blocked.";
                }
                else{
                char Writing2, Confirmation;
                int Money = 7500, AddMoney, WithdrawMoney;
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
    }
    if (Writing == '9')
    {
        string Pincode;
        cout << "Enter your pin code: " << endl;
        cin >> Pincode;
        if (Pincode != "9999"){
            cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
            cin >> Pincode;
        }
        else {
        char Writing2, Confirmation;
        int Money = 8500, AddMoney, WithdrawMoney;
        do {
            cout << endl;
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
            if (Pincode != "9999"){
                cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
                cin >> Pincode;
            }
            else {
            char Writing2, Confirmation;
            int Money = 8500, AddMoney, WithdrawMoney;
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
                if (Pincode != "9999"){
                    cout << "You have used all attempts to log in to your account. Your account has been blocked.";
                }
                else{
                char Writing2, Confirmation;
                int Money = 8500, AddMoney, WithdrawMoney;
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
    }
    if (Writing == '0')
    {
        string Pincode;
        cout << "Enter your pin code: " << endl;
        cin >> Pincode;
        if (Pincode != "0000"){
            cout << "You entered the wrong PIN code, rewrite your PIN code.(You have 2 attempts left.)" << endl;
            cin >> Pincode;
        }
        else {
        char Writing2, Confirmation;
        int Money = 10500, AddMoney, WithdrawMoney;
        do {
            cout << endl;
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
            if (Pincode != "0000"){
                cout << "You entered the wrong PIN code, rewrite your PIN code. (You have 1 attempts left.)" << endl;
                cin >> Pincode;
            }
            else {
            char Writing2, Confirmation;
            int Money = 10500, AddMoney, WithdrawMoney;
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
                if (Pincode != "0000"){
                    cout << "You have used all attempts to log in to your account. Your account has been blocked.";
                }
                else{
                char Writing2, Confirmation;
                int Money = 10500, AddMoney, WithdrawMoney;
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
    }
    return 0;
}
