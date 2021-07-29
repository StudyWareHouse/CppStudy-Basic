#include <iostream>

using namespace std;

int main()
{
    const int kArraySize = 3;
    
    int founding[kArraySize];
    founding[0] = 999;
    founding[1] = 124;
    founding[2] = 940;
    
    cout << "0 : " << founding[0] << endl;
    cout << "1 : " << founding[1] << endl;
    cout << "2 : " << founding[2] << endl;
    
    return 0;
}
