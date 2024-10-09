#include <iostream>

using namespace std;

int main()
{
    int bilangan;

    cout << "masukan bilangan :" ;
    cin >> bilangan;

    if (bilangan % 2 == 0 && bilangan % 3 == 0) {
        cout << "MERUPAKAN BILANGAN GENAP DAN KELIPATAN 3" << endl;
    } else if (bilangan % 2 == 0) {
        cout << "MERUPAKAN BILANGAN GENAP DAN BUKAN KELIPATAN 3" << endl;
    } else if (bilangan % 2 == 1 && bilangan % 3 == 0) {
        cout << "MERUPAKAN BILANGAN GANJIL DAN KELIPATAN 3" << endl;
    } else {
        cout << "MERUPAKAN BILANGAN GANJIL DAN BUKAN KELIPATAN 3" << endl;
    }
    return 0;
}
