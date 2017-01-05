
#include <stdio.h>
#include <iostream>

using namespace std;

main () {

    int *pi;
    float *pf;

    float b = 4.5;
    int x = 10;

    pf = &b;
    pi = &x;

    cout << "Endereco pf = "<< pf << ".\n";
    cout << "Endereco b = "<< &b << ".\n";
    cout << "Endereco pi = "<< pi << ".\n";
    cout << "Valor pf = "<< *pf << ".\n";
    cout << "Valor pi = "<< *pi << ".\n";

    *pf = 70.6;
    cout << "Valor b = "<< b << ".\n";

}
