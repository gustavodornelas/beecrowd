/*João está trabalhando em uma mina, tentando retirar o máximo que consegue de diamantes "<>". 
Ele deve excluir todas as particulas de areia "." do processo e a cada retirada de diamante, novos diamantes poderão se formar. 
Se ele tem como uma entrada .<...<<..>>....>....>>>., três diamantes são formados. 
O primeiro é retirado de <..>, resultando  .<...<>....>....>>>. 
Em seguida o segundo diamante é retirado, restando .<.......>....>>>. 
O terceiro diamante é então retirado, restando no final .....>>>., sem possibilidade de extração de novo diamante.

Entrada
Deve ser lido um valor inteiro N que representa a quantidade de casos de teste. 
Cada linha a seguir é um caso de teste que contém até 1000 caracteres, incluindo "<,>, ."

Saída
Você deve imprimir a quantidade de diamantes possíveis de serem extraídos em cada caso de entrada.

*/

#include <iostream>
#include <stack>
 
using namespace std;
 
int main() {
 
    int n;

    cin >> n;

    for (int j=0; j<n; j++){

        string temp;
        stack <char> diamante;
        int cont=0;

        cin >> temp;

        for (int i=0; i<temp.length(); i++){
            if (temp[i]=='<'){
                diamante.push(temp[i]);
            }else if (temp[i]=='>' and diamante.size()>0){
                diamante.pop();
                cont++;
            }
        }

        cout << cont << endl;

    }
 
    return 0;
}