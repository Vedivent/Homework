// shaydulin
#include <stdio.h>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
//I had simlified the task


class Transport
{
public:
    Transport();
    ~Transport();

protected:
    double GetCost() { return cost; }
    void SetCost(double other) { cost = other; }
    double cost;
    std::string GetDestiny() { return destiny; }
    void SetDestiny(std::string other) { destiny = other; }
    std::string destiny;
};

class Transport1 : Transport
{
public:
    Transport1();
    ~Transport1();
    char GetField1() { return field1; }
    char SetField1(char other) { field1 = other; }
    char GetField2() { return field2; }
    char SetField2(char other) { field2 = other; }

private:
    char field1;
    char field2;
};

class Transport2 : Transport
{
public:
    Transport2();
    ~Transport2();
    char GetField1() { return field1; }
    char SetField1(char other) { field1 = other; }
    char GetField2() { return field2; }
    char SetField2(char other) { field2 = other; }

private:
    char field1;
    char field2;
};
