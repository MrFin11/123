#include <iostream>
using namespace std;
/*int main()
{
    char a[10] = "123456789";
    char b[10];
    bool d = true;
    int dlin=0;
    cin >> b;
    for (int j = 0; b[j] != '\0'; j++)
    {
        dlin++;

    }
  
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != b[i])
        {
            d = false;
            break;




        }
    }
    if (dlin > 8)
        cout << "Korotkiy" << endl;
    else if (d == true) {
        cout << "Verno" << endl;
    }
    else {
        cout << "Parol ne Verniy" << endl;
    }
}*/
int main()
{
    char c[10];
    char rev[10];
    int dl=0;
    cin.getline(c,10);
    for (int i = 0; c[i] != '\0'; i++)
    {
        dl++;
    }
    
    for (int i = 0; c[i] != '\0'; i++)
    {
        rev[i] = c[dl-1-i];
    }
    rev[dl] = '\0';
    cout << rev << endl;
}