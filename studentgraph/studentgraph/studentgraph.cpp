#include <iostream>
#include <string>
using namespace std;

int main() {
    int member;
    string str;

    cout << "����ɂ���!"
        "���ъǗ��V�X�e���ł��B\n�܂����߂ɐ��k�̐l������͂��Ă�����!("
        "50�l�ȉ�)"
        << endl;

    cin >> member;

    if (member >= 50) {
        cout << "�l�������e�͈͂𒴂��Ă��܂�" << endl;
    }
    else {
        cout << member << "�l�ł�낵���ł���?\n��낵�����OK����͂��Ă�������!"
            << endl;
        cin >> str;
    }

    if (str == "OK" || str == "ok") {
        cout << "�V�X�e�����J�n���܂�" << endl;

        string* name = new string[member];
        int* scorenL = new int[member];
        int* scoreMath = new int[member];
        int* scoreScience = new int[member];
        int* scoreSociety = new int[member];
        int* scoreEnglish = new int[member];

        cout << "���k�̖��O����͂��Ă�������!" << endl;

        for (int i = 0; i < member; ++i) {
            cin >> name[i];
        }

        cout << "���k��\�����܂��B" << endl;

        for (int i = 0; i < member; ++i) {
            cout << i + 1 << "��" << name[i] << endl;
        }

        for (int i = 0; i < member; ++i) {

            cout << i + 1 << "��" << name[i] << "����̍���̓_������͂��Ă��������B"
                << endl
                << endl;
            cin >> scorenL[i];
            cout << scorenL[i] << "�_" << endl;
        }

        for (int i = 0; i < member; ++i) {

            cout << i + 1 << "��" << name[i] << "����̐��w�̓_������͂��Ă��������B"
                << endl
                << endl;
            cin >> scoreMath[i];
        }

        for (int i = 0; i < member; ++i) {

            cout << i + 1 << "��" << name[i] << "����̗��Ȃ̓_������͂��Ă��������B"
                << endl
                << endl;
            cin >> scoreScience[i];
        }

        for (int i = 0; i < member; ++i) {

            cout << i + 1 << "��" << name[i] << "����̎Љ�̓_������͂��Ă��������B"
                << endl
                << endl;
            cin >> scoreSociety[i];
        }

        for (int i = 0; i < member; ++i) {

            cout << i + 1 << "��" << name[i] << "����̉p��̓_������͂��Ă��������B"
                << endl
                << endl;
            cin >> scoreEnglish[i];
        }

        cout << "���k�̓_����S�ĕ\�����܂���?\n��낵�����ok����͂��Ă�������"
            << endl;

        str = "reset";
        cin >> str;
        if (str == "ok" || str == "OK") {

            /*int totalscorenL;
            int totalscoreMath;
            int totalscoreScience;
            int totalSociety;
            int totalEnglish;
            int total;*/
            for (int i = 0; i < member; ++i) {

                cout << i + 1 << "��" << name[i] << "����" << endl;
                cout << "================================" << endl;
                cout << "����:" << scorenL[i] << "�_" << endl;
                cout << "--------------------------------" << endl;
                cout << "���w:" << scoreMath[i] << "�_" << endl;
                cout << "--------------------------------" << endl;
                cout << "����:" << scoreScience[i] << "�_" << endl;
                cout << "--------------------------------" << endl;
                cout << "�Љ�:" << scoreSociety[i] << "�_" << endl;
                cout << "--------------------------------" << endl;
                cout << "�p��:" << scoreEnglish[i] << "�_" << endl << endl;

                /*totalscorenL = scorenL[i];
                cout << totalscorenL << endl;
                totalscoreMath += scoreMath[i];
                totalscoreScience += scoreScience[i];
                totalSociety += scoreSociety[i];
                totalEnglish += scoreEnglish[i];

                total += totalscorenL + totalscoreMath + totalscoreScience +
                    totalSociety + totalEnglish;*/
            }

            /*cout << "���k�̍���̕��ϓ_��" << totalscorenL / member << "�_" << endl;
            cout << "���k�̐��w�̕��ϓ_��" << totalscoreMath / member << "�_" << endl;
            cout << "���k�̗��Ȃ̕��ϓ_��" << totalscoreScience / member << "�_"
                 << endl;
            cout << "���k�̎Љ�̕��ϓ_��" << totalSociety / member << "�_" << endl;
            cout << "���k�̉p��̕��ϓ_��" << totalEnglish / member << "�_" << endl;

            cout << "���k�̕��ϓ_��" << total / member * 5 << "�_" << endl;
          }*/

            delete[] name;
            delete[] scorenL;
            delete[] scoreMath;
            delete[] scoreScience;
            delete[] scoreSociety;
            delete[] scoreEnglish;
        }
        else {
            cout << "�V�X�e�����I�����܂����B" << endl;
        }
    }
}
