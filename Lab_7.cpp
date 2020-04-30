#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    //Массив с диапозоном значений [11-90]
    // Выделение памяти под массив
    int a = 8,
        c = 4,
        b = 10;

    // Выделение памяти под массив
    int* arr2;
    arr2 = new int[c * b];

    int arr[8][10] = { 36, 69, 60, 21, 27, 13, 74, 25, 15, 61,
                       75, 54, 63, 55, 40, 76, 38, 44, 29, 77,
                       85, 39, 62, 30, 59, 79, 33, 37, 82, 73,
                       14, 71, 88, 22, 43, 18, 67, 41, 53, 66,
                       64, 34, 31, 16, 23, 28, 84, 70, 20, 24,
                       86, 32, 56, 89, 47, 26, 78, 17, 81, 19,
                       80, 52, 65, 49, 42, 83, 50, 87, 72, 11,
                       68, 45, 51, 46, 58, 35, 90, 57, 48, 12 };
    int x;
    cout << "Введите число в диапозоне [11-90] >> ";
    cin >> x;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[i][j] == x && j%2!=0) {
                cout << endl<<"Число находится в "<<j+1<<" столбце, в "<<i+1<<" строке"<<endl;
                break;
            }
        }
    }

    int w = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 10; j++) {
            if (j % 2 != 0) {
                arr2[w] = arr[i][j];
            }
            w++;
        }
    }


    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
