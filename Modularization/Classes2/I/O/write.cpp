#include <iostream>
#include <cstring> // or else string.h
int main()
{
    using std::cout;
    using std::endl;
    const char * state1 = "Florida";
    const char * state2 = "Kansas";
    const char * state3 = "Euphoria";
    int len = std::strlen(state1);
    cout << "Increasing loop index:\n";
    int i;
    for (i = 1; i <= len; i++)  
    {
        cout.write(state1,i);
        cout << endl;
    }
// 1074 Chapter 17 Input, Output, and Files
// concatenate output
    cout << "Decreasing loop index:\n";
for (i = len; i > 0; i--)
    cout.write(state1,i) << endl;
// exceed string length
cout << "Exceeding string length:\n";
cout.write(state1, len + 5) << endl;
return 0;
}