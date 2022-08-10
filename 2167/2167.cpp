/*Ao observar a curva de velocidade de um motor, o engenheiro Zé percebeu que sempre ocorria uma queda quando as medidas eram feitas em intervalos de 10 ms. 
Mas esta queda acontecia em medidas diferentes a cada novo teste do motor.

Zé ficou curioso com essa falta de padrão e quer saber, para cada teste do motor, qual a primeira medida em que ocorre uma queda de velocidade.

Entrada
A entrada é um teste do motor e é dada em duas linhas. A primeira tem o número N de medidas de velocidade do motor (1 < N ≤ 100).
A segunda linha tem N inteiros: o número de RPM (rotações por minuto) Ri de cada medida (0 ≤ Ri ≤ 10000, para todo Ri, tal que 1 ≤ i ≤ N).
Uma medida é considerada uma queda se é menor que a medida anterior.

Saída
A saída é o índice da medida em que houve a primeira queda de velocidade no teste. Caso não aconteça uma queda de velocidade a saída deve ser o número zero.*/

#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    int n, c=0;
    vector <int> rpm;

    cin >> n;

    rpm.reserve(n);

    for (int i=0; i<n; i++){
        cin >> rpm[i];
    }

    for (int i=1; i<n; i++){

        if (rpm[i]<rpm[i-1]){
            c=i+1;
            break;
        }
    }

        cout << c << endl;  
 
    return 0;
}