#include <iostream> // Biblioteca para entrada e saída

using namespace std;

int main() {
    int n;
    int temp;
    int soma = 0;

    cin >> n;
    for (int i =0; i<n; i++) {
        cin>> temp;
        soma += temp;
    }

    cout << soma;
    

    return 0; 
}