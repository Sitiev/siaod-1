#include <iostream>
#include <string>
#include <vector>
#include "functions.h"
using namespace std;

int main()
{   
    int body = 0;
    while (body != 10) {
        cout << " Exercise 1 Variant 18 \n Choose type of array: \n 1. Static \n 2. Dynamic \n 3. Vector \n Or you can exit just write 10: ";
        cin >> body;
        if (body == 1) {
            int mas[N], n, checker = 0;
            cout << " Enter amount of elements in array:";
            while (checker == 0) {
                cin >> n;
                if (n < 0 || n > N) {
                    cout << " You entered wrong number \n Enter new one \n";

                }
                else {
                    checker = 1;
                }
            }
            intputStaticAr(mas, n);
            cout << " Exercise 1: \n Index of number that you need is " << mainWorkPointOneOne(mas) << " \n";
            cout << " Exercise 2: \n ";
            mainWorkPointOneTwo(mas, n);
            cout << "\n";
            cout << " Exercise 3: \n ";
            mainWorkPointOneThree(mas, n);
            cout << "\n";

        }
        if (body == 2) {
            int *mas = new int[N], n, checker = 0;
            cout << " Enter amount of elements in array:";
            while (checker == 0) {
                cin >> n;
                if (n < 0 || n > N) {
                    cout << " You entered wrong number \n Enter new one \n";

                }
                else {
                    checker = 1;
                }
            }
            intputDynamicAr(mas, n);
            cout << " Exercise 1: \n Index of number that you need is " << mainWorkPointTwoOne(mas) << " \n";
            cout << " Exercise 2: \n ";
            mainWorkPointTwoTwo(mas, n);
            cout << "\n";
            cout << " Exercise 3: \n ";
            mainWorkPointTwoThree(mas, n);
            cout << "\n";
        }
        if (body == 3) {
            vector<int> mas;
            int n, checker = 0;
            cout << " Enter amount of elements in array:";
            while (checker == 0) {
                cin >> n;
                if (n < 0 || n > N) {
                    cout << " You entered wrong number \n Enter new one \n";

                }
                else {
                    checker = 1;
                }
            }
            mas.resize(n);
            intputDynamicAr(&mas, n);
            cout << " Exercise 1: \n Index of number that you need is " << mainWorkPointThreeOne(&mas, n) << " \n";
            cout << " Exercise 2: \n ";
            mainWorkPointThreeTwo(&mas, n);
            cout << "\n";
            cout << " Exercise 3: \n ";
            mainWorkPointThreeThree(&mas, n);
            cout << "\n";
            
            //intputDynamicAr(mas, n);
            //otputArr(mas, n);
        }
        if (body == 10) {
            return 0;
        }
    }
}
