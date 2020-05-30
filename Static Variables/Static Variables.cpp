// Static Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// .h header file
class Test
{
public:
    static int const MAX = 99;

private:
    int id;
    static int count;

public:
    Test() {
        id = ++count;
    }

    int getId()
    {
        return id;
    }

    static void showInfo()
    {
        cout << count << endl;
    }
};

// .cpp source file
int Test::count = 0;

int main()
{
    cout << Test::MAX << endl;
    Test test1;
    Test test2;

    cout << test1.getId() << endl;
    cout << test2.getId() << endl;

    Test::showInfo();
    
    return 0;
}

