#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main() {
	
	init:
	system("cls");
	
	/*criação de variáveis valor1, valor2, tipo e total
	valor1, refere-se ao primeiro valor.
	valor2, refere-se ao segundo valor.
	tipo, refere-se ao tipo de conta.
	total, ao valor total da conta.*/
    int valor1, valor2, tipo, total;
    char ret;
	
	cout << "FASTCALCULATOR V 1.0.0\n" << endl;
    cout << "SEJA BEM VINDO A CALCULADORA EM CPP,\n" << endl;
    
    //Questiona o usuário que tipo de conta ele deseja realizar e o um valor de 1 a 4 é retornado para a variável 'tipo'.
    cout << " INFORME O TIPO DE CONTA QUE DESEJA REALIZAR:" << endl;
    cout << "  [1]SOMA, [2]SUBTRACAO, [3]DIVISAO ou [4]MULTIPLICACAO" << "\n\n > ";
    cin >> tipo;

	//Um primeiro valor aleatório será retornado para a variável 'valor1'.
    cout << "\n INFORME O PRIMEIRO VALOR > ";
    cin >> valor1;
	
	//Um segundo valor aleatório será retornado para a variável 'valor2'.
    cout << " INFORME O SEGUNDO VALOR > ";
    cin >> valor2;

	/* Se o a variável 'tipo' retornar o valor 1, será realizada uma soma entre os valores informados para as variáveis 'valor1' e 'valor2',
	se 'tipo' retornar um valor 2, será feita uma subtração, se 3 uma divisão e 4 uma multiplicação. Caso tipo não se encaixe em um
	valor inteiro de 1 a 4, ou seja 1, 2, 3 ou 4 ele retornará uma mensagem dizendo que nenhuma opção foi selecionada.*/ 
    if(tipo == 1) {
        total = valor1 + valor2;
        cout << " TOTAL: " << valor1 << " + " << valor2 << " = " << total;
    } else if(tipo == 2) {
        total = valor1 - valor2;
        cout << " TOTAL: " << valor1 << " - " << valor2 << " = " << total;
    } else if(tipo == 3) {
        total = valor1 / valor2;
        cout << " TOTAL: " << valor1 << " / " << valor2 << " = " << total;
    } else if(tipo == 4) {
        total = valor1 * valor2;
        cout << " TOTAL: " << valor1 << " * " << valor2 << " = " << total;
    } else {
        cout << "NENHUMA OPCAO FOI SELECIONADA, DESEJA TENTAR NOVAMENTE?" << endl;
    }
    
    /*Ao final da conta ele questiona o usuário se deseja realizar uma nova conta, armazena a resposta na variável char 'ret' de retorno,
    se dentro de ret estiver armazenada o caractere 's' ou 'S', ele volta a tela inicial, caso contrário finaliza o programa com uma mensagem de agradecimento.*/
    cout << "\n\n DESEJA REALIZAR UMA NOVA CONTA? [S]SIM // [N]NAO > ";
    cin >> ret;
    
    if(ret == 's' or ret == 'S') {
    	goto init;
	} else {
		system("cls");
		cout << "OBRIGADO POR USAR O NOSSO PROGRAMA! :)" << endl;
		getch();
	}
}
