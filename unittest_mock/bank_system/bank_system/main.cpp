#include <iostream>
#include "account.h"

int main(void)
{
    string id, name;
    int balance, student_num;
    cout << "총 학생 수 입력: ";
    cin >> student_num;

    Account** accounts = new Account * [student_num];
    for (int i = 0; i < student_num; ++i) {
        cout << i + 1 << "번째 학생 계좌 입력 : 학번 : ";
        cin >> id;
        cout << endl;
        for (int j = 0; j < i; ++j) {
            if (accounts[j]->getId() == id) {
                cout << "중복된 학번이 존재합니다." << endl;
                for (int k = 0; k < i + 1; ++k) {
                    delete accounts[k];
                }
                delete[] accounts;
                return 0;
            }
        }
        cout << "이름 : ";
        cin >> name;
        cout << endl;
        cout << "잔액 : ";
        cin >> balance;

        accounts[i] = new Account(id, name, balance);

        cout << "==============================" << endl << endl;
    }

    cout << "회수된 금액 : " << Account::getTotal_balance() << endl;

    for (int i = 0; i < student_num; ++i) {
        delete accounts[i];
    }
    delete[] accounts;
    return 0;
}
