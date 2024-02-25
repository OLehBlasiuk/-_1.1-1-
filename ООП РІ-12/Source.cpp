#include <iostream>
#include "goods.h"
using namespace std;
int main() {
    
    Goods Item1;
    Item1.Read();
    Item1.Display();
    cout << "Cost: " << Item1.cost() << endl;

    Goods Item2;
    Item2.Read();
    Item2.Display();
    cout << "Cost: " << Item2.cost() << endl;

    return 0;
}
