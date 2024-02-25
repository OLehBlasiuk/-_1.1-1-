#pragma once
using namespace std;
class Goods 
{
 private:
    double first;
    unsigned int second;
 public:
    Goods();
    Goods(double price, unsigned int Numbers);
    
    double getPrice() const;
    unsigned int getNumbers() const;
    
    void setPrice(double price);
    void setNumbers(unsigned int Numbers);
    void Init(double price, unsigned int Numbers);
    void Read();
    void Display() const;
    double cost() const;
};

