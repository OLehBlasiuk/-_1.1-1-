#include "goods.h"
#include <iostream>
using namespace std;
Goods::Goods() {
    first = 0.0;
    second = 0;
}

Goods::Goods(double price, unsigned int Numbers) {
    first = price;
    second = Numbers;
}

double Goods::getPrice() const {
    return first;
}

unsigned int Goods::getNumbers() const {
    return second;
}

void Goods::setPrice(double price) {
    if (price >= 0)
        first = price;
    else
       cout << " Price cannot be negative.\n";
}

void Goods::setNumbers(unsigned int Numbers) {
    if (Numbers >= 0)
        second = Numbers;
    else
        cout << "Numbers cannot be negative.\n";
}

void Goods::Init(double price, unsigned int Numbers) {
    setPrice(price);
    setNumbers(Numbers);
}

void Goods::Read() {
   cout << "Enter price: ";
    cin >> first;
    cout << "Enter Numbers: ";
    cin >> second;
}

void Goods::Display() const {
    cout << "Price: " << first << ", Numbers: " << second << endl;
}

double Goods::cost() const {
    return first * second;
}

Goods makeGoods(double price, unsigned int Numbers) {
    if (price < 0 || Numbers < 0) {
        cout << "Price and Numbers must be non-negative.\n";
        exit(1);
    }
    return Goods(price, Numbers);
}
