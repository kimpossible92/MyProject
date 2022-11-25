// Galls.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
bool findSignInContentArray(char sign, char* arrayToShow, char* arrayWithHiddenContent, int sizeOfArray)
{
    bool isFind = false;
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arrayWithHiddenContent[i] == sign)
        {
            arrayToShow[i] = sign;
            isFind = true;
        }
    }
    return isFind;
}
bool find2(int i,char sign, const char* stringResultNumber) {
    bool isFind = false;
    for (int j = 0; j < sizeof(stringResultNumber); j++) {
        if (i != j && stringResultNumber[j] == sign)
        {
            isFind = true;
        }
    }
    return isFind;
}
int main()
{
    string stringResult;
    cout << "Vvedite simvoli: ";
    cin >> stringResult;
    const char* stringResultNumber = stringResult.c_str();
    //std::cout << "\n";
    char* stringToResult = new char;
    int sizeOfResult = sizeof(stringResultNumber);
    std::string name("");
    for (int i = 0; i < stringResult.size(); i++)
    {
        if (find2(i, stringResultNumber[i], stringResultNumber)) 
        {
            std::cout << ')'; name += ")";
        }
        else
        {
            std::cout << '('; name += "(";
        }
        std::cout << stringToResult << "\n";
        //std::cout << stringResultNumber[i] << "\n";
        //if (findSignInContentArray(stringResultNumber[i],
    }
    std::cout << name << "\n";
    //return 0;
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
