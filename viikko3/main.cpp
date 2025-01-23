#include <iostream>
#include "kokki.h"

using namespace std;

int main()
{
    ItalianChef myItalianChef("Giovanni");

    myItalianChef.askSecret("pizza", 12, 12);
    myItalianChef.askSecret("wrongpassword", 12, 12);

    return 0;
}
