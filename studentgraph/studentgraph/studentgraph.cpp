#include <iostream>
#include <string>
using namespace std;

int main() {
    int member;
    string str;

    cout << "こんにちは!"
        "成績管理システムです。\nまず初めに生徒の人数を入力してださい!("
        "50人以下)"
        << endl;

    cin >> member;

    if (member >= 50) {
        cout << "人数が許容範囲を超えています" << endl;
    }
    else {
        cout << member << "人でよろしいですね?\nよろしければOKを入力してください!"
            << endl;
        cin >> str;
    }

    if (str == "OK" || str == "ok") {
        cout << "システムを開始します" << endl;

        string* name = new string[member];
        int* scorenL = new int[member];
        int* scoreMath = new int[member];
        int* scoreScience = new int[member];
        int* scoreSociety = new int[member];
        int* scoreEnglish = new int[member];

        cout << "生徒の名前を入力してください!" << endl;

        for (int i = 0; i < member; ++i) {
            cin >> name[i];
        }

        cout << "生徒を表示します。" << endl;

        for (int i = 0; i < member; ++i) {
            cout << i + 1 << "番" << name[i] << endl;
        }

        for (int i = 0; i < member; ++i) {

            cout << i + 1 << "番" << name[i] << "さんの国語の点数を入力してください。"
                << endl
                << endl;
            cin >> scorenL[i];
            cout << scorenL[i] << "点" << endl;
        }

        for (int i = 0; i < member; ++i) {

            cout << i + 1 << "番" << name[i] << "さんの数学の点数を入力してください。"
                << endl
                << endl;
            cin >> scoreMath[i];
        }

        for (int i = 0; i < member; ++i) {

            cout << i + 1 << "番" << name[i] << "さんの理科の点数を入力してください。"
                << endl
                << endl;
            cin >> scoreScience[i];
        }

        for (int i = 0; i < member; ++i) {

            cout << i + 1 << "番" << name[i] << "さんの社会の点数を入力してください。"
                << endl
                << endl;
            cin >> scoreSociety[i];
        }

        for (int i = 0; i < member; ++i) {

            cout << i + 1 << "番" << name[i] << "さんの英語の点数を入力してください。"
                << endl
                << endl;
            cin >> scoreEnglish[i];
        }

        cout << "生徒の点数を全て表示しますか?\nよろしければokを入力してください"
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

                cout << i + 1 << "番" << name[i] << "さん" << endl;
                cout << "================================" << endl;
                cout << "国語:" << scorenL[i] << "点" << endl;
                cout << "--------------------------------" << endl;
                cout << "数学:" << scoreMath[i] << "点" << endl;
                cout << "--------------------------------" << endl;
                cout << "理科:" << scoreScience[i] << "点" << endl;
                cout << "--------------------------------" << endl;
                cout << "社会:" << scoreSociety[i] << "点" << endl;
                cout << "--------------------------------" << endl;
                cout << "英語:" << scoreEnglish[i] << "点" << endl << endl;

                /*totalscorenL = scorenL[i];
                cout << totalscorenL << endl;
                totalscoreMath += scoreMath[i];
                totalscoreScience += scoreScience[i];
                totalSociety += scoreSociety[i];
                totalEnglish += scoreEnglish[i];

                total += totalscorenL + totalscoreMath + totalscoreScience +
                    totalSociety + totalEnglish;*/
            }

            /*cout << "生徒の国語の平均点は" << totalscorenL / member << "点" << endl;
            cout << "生徒の数学の平均点は" << totalscoreMath / member << "点" << endl;
            cout << "生徒の理科の平均点は" << totalscoreScience / member << "点"
                 << endl;
            cout << "生徒の社会の平均点は" << totalSociety / member << "点" << endl;
            cout << "生徒の英語の平均点は" << totalEnglish / member << "点" << endl;

            cout << "生徒の平均点は" << total / member * 5 << "点" << endl;
          }*/

            delete[] name;
            delete[] scorenL;
            delete[] scoreMath;
            delete[] scoreScience;
            delete[] scoreSociety;
            delete[] scoreEnglish;
        }
        else {
            cout << "システムが終了しました。" << endl;
        }
    }
}
