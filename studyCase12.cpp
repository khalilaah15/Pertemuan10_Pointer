#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num = 10;
    int *ptr = &num;
    cout << "Nilai: " << *ptr << endl;
    return 0;
}

