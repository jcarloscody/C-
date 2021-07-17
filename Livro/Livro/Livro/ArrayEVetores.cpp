//ESTUDO DE ARRAY


// Inicializando um array em uma declaração.
#include <iostream>
#include <iomanip>


using std::cout;
using std::endl;
using std::setw;

int main(){
	// utiliza lista inicializadora para inicializar o array n
	int n[10] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
	cout << "Element" << setw(13) << "Value" << endl; //setw indica o distanciamento é igual a tab \t
	
	for (int i = 0; i < 10; i++)// gera saída do valor de cada elemento do array
		cout << setw(7) << i << setw(13) << n[i] << endl;



	//Especificando o tamanho de um array com uma variável constante e configurando elementos do array com cálculos
	const int arraySize = 10;//Somente constantes podem ser utilizadas para declarar o tamanho de arrays automáticos e estáticos. Não utilizar uma constante
								//para esse propósito é um erro de compilação.
	int s[arraySize]; // array s tem 10 elementos
	for (int i = 0; i < arraySize; i++) // configura os valores
		s[i] = 2 + 2 * i;






	return 0; // indica terminação bem-sucedida
} // fim de main


















// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
