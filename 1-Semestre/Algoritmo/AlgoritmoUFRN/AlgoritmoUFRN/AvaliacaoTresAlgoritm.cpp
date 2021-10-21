#include <iostream>
#include <string>
#include <iostream>
#include <vector>


using std::stringstream;

using namespace std;

struct endereco
{
	string rua;
	string lot;
};

struct enderecoComp
{
	string rua;
	string lot;
	int numero;
};

int alternativa();
void aprendendoVoidEPassagemPorValor();
void soma(int n1, int n2);
void passagemDeParametroPorReferencia();
void mutacao(int* a);
string retornoDeUmUnicoValor();
void aprendendoVetorComoParametro();
void VetorComoParametroExemplo(int vetor[2]);
void passagemDeParametroDeMatriz();
void matriz(int m[2][2]);
endereco DoisValoresIguais();
void RetornodeDoisValoresIguais();
enderecoComp DoisValoresDiferentes();
void RetornodeDoisValoresDiferentes();
void UtilizandoPonteiros();
void RetornUnicoValor();


void passagemDeParametroDeRegistro();
void atualizarEndereco(endereco* deAlguem);
/*
1.1. Passagem de parâmetro por valor (valor 1,0)
2.1. Função sem retorno (valor 0,5)

1.2. Passagem de parâmetro por referência (valor 1,0)
2.2. Função com retorno de um único valor (valor 0,5)
1.3. Função que recebe vetor como parâmetro (valor 1,0)
1.4. Função que recebe matriz como parâmetro (valor 1,0)
1.5. Função que recebe registro como parâmetro (valor 1,0)
2.3.Função com retorno de dois valores do mesmo tipo
2.4. Função com retorno de dois valores de tipos diferentes (valor 1,0)
*/
int main() {

	while (true)
	{
		int opcao = alternativa();
		
		
		switch (opcao)
		{
			case 1:
				opcao = 's';
				break;
			case 2://1.1  2.1
				aprendendoVoidEPassagemPorValor();
				break;
			case 3: //1.2. 
				passagemDeParametroPorReferencia();
				break;
			case 4: //2.2. Função com retorno de um único valor (valor 0,5)
				RetornUnicoValor();
				break;
			case 5://1.3. Função que recebe vetor como parâmetro (valor 1,0) 
				aprendendoVetorComoParametro();
				break;
			case 6: //1.4. Função que recebe matriz como parâmetro (valor 1,0)
				passagemDeParametroDeMatriz();
				break;
			case 7://1.5 Função que recebe registro como parâmetro (valor 1,0)
				passagemDeParametroDeRegistro();
				break;
			case 8: //2.3.Função com retorno de dois valores do mesmo tipo
				RetornodeDoisValoresIguais();
				break;
			case 9: //2.4. Função com retorno de dois valores de tipos diferentes (valor 1,0)
				RetornodeDoisValoresDiferentes();
				break;
			case 10://3. Utilização de ponteiros(valor 1, 0)
				UtilizandoPonteiros();
				break;
			default:
				cout << "selecione novamente. digito inexistente";
				break;
		}

		if (opcao=='s')
		{
			cout << "saindo\n";
			break;
		}

	}
	system("pause");
}

int alternativa() {
	cout << "\n\n\n1 - sair\n";
	cout << "2 - Aprender sobre void   E   sobre passagem de parametro por valor  \n";
	cout << "3 - Passagem de parametro por referencia\n";
	cout << "4 - Função com retorno de um único valor\n";
	cout << "5 - Função que recebe vetor como parâmetro\n";
	cout << "6 - Função que recebe matriz como parâmetro \n";
	cout << "7 - Função que recebe registro como parâmetro \n";
	cout << "8 - Função com retorno de dois valores do mesmo tipo\n";
	cout << "9 - Função com retorno de dois valores de tipos diferentes \n";
	cout << "10 - Utilização de ponteiros\n";
	int i;
	cin >> i;
	return i;

}

/*1.1. Passagem de parâmetro por valor (valor 1,0)  case 2
2.1. Função sem retorno (valor 0,5)*/
void aprendendoVoidEPassagemPorValor() {
	cout << "\n Aprenderemos neste momento a funcao void e passagem de parametro por valor\n\n";

	cout << "Uma funcao do tipo void:\n";
	cout << "e uma funcao sem retorno, uma funcao vazia que apenas executa.\n";
	cout << "Para declararmos uma funcao void deveremos fazer desta forma ->\n";
	cout << "void nome_da_funcao() {}\n\n";

	cout << "A passagem de parametro por valor:\n ";
	cout << "e quando o dev elabora uma funcao que recebe a(s) copia(s) de\n";
	cout << "variavel(eis) como argumento(s) daquela funcao.A partir do    \n";
	cout << "momento que aquela(s) copia(s) entra(m) no escopo da funcao,   \n";
	cout << "ela(s) podera(ao) ser manipulada(s) sem afertar(rem) a(s) original(is).\n\n";

	cout << "Exemplo: criaremos  uma funcao com os conceitos colocados acima. O nome da funcao sera soma.\n";
	cout << "digite um valor inteiro:";
	int numero1, numero2;
	cin >> numero1;
	cout << "digite outro valor inteiro:";
	cin >> numero2;

	cout << "Seguindo a explicacao acima a assinatura da funcao sera assim: \n";
	cout << "void soma(int " << numero1 << ", int " << numero2 << ") {}     \n";
	cout << "dentro funcao coloremos as tarefas para executar sem retorno, como dizer a soma - cout<<"<<numero1<< "+" << numero2;

	cout << "\nExecucao da funcao...\n";

	soma(numero1, numero2); 

}

void soma(int n1, int n2) {
	cout << n1 + n2;
}



//cas3
//1.2. Passagem de parâmetro por referência (valor 1,0)
void passagemDeParametroPorReferencia() {
	cout << "\n Aprenderemos neste momento a passagem por referencia\n\n";

	cout << "Passagem por referencia:\n";
	cout << "Quando usamos uma funcao para alterar o conteudo das variaveis \n";
	cout << "passamos ela por referencia, ou seja, criamos um ponteiro que \n";
	cout << "contera o endereco da variavel de origem e quando acessarmos ela\n";
	cout << "acessaremos na verdade o conteudo da variavel de origem.\n ";
	cout << "a sintaxe da funcao ficara assim:\n";
	cout << "void nome_funcao(int *variavel){}\n";
	cout << "Como exemplo criamos uma funcao que muda o valor da variavel de origem. o nome da funcao sera mutacao\n";
	cout << "digite um valor inteiro:";
	int a;
	cin >> a;
	cout << "\nvoce digitou: "<<a<<"\n";
	cout << "\npara chamar a funcao tera a seguinte sintaxe\n";
	cout << "mutacao(&a); \n";
	cout << "a funcao ficara assim:\n";
	cout << "void mutacao(int *a) {*a = 10000;}\n";
	mutacao(&a);
	cout << "\n\nvalor agora:"<<a;

}

void mutacao(int *a) {
	*a = 1000;
}



//case4
//2.2. Função com retorno de um único valor (valor 0,5)
void RetornUnicoValor() {
	cout << "\n Aprenderemos Ssobre a Funcao que retorna um único valor\n\n";

	cout << "PRE REQUISITO: estudar a funcao void. \n";
	cout << "para construirmos uma funcao de retorno teremos dois aspectos \n";
	cout << "que se diferencia da funcao void, o primeiro e que ao final da funcao\n";
	cout << "colocaremos a palavra chave return com o valor que queremos passar e o segundo.\n ";
	cout << "e tirar a palavra void e colocar o tipo do retorno, ou seja, se a funcao retornar.\n ";
	cout << "um numero inteiro, colocaremos int, se texto - string, se decimais double e assim sucessivamente.\n ";
	cout << "a sintaxe da funcao ficara assim:\n";
	cout << "tipo_de_retorno nome_funcao(){ return valor_correspondente_ao_tipo_de_retorno;}\n";
	cout << "Como exemplo temos uma funcao saudacao que retorna uma string com o texto 'ola C++'\n";
	retornoDeUmUnicoValor();
	cout << "\na sintaxe:";
	cout << "string retornoDeUmUnicoValor() {return 'olá C++'";
}

string retornoDeUmUnicoValor() {
	return "olá C++";
}




//case 5
/*1.3. Função que recebe vetor como parâmetro (valor 1,0)*/void aprendendoVetorComoParametro() {
	cout << "\n Aprenderemos Função que recebe vetor como parâmetro   E   Função com retorno de dois valores do mesmo tipo\n\n";

	cout << "PRE REQUISITO: 3 e 4\n";

	cout << "Vetor como parametro:\n";
	cout << "para uma funcao receber um vetor, deveremos colocar o parametro como receptaculo de array indicando as dimensoes,\n";
	
	/*cout << "Retorno de Dois valores de mesmo tipo:\n ";
	cout << "para fazermos isto usaremos um vetor, pois um vetor tem a capacidade\n";
	cout << "de armazenar mais de um valor do mesmo tipo. \n";
	cout << "para isto, deveremos indicar o tipo de retorno como ponteiro. vejamos sintaxe completa\n";*/
	
	cout << "\npassaremos um array com dois valores e mostrara a multiplicacao por 2\n";
	
	int val[2] = { 1,2 };
	cout << "Array antes: \n";
	for (int i = 0; i < 2; i++)
	{

		cout << val[i] << "\n";

	}
	cout << "Array depois: \n";
	VetorComoParametroExemplo(val);
	cout << "\n";
}

void VetorComoParametroExemplo(int vetor[2]) {
	for (int i = 0; i < 2; i++)
	{
		
		cout << vetor[i] * 2 << "\n";

	}
}



//case 6
//1.4. Função que recebe matriz como parâmetro (valor 1,0)
void passagemDeParametroDeMatriz() {
	cout << "\n Aprenderemos Sobre funcao que recebe uma matriz\n\n";

	cout << "PARA construirmos essa funcao teremos que especificar as dimensoes no parametro\n";
	cout << "da funcao. \n";

	
	int matri[2][2] = { {1,2},{3,4} };
	matriz(matri);
	
}

void matriz(int m[2][2]) {
	for (int i = 0; i < 2;  i++)
	{
		for (int ii = 0; ii < 2; ii++)
		{
			cout << m[i][ii]*10;
		}
	}
}




//case 7
//1.5 Função que recebe registro como parâmetro (valor 1,0)
void passagemDeParametroDeRegistro() {
	cout << "\n Aprenderemos Sobre passagem de Parametro de Registro\n\n";

	cout << "PARA construirmos essa funcao teremos que declarar um struct e passar declarando no\n";
	cout << "parametro da funcao.\n";


	endereco DeJosue;
	DeJosue.lot = "ozanam";
	DeJosue.rua = "canario";
	cout << "Rua Antiga: " << DeJosue.rua <<"\n";
	cout << "lot Antiga: " << DeJosue.lot << "\n";
	atualizarEndereco(&DeJosue);
	cout << "Rua Nova: " << DeJosue.rua << "\n";
	cout << "lot Nova: " << DeJosue.lot << "\n";

}

void atualizarEndereco(endereco *deAlguem) {
	deAlguem->rua = "Rua nova";
	deAlguem->lot = "A turma do Bairro";
}



//case 8
//2.3.Função com retorno de dois valores do mesmo tipo
void RetornodeDoisValoresIguais() {
	cout << "\n Aprenderemos Sobre Retorno de dois valores do mesmo tipo\n\n";

	cout << "PARA construirmos essa funcao teremos que declarar um struct e passar o tipo struct criado no tipo de retorno\n";
	cout << "da funcao e retornar os dois tipos iguais que compoe aquele struct criado.\n";
	endereco v;
	v = DoisValoresIguais();

	cout << "valor tipo string: " << v.rua << "\n";
	cout << "valor tipo string: " << v.lot << "\n";


}

endereco DoisValoresIguais() {
	endereco doiV;
	doiV.rua = "Rua Canario";
	doiV.lot = "Barro da nova queimada";
	return doiV;
}




//case 9
//2.4. Função com retorno de dois valores de tipos diferentes (valor 1,0)
void RetornodeDoisValoresDiferentes() {
	cout << "\n Aprenderemos Sobre retorno de dois valores com tipos diferentes\n\n";

	cout << "PARA construirmos essa funcao teremos que declarar um struct e passar o tipo struct criado no tipo de retorno\n";
	cout << "da funcao e retornar os dois tipos distintos que compoe aquele struct criado.\n";
	enderecoComp v;
	v = DoisValoresDiferentes();

	cout << "valor tipo string: " << v.rua << "\n";
	cout << "valor tipo int: " << v.numero << "\n";


}

enderecoComp DoisValoresDiferentes() {
	enderecoComp doiV;
	doiV.rua = "Rua Canario";
	doiV.lot = "Barro da nova queimada";
	doiV.numero = 12312;
	return doiV;
}


//case 10
//3. Utilização de ponteiros(valor 1, 0)
void UtilizandoPonteiros() {
	cout << "\n Aprenderemos Sobre Utilizacao de ponteiros\n\n";

	cout << "Em sintese, com o ponteiro não ha copia, mas um redirecionamento de endereco, ou seja,\n";
	cout << "podemos usar uma variavel b que aponta para o local de memoria da variavel a, com isso.\n";
	cout << "quando alteramos o valor do ponteiro da variavel b, acabamos alterando o valor da variavel a.\n";
	cout << "Porém, o conteudo propriamente dito da variavel b e o endereco da variavel a.\n";
	int a = 100000000, *b;
	cout << "endereco de a: " << &a << "\n";
	cout << "conteudo de a: " << a << "\n";
	cout << "endereco de b: " << &b << "\n";
	cout << "conteudo de b: (lixo, pq nao definido nada - undefined) " << b << "\n";
	cout << "apontando b -> a" << "\n";
	b = &a;
	cout << "conteudo de b: (endereco de a) " << b << "\n";
	cout << "conteudo do ponteiro b: (conteudo de a) " << *b << "\n";
	cout << "alterando o conteudo do ponteiro b para 10" << "\n";
	*b = 10;
	cout << "conteudo de a: " << a << "\n";


}