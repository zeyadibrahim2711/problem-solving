#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numberoffriends, heightoffence, person;
    int width = 0;

    cin >> numberoffriends >> heightoffence;

    for (int i = 0; i < numberoffriends; i++)
    {
        cin >> person;

        if (person > heightoffence)
        {
            width = width + 2;
        }
        else
        {
            width = width + 1;
        }
    }

    cout << width << endl;
}
