#include<iostream>
# include<cstdlib>
using namespace std;
int main()
{
    int int_example=1;
    float float_example=2.0;
    double double_example =2.0;

    char char_example='a';
    bool bool_example=true;

    cout << "int_example:" << sizeof(int_example) << endl;
    cout << "float_example:" << sizeof(float_example) << endl;
    cout << "double_example:" << sizeof(double_example) << endl;

    cout << "char_example:" << sizeof(char_example) << endl;
    cout << "bool_example:" << sizeof(bool_example) << endl;

}