#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string str = "I am coding ...";
    istringstream is(str);
    do
    {
        string substr;
        is >> substr;
        cout << substr << endl;
    } while (is);
    return 0;
}