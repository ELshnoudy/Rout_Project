#include "client.h"
#include "admin.h"
using namespace std;
int main()
{
    client c1("mahmoud", 1, "mahmoud111", 2000);
    c1.display();
    c1.deposit(500);
    c1.display();
    c1.withdraw(1000);
    c1.display();
    client c2("Ahmed", 2, "65432561451", 3000);
    c2.display();
    c1.transfer(500, c2);
    c1.display();
    c2.display();
}