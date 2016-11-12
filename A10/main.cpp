#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

//void outputLine(int);

string phone= "4355345";


vector<char> v2 = {'a','b','c'};
vector<char> v3 = {'d','e','f'};
vector<char> v4 = {'g','h','i'};
vector<char> v5 = {'j','k','l'};
vector<char> v6 = {'m','n','o'};
vector<char> v7 = {'p','q','r', 's'};
vector<char> v8 = {'t','u','v'};
vector<char> v9 = {'w','x','y', 'z'};
vector<vector<char>> number;
int main() {

    ofstream outWord;
    outWord.open("test.txt");

    for (char p : phone){
        int i = p - '0';

        if (i == 2){
            number.push_back(v2);
        }

        if (i == 3){
            number.push_back(v3);
        }

        if (i == 4){
            number.push_back(v4);
        }

        if (i == 5){
            number.push_back(v5);
        }

        if (i == 6){
            number.push_back(v6);
        }

        if (i == 7){
            number.push_back(v7);
        }

        if (i == 8){
            number.push_back(v8);
        }

        if (i == 9){
            number.push_back(v9);
        }
    }
    for (vector<char> temp : number){
        for (char item : number[0]) {
            for (char item2 : number[1]) {
                for (char item3 : number[2]){
                    for (char item4 : number[3]){
                        for (char item5 : number[4]){
                            for (char item6 : number[5]){
                                for (char item7 : number[6]){
                                    for (char item8 : number[7]){
                                        outWord << "this is a combo: " << item << item2 << item3 << item4 << item5 << item6 << item7 << item8 << endl;
            }
        }
        }

        }

        }


        }

        }


        }
    }
        outWord.close();


    ifstream myfile;
    myfile.open("test.txt");
    string line;

    if(myfile.is_open()){
        while(getline(myfile, line)){
            cout << line << '\n';
        }
        myfile.close();
    }




    return 0;
}

