#include <iostream>

using namespace std;

class shop
{
protected:
    int shop_id;

public:
    void set_shop_id(int x)
    {
        shop_id = x;
    }

    void show_shop_id()
    {
        cout << "your shop id is " << shop_id << endl;
    }
};

class slave : virtual public shop
{
protected:
    int slave_salary;

public:
    void set_slave_salary(int x)
    {
        slave_salary = x;
    }

    void show_slave_salary()
    {
        cout << "slave salary is " << slave_salary << endl;
    }
};

class owner : virtual public shop
{
protected:
    int owner_profit;

public:
    void set_owner_profit(int x)
    {
        owner_profit = x;
    }

    void show_owner_profit()
    {
        cout << "owner profit is " << owner_profit << endl;
    }
};

class total : public slave, public owner
{
public:
    void shop_total()
    {
        int total_x = slave_salary + owner_profit;
        show_shop_id();
        show_slave_salary();
        show_owner_profit();
        cout << "total expense of shop is " << total_x << endl;
    }
};

int main()
{
    total t;
    t.set_shop_id(112);
    t.set_slave_salary(12000);
    t.set_owner_profit(78000);

    t.shop_total();
    return 0;
}