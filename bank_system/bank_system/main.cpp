#include <iostream>
#include "account.h"

int main(void)
{
    string id, name;
    int balance, student_num;
    cout << "�� �л� �� �Է�: ";
    cin >> student_num;

    Account** accounts = new Account * [student_num];
    for (int i = 0; i < student_num; ++i) {
        cout << i + 1 << "��° �л� ���� �Է� : �й� : ";
        cin >> id;
        cout << endl;
        for (int j = 0; j < i; ++j) {
            if (accounts[j]->getId() == id) {
                cout << "�ߺ��� �й��� �����մϴ�." << endl;
                for (int k = 0; k < i + 1; ++k) {
                    delete accounts[k];
                }
                delete[] accounts;
                return 0;
            }
        }
        cout << "�̸� : ";
        cin >> name;
        cout << endl;
        cout << "�ܾ� : ";
        cin >> balance;

        accounts[i] = new Account(id, name, balance);

        cout << "==============================" << endl << endl;
    }

    cout << "ȸ���� �ݾ� : " << Account::getTotal_balance() << endl;

    for (int i = 0; i < student_num; ++i) {
        delete accounts[i];
    }
    delete[] accounts;
    return 0;
}
