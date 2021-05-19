#include <iostream>

using namespace std;

int main()
{
    int cont = 0, a;
    string vilao;
    cin >> a;
    while (cont < a){
        getline(cin, vilao);
        cout << "Y" <<endl;
        cont++;
    }
    return 0;
}
