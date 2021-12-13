#include <iostream>

using namespace std;

class SimpleCalculator
{
protected:
    int num1, num2;
    char op;

public:
    void set_Data_Simple_Calculator(int a, int b, char c)
    {
        num1 = a;
        num2 = b;
        op = c;
    }

    void show_Simple_Calculator()
    {
        int res;

        switch (op)
        {
        case '+':
            res = num1 + num2;
            cout << "the addition of num1 and num2 is " << res << endl;
            break;

        case '-':
            res = num1 - num2;
            cout << "the subtraction of num1 and num2 is " << res << endl;
            break;

        case '*':
            res = num1 * num2;
            cout << "the multiplication of num1 and num2 is " << res << endl;
            break;

        case '/':
            res = num1 / num2;
            cout << "the division of num1 and num2 is " << res << endl;
            break;

        default:
            cout << "please choose correct operator" << endl;
        }
    }
};

class ScientificCalculator
{
protected:
    int num3, num4;
    char op1;

public:
    void set_Data_Scientific_Calculator(int a, int b, char c)
    {
        num3 = a;
        num4 = b;
        op1 = c;
    }

    void show_Scientific_Calculator()
    {
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    SimpleCalculator s;
    ScientificCalculator s1;
    HybridCalculator s2;

    int choose;
    int num1, num2;
    char op;

    cout << "enter 1 for simple calculating , 2 for scientific calculating and 3 for hybrid /n calculating " << endl;
    cin >> choose;

    switch (choose)
    {
    case 1:
        cout << "enter first , second number and operator respectively" << endl;
        cin >> num1 >> num2 >> op;

        s.set_Data_Simple_Calculator(num1, num2, op);
        s.show_Simple_Calculator();
        break;

    case 2:
        cout << "work in progress " << endl;
        break;

    case 3:
        cout << "work in progress" << endl;
        break;

    default:
        cout << "please choose correct options" << endl;
    }
}