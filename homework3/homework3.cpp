// homework3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

extern int a;
extern int b;
extern int c;
extern int d;

int main()
{
    {
        float result1 = 0.0f;
        float result2 = 0.0f;

        result1 = a * (b + static_cast<float>(c) / d);
        result2 = a * (b + float(c) / d);

        std::cout << "result1 = " << result1 << std::endl;
        std::cout << "result2 = " << result2 << std::endl;
    }

    {
        int number = 0;
        int reference = 21;
        int comparisonResult = 0;

        std::cout << "enter an integer: ";
        std::cin >> number;
        std::cout << std::endl;

        comparisonResult = (number <= reference) ? number - reference : (number - reference) << 1;

        std::cout << "comparison result = " << comparisonResult << std::endl << std::endl;
    }

    {
        int array[3][3][3] = { { {  1,  2,  3 }, {  4,  5,  6 }, {  7,  8,  9 } },
                               { { 10, 11, 12 }, { 13, 14, 15 }, { 16, 17, 18 } },
                               { { 19, 20, 21 }, { 22, 23, 24 }, { 25, 26, 27 } } };

        int* pArray1 = array[1][1];
        int* pArray2 = &array[1][1][1];

        std::cout << " array element [1][1][1]: " << array[1][1][1] << std::endl;
        std::cout << " adress of array element [1][1][1]: " << &array[1][1][1] << std::endl << std::endl;

        std::cout << " array element [1][1][1]: " << *(array[1][1] + 1) << std::endl;
        std::cout << " adress of array element [1][1][1]: " << array[1][1] + 1 << std::endl << std::endl;

        std::cout << " array element [1][1][1]: " << *(pArray1 + 1) << std::endl;
        std::cout << " adress of array element [1][1][1]: " << pArray1 + 1 << std::endl << std::endl;

        std::cout << " array element [1][1][1]: " << *pArray2 << std::endl;
        std::cout << " adress of array element [1][1][1]: " << pArray2 << std::endl << std::endl;

    }
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
