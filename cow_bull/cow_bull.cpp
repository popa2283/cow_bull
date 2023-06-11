#include  <iostream>
#include <time.h>  
#include <vector>  
#include <string>  
#include<Windows.h>  
#include < math.h>  
#include <algorithm> 
#include <fstream> 
#include <map> 
using namespace std;
HANDLE hand = GetStdHandle(STD_OUTPUT_HANDLE);
int main()
{
    srand(time(NULL));
    int rand_number;
    vector<int>vec_rand;
    int d = 0;
    int s = 0;
    int user = 0;
    while (d < 5) {
        rand_number = rand() % 10;
        if (d == 0) {
            vec_rand.push_back(rand_number);
            d++;
        }
        else {
            for (size_t i = 0; i < vec_rand.size(); i++)
            {
                if (vec_rand[i] == rand_number) {
                    s++;
                }
            }
            if (s == 0) {
                vec_rand.push_back(rand_number);
                d++;

            }
            s = 0;
        }
    }

    int cow = 0;
    int g = 0;
    while (true)
    {


        for (size_t i = 0; i < vec_rand.size(); i++)
        {
            cin >> user;
            g++;
            if (user == vec_rand[i]) {
                cout << "cow" << endl;
                cow++;
            }
            else {
                for (size_t i = 0; i < vec_rand.size(); i++)
                {
                    if (vec_rand[i] == user) {
                        cout << "bull" << endl;
                    }
                }
            }
        }


        if (g == 5) {
            if (cow == 5) {
                system("cls");
                cout << "victory" << endl;
                break;
            }
            if (cow != 5) {
                cow = 0;
                Sleep(500);
                system("cls");

            }
            g = 0;
        }

    }

}


