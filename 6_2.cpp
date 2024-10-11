#include <iostream>
#include <windows.h>
#include <vector>
#include <list>
#include <set>

using namespace std;

template<class T> void Print(T container)
{
    auto i = container.begin();

    while (i != container.end())
    {
        cout << *i << " ";
        i++;
    }
    cout << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    set<string> test_set = { "one", "two", "three", "four" };
    list<string> test_list = { "one", "two", "three", "four" };
    vector<string> test_vector = { "one", "two", "three", "four" };

    Print(test_set);
    Print(test_list);
    Print(test_vector);

    return 0;
}