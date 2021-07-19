#include<iostream>
#include <string>
#include <sstream>
#include <vector>


using std::stringstream;
stringstream buffer;
using namespace std;


int main() {


	string nome;
	string sexo, tecla;
	int  idade, mes, validadorIdade = 1;

	/*    OBSERVAÇÃO
	O BuggyAnalytics possui validações para entrada de inteiro, porém não há validação para entrada de apenas number nas variáveis int
	*/

	/*
	PrimeiraFase - 18-29
	SegundaFase - 30-49
	TerceiraFase - 50 ...
	*/


	//VARIÁVEIS JANEIRO
	int frequenciaGeralJaneiro = 0, masculinoJaneiro = 0, femininoJaneiro = 0, idadePrimeiraFaseJaneiro = 0, idadeSegundaFaseJaneiro = 0, idadeTerceiraFaseJaneiro = 0,
		femininoPrimeiraFaseJaneiro = 0, femininoSegundaFaseJaneiro = 0, femininoTerceiraFaseJaneiro = 0, masculinoPrimeiraFaseJaneiro = 0,
		masculinoSegundaFaseJaneiro = 0, masculinoTerceiraFaseJaneiro = 0;
	//VARIÁVEIS FEVEREIRO
	int frequenciaGeralFevereiro = 0, masculinoFevereiro = 0, femininoFevereiro = 0, idadePrimeiraFaseFevereiro = 0, idadeSegundaFaseFevereiro = 0, idadeTerceiraFaseFevereiro = 0,
		femininoPrimeiraFaseFevereiro = 0, femininoSegundaFaseFevereiro = 0, femininoTerceiraFaseFevereiro = 0, masculinoPrimeiraFaseFevereiro = 0,
		masculinoSegundaFaseFevereiro = 0, masculinoTerceiraFaseFevereiro = 0;

	//VARIÁVEIS MARCO
	int frequenciaGeralMarco = 0, masculinoMarco = 0, femininoMarco = 0, idadePrimeiraFaseMarco = 0, idadeSegundaFaseMarco = 0, idadeTerceiraFaseMarco = 0,
		femininoPrimeiraFaseMarco = 0, femininoSegundaFaseMarco = 0, femininoTerceiraFaseMarco = 0, masculinoPrimeiraFaseMarco = 0,
		masculinoSegundaFaseMarco = 0, masculinoTerceiraFaseMarco = 0;

	//VARIÁVEIS ABRIL
	int frequenciaGeralAbril = 0, masculinoAbril = 0, femininoAbril = 0, idadePrimeiraFaseAbril = 0, idadeSegundaFaseAbril = 0, idadeTerceiraFaseAbril = 0,
		femininoPrimeiraFaseAbril = 0, femininoSegundaFaseAbril = 0, femininoTerceiraFaseAbril = 0, masculinoPrimeiraFaseAbril = 0,
		masculinoSegundaFaseAbril = 0, masculinoTerceiraFaseAbril = 0;

	//VARIÁVEIS MAIO
	int frequenciaGeralMaio = 0, masculinoMaio = 0, femininoMaio = 0, idadePrimeiraFaseMaio = 0, idadeSegundaFaseMaio = 0, idadeTerceiraFaseMaio = 0,
		femininoPrimeiraFaseMaio = 0, femininoSegundaFaseMaio = 0, femininoTerceiraFaseMaio = 0, masculinoPrimeiraFaseMaio = 0,
		masculinoSegundaFaseMaio = 0, masculinoTerceiraFaseMaio = 0;

	//VARIÁVEIS JUNHO
	int frequenciaGeralJunho = 0, masculinoJunho = 0, femininoJunho = 0, idadePrimeiraFaseJunho = 0, idadeSegundaFaseJunho = 0, idadeTerceiraFaseJunho = 0,
		femininoPrimeiraFaseJunho = 0, femininoSegundaFaseJunho = 0, femininoTerceiraFaseJunho = 0, masculinoPrimeiraFaseJunho = 0,
		masculinoSegundaFaseJunho = 0, masculinoTerceiraFaseJunho = 0;

	//VARIÁVEIS JULHO
	int frequenciaGeralJulho = 0, masculinoJulho = 0, femininoJulho = 0, idadePrimeiraFaseJulho = 0, idadeSegundaFaseJulho = 0, idadeTerceiraFaseJulho = 0,
		femininoPrimeiraFaseJulho = 0, femininoSegundaFaseJulho = 0, femininoTerceiraFaseJulho = 0, masculinoPrimeiraFaseJulho = 0,
		masculinoSegundaFaseJulho = 0, masculinoTerceiraFaseJulho = 0;

	//VARIÁVEIS AGOSTO
	int frequenciaGeralAgosto = 0, masculinoAgosto = 0, femininoAgosto = 0, idadePrimeiraFaseAgosto = 0, idadeSegundaFaseAgosto = 0, idadeTerceiraFaseAgosto = 0,
		femininoPrimeiraFaseAgosto = 0, femininoSegundaFaseAgosto = 0, femininoTerceiraFaseAgosto = 0, masculinoPrimeiraFaseAgosto = 0,
		masculinoSegundaFaseAgosto = 0, masculinoTerceiraFaseAgosto = 0;

	//VARIÁVEIS SETEMBRO
	int frequenciaGeralSetembro = 0, masculinoSetembro = 0, femininoSetembro = 0, idadePrimeiraFaseSetembro = 0, idadeSegundaFaseSetembro = 0, idadeTerceiraFaseSetembro = 0,
		femininoPrimeiraFaseSetembro = 0, femininoSegundaFaseSetembro = 0, femininoTerceiraFaseSetembro = 0, masculinoPrimeiraFaseSetembro = 0,
		masculinoSegundaFaseSetembro = 0, masculinoTerceiraFaseSetembro = 0;

	//VARIÁVEIS OUTUBRO
	int frequenciaGeralOutubro = 0, masculinoOutubro = 0, femininoOutubro = 0, idadePrimeiraFaseOutubro = 0, idadeSegundaFaseOutubro = 0, idadeTerceiraFaseOutubro = 0,
		femininoPrimeiraFaseOutubro = 0, femininoSegundaFaseOutubro = 0, femininoTerceiraFaseOutubro = 0, masculinoPrimeiraFaseOutubro = 0,
		masculinoSegundaFaseOutubro = 0, masculinoTerceiraFaseOutubro = 0;

	//VARIÁVEIS NOVEMBRO
	int frequenciaGeralNovembro = 0, masculinoNovembro = 0, femininoNovembro = 0, idadePrimeiraFaseNovembro = 0, idadeSegundaFaseNovembro = 0, idadeTerceiraFaseNovembro = 0,
		femininoPrimeiraFaseNovembro = 0, femininoSegundaFaseNovembro = 0, femininoTerceiraFaseNovembro = 0, masculinoPrimeiraFaseNovembro = 0,
		masculinoSegundaFaseNovembro = 0, masculinoTerceiraFaseNovembro = 0;

	//VARIÁVEIS DEZEMBRO
	int frequenciaGeralDezembro = 0, masculinoDezembro = 0, femininoDezembro = 0, idadePrimeiraFaseDezembro = 0, idadeSegundaFaseDezembro = 0, idadeTerceiraFaseDezembro = 0,
		femininoPrimeiraFaseDezembro = 0, femininoSegundaFaseDezembro = 0, femininoTerceiraFaseDezembro = 0, masculinoPrimeiraFaseDezembro = 0,
		masculinoSegundaFaseDezembro = 0, masculinoTerceiraFaseDezembro = 0;



	int tpessoasFeminino = 0, tpessoasMasculino = 0;
	vector <string> nomesFeminino;
	vector <string> nomesMasculino;


	/*AVALIAÇÃO      ************************************************

	QUESTÃO 1  -> linha 128

	QUESTÃO 2 ->  linha 15 em diante

	QUESTÃO 3 -> linha 143, 163, 169-176, 16(o uso de string em vez de char já ajuda impedindo de dar loop se digitar mais de uma letra) e outros

	QUESTÃO 4 -> linha 137(while), 171(do while), 1169(for)

	QUESTÃO 5 -> linha 218

	QUESTÃO 6 -> linha 143 e outros

	QUESTÃO 7 -> linha 759 e outros

	QUESTÃO 8 -> linha 163 e outros

	QUESTÃO 9 -> linha 817 e outros

	QUESTÃO 10 -> linha 198 e outros

	QUESTÃO 11 -> espero que esteja sem erros kkkkkkkkkkkkkkkkkk


	*******************************************************************************/

	cout << "\n\nAlgoritmo desenvolvido por ** JOSUE CARLOS DA SILVA  **";


	cout << "\n";
	cout << "Bem-vindos ao BuggyAnalytics!\n";
	cout << "O um dos propositos do BuggyAnalytics e fornecer dados para o analista de dados ou cientista de dados ou areas correlatas.\nA primeiro momento o BuggyAnalytics se centra em tres pilares, ou seja, os dados de idade, sexo e frequencia. A partir\ndestes dados podem ser extraidos quem mais frequenta, quando mais frequenta e outros aspectos. Sob a analise dos dados\nfornecido pelo BuggyAnalytics, possibilitara ao analista tirar conclusoes que podera ajudar a empresa a lucrar mais e diminuir\nos custos, ou seja, os servicos prestados poderao ser mais customizados conforme os grupos de pessoas analisado para aquele\nperiodo, como tambem ter  atitudes preventivas diantes dos picos de demandas e dos periodos de baixa.\n Vamos Comecar o BuggyAnalytics?? \n\n";








	while (true) {
		/*cout<<"Digite s para sair ou quaisquer tecla+enter para continuar:\n";
		cin>>tecla;*/
		cout << "\nDigite o seu Nome ou s para sair: \n";
		cin >> nome;

		if (nome == "s") {
			break;
		}
		else {








			/*cout<<"\nDigite o seu Nome: \n";
			cin>>nome;*/

			//Verificador IDADE - finalidade: verificar range
			while (validadorIdade == 1) {
				cout << "Digite a sua idade\n";
				cin >> idade;

				//verificação de MENOR
				if (idade < 18) {
					cout << "Menor nao pode entrar!\n";
					continue;
				}

				//verifica se a idade é INVALIDA
				if (idade > 110) {
					cout << "Sua idade e invalida!\n";
					do {
						cout << "Digite a sua idade\n";
						cin >> idade;

					} while ((idade < 18) || (idade > 110));
				}

				validadorIdade = 0;
			}
			validadorIdade = 1;


			cout << "Digite o seu sexo: f-Feminio ou m-Masculino \n";
			cin >> sexo;
			//validação do SEXO
			if (sexo != "f" && sexo != "m") {
				cout << "Voce digitou errado! digite f-Feminio ou m-Masculino\n";
				while (sexo != "f" && sexo != "m") {
					cout << "Digite o seu sexo: f-Feminio ou m-Masculino \n";
					cin >> sexo;
				}
			}


			//LISTAS DOS NOMES
			if (sexo == "f") {
				nomesFeminino.push_back(nome);
				tpessoasFeminino++;
			}
			else {
				nomesMasculino.push_back(nome);
				tpessoasMasculino++;
			}

			cout << "digite qual o mes que voce quer guardar a sua vaga: \n";
			cout << "1 > Janeiro  " << "2 >  Fevereiro " << "3 >  Marco      " << "4 > Abril\n";
			cout << "5 > Maio     " << "6 >  Junho     " << "7 >  Julho      " << "8 > Agosto\n";
			cout << "9 > Setembro " << "10 > Outubro  " << "11 > Novembro " << "12 > Dezembro\n";
			cin >> mes;
			if (mes > 12 || mes < 1) {
				cout << "Voce digitou errado o numero do respectivo mes. Digite novamente: \n";
				cin >> mes;
				while (mes > 12 || mes < 1) {
					cout << "\nDigite novamente:\n";
					cin >> mes;
				}
			}

			switch (mes) {
			case 1: //JANEIRO
				frequenciaGeralJaneiro++;

				//SEXO
				if (sexo == "m") {
					masculinoJaneiro++;
				}
				if (sexo == "f") {
					femininoJaneiro++;
				}

				//IDADE
				if (idade >= 18 && idade < 30) {
					idadePrimeiraFaseJaneiro++;
				}
				if (idade >= 30 && idade < 50) {
					idadeSegundaFaseJaneiro++;
				}
				if (idade >= 50) {
					idadeTerceiraFaseJaneiro++;
				}

				//IDADE E SEXO F
				if (idade >= 18 && idade < 30 && sexo == "f") {
					femininoPrimeiraFaseJaneiro++;
				}
				if (idade >= 30 && idade < 50 && sexo == "f") {
					femininoSegundaFaseJaneiro++;
				}
				if (idade >= 50 && sexo == "f") {
					femininoTerceiraFaseJaneiro++;
				}

				//IDADE E SEXO M
				if (idade >= 18 && idade < 30 && sexo == "m") {
					masculinoPrimeiraFaseJaneiro++;
				}
				if (idade >= 30 && idade < 50 && sexo == "m") {
					masculinoSegundaFaseJaneiro++;
				}
				if (idade >= 50 && sexo == "m") {
					masculinoTerceiraFaseJaneiro++;
				}

				break;
			case 2: //FEVEREIRO
				frequenciaGeralFevereiro++;

				//SEXO
				if (sexo == "m") {
					masculinoFevereiro++;
				}
				if (sexo == "f") {
					femininoFevereiro++;
				}

				//IDADE
				if (idade >= 18 && idade < 30) {
					idadePrimeiraFaseFevereiro++;
				}
				if (idade >= 30 && idade < 50) {
					idadeSegundaFaseFevereiro++;
				}
				if (idade >= 50) {
					idadeTerceiraFaseFevereiro++;
				}

				//IDADE E SEXO F
				if (idade >= 18 && idade < 30 && sexo == "f") {
					femininoPrimeiraFaseFevereiro++;
				}
				if (idade >= 30 && idade < 50 && sexo == "f") {
					femininoSegundaFaseFevereiro++;
				}
				if (idade >= 50 && sexo == "f") {
					femininoTerceiraFaseFevereiro++;
				}

				//IDADE E SEXO M
				if (idade >= 18 && idade < 30 && sexo == "m") {
					masculinoPrimeiraFaseFevereiro++;
				}
				if (idade >= 30 && idade < 50 && sexo == "m") {
					masculinoSegundaFaseFevereiro++;
				}
				if (idade >= 50 && sexo == "m") {
					masculinoTerceiraFaseFevereiro++;
				}
				break;
			case 3: //MARCO
				frequenciaGeralMarco++;

				//SEXO
				if (sexo == "m") {
					masculinoMarco++;
				}
				if (sexo == "f") {
					femininoMarco++;
				}

				//IDADE
				if (idade >= 18 && idade < 30) {
					idadePrimeiraFaseMarco++;
				}
				if (idade >= 30 && idade < 50) {
					idadeSegundaFaseMarco++;
				}
				if (idade >= 50) {
					idadeTerceiraFaseMarco++;
				}

				//IDADE E SEXO F
				if (idade >= 18 && idade < 30 && sexo == "f") {
					femininoPrimeiraFaseMarco++;
				}
				if (idade >= 30 && idade < 50 && sexo == "f") {
					femininoSegundaFaseMarco++;
				}
				if (idade >= 50 && sexo == "f") {
					femininoTerceiraFaseMarco++;
				}

				//IDADE E SEXO M
				if (idade >= 18 && idade < 30 && sexo == "m") {
					masculinoPrimeiraFaseMarco++;
				}
				if (idade >= 30 && idade < 50 && sexo == "m") {
					masculinoSegundaFaseMarco++;
				}
				if (idade >= 50 && sexo == "m") {
					masculinoTerceiraFaseMarco++;
				}
				break;
			case 4: //ABRIL
				frequenciaGeralAbril++;

				//SEXO
				if (sexo == "m") {
					masculinoAbril++;
				}
				if (sexo == "f") {
					femininoAbril++;
				}

				//IDADE
				if (idade >= 18 && idade < 30) {
					idadePrimeiraFaseAbril++;
				}
				if (idade >= 30 && idade < 50) {
					idadeSegundaFaseAbril++;
				}
				if (idade >= 50) {
					idadeTerceiraFaseAbril++;
				}

				//IDADE E SEXO F
				if (idade >= 18 && idade < 30 && sexo == "f") {
					femininoPrimeiraFaseAbril++;
				}
				if (idade >= 30 && idade < 50 && sexo == "f") {
					femininoSegundaFaseAbril++;
				}
				if (idade >= 50 && sexo == "f") {
					femininoTerceiraFaseAbril++;
				}

				//IDADE E SEXO M
				if (idade >= 18 && idade < 30 && sexo == "m") {
					masculinoPrimeiraFaseAbril++;
				}
				if (idade >= 30 && idade < 50 && sexo == "m") {
					masculinoSegundaFaseAbril++;
				}
				if (idade >= 50 && sexo == "m") {
					masculinoTerceiraFaseAbril++;
				}
				break;
			case 5: //MAIO
				frequenciaGeralMaio++;

				//SEXO
				if (sexo == "m") {
					masculinoMaio++;
				}
				if (sexo == "f") {
					femininoMaio++;
				}

				//IDADE
				if (idade >= 18 && idade < 30) {
					idadePrimeiraFaseMaio++;
				}
				if (idade >= 30 && idade < 50) {
					idadeSegundaFaseMaio++;
				}
				if (idade >= 50) {
					idadeTerceiraFaseMaio++;
				}

				//IDADE E SEXO F
				if (idade >= 18 && idade < 30 && sexo == "f") {
					femininoPrimeiraFaseMaio++;
				}
				if (idade >= 30 && idade < 50 && sexo == "f") {
					femininoSegundaFaseMaio++;
				}
				if (idade >= 50 && sexo == "f") {
					femininoTerceiraFaseMaio++;
				}

				//IDADE E SEXO M
				if (idade >= 18 && idade < 30 && sexo == "m") {
					masculinoPrimeiraFaseMaio++;
				}
				if (idade >= 30 && idade < 50 && sexo == "m") {
					masculinoSegundaFaseMaio++;
				}
				if (idade >= 50 && sexo == "m") {
					masculinoTerceiraFaseMaio++;
				}
				break;
			case 6: //JUNHO
				frequenciaGeralJunho++;

				//SEXO
				if (sexo == "m") {
					masculinoJunho++;
				}
				if (sexo == "f") {
					femininoJunho++;
				}

				//IDADE
				if (idade >= 18 && idade < 30) {
					idadePrimeiraFaseJunho++;
				}
				if (idade >= 30 && idade < 50) {
					idadeSegundaFaseJunho++;
				}
				if (idade >= 50) {
					idadeTerceiraFaseJunho++;
				}

				//IDADE E SEXO F
				if (idade >= 18 && idade < 30 && sexo == "f") {
					femininoPrimeiraFaseJunho++;
				}
				if (idade >= 30 && idade < 50 && sexo == "f") {
					femininoSegundaFaseJunho++;
				}
				if (idade >= 50 && sexo == "f") {
					femininoTerceiraFaseJunho++;
				}

				//IDADE E SEXO M
				if (idade >= 18 && idade < 30 && sexo == "m") {
					masculinoPrimeiraFaseJunho++;
				}
				if (idade >= 30 && idade < 50 && sexo == "m") {
					masculinoSegundaFaseJunho++;
				}
				if (idade >= 50 && sexo == "m") {
					masculinoTerceiraFaseJunho++;
				}
				break;
			case 7: //JULHO
				frequenciaGeralJulho++;

				//SEXO
				if (sexo == "m") {
					masculinoJulho++;
				}
				if (sexo == "f") {
					femininoJulho++;
				}

				//IDADE
				if (idade >= 18 && idade < 30) {
					idadePrimeiraFaseJulho++;
				}
				if (idade >= 30 && idade < 50) {
					idadeSegundaFaseJulho++;
				}
				if (idade >= 50) {
					idadeTerceiraFaseJulho++;
				}

				//IDADE E SEXO F
				if (idade >= 18 && idade < 30 && sexo == "f") {
					femininoPrimeiraFaseJulho++;
				}
				if (idade >= 30 && idade < 50 && sexo == "f") {
					femininoSegundaFaseJulho++;
				}
				if (idade >= 50 && sexo == "f") {
					femininoTerceiraFaseJulho++;
				}

				//IDADE E SEXO M
				if (idade >= 18 && idade < 30 && sexo == "m") {
					masculinoPrimeiraFaseJulho++;
				}
				if (idade >= 30 && idade < 50 && sexo == "m") {
					masculinoSegundaFaseJulho++;
				}
				if (idade >= 50 && sexo == "m") {
					masculinoTerceiraFaseJulho++;
				}
				break;
			case 8: //AGOSTO
				frequenciaGeralAgosto++;

				//SEXO
				if (sexo == "m") {
					masculinoAgosto++;
				}
				if (sexo == "f") {
					femininoAgosto++;
				}

				//IDADE
				if (idade >= 18 && idade < 30) {
					idadePrimeiraFaseAgosto++;
				}
				if (idade >= 30 && idade < 50) {
					idadeSegundaFaseAgosto++;
				}
				if (idade >= 50) {
					idadeTerceiraFaseAgosto++;
				}

				//IDADE E SEXO F
				if (idade >= 18 && idade < 30 && sexo == "f") {
					femininoPrimeiraFaseAgosto++;
				}
				if (idade >= 30 && idade < 50 && sexo == "f") {
					femininoSegundaFaseAgosto++;
				}
				if (idade >= 50 && sexo == "f") {
					femininoTerceiraFaseAgosto++;
				}

				//IDADE E SEXO M
				if (idade >= 18 && idade < 30 && sexo == "m") {
					masculinoPrimeiraFaseAgosto++;
				}
				if (idade >= 30 && idade < 50 && sexo == "m") {
					masculinoSegundaFaseAgosto++;
				}
				if (idade >= 50 && sexo == "m") {
					masculinoTerceiraFaseAgosto++;
				}
				break;
			case 9: //SETEMBRO
				frequenciaGeralSetembro++;

				//SEXO
				if (sexo == "m") {
					masculinoSetembro++;
				}
				if (sexo == "f") {
					femininoSetembro++;
				}

				//IDADE
				if (idade >= 18 && idade < 30) {
					idadePrimeiraFaseSetembro++;
				}
				if (idade >= 30 && idade < 50) {
					idadeSegundaFaseSetembro++;
				}
				if (idade >= 50) {
					idadeTerceiraFaseSetembro++;
				}

				//IDADE E SEXO F
				if (idade >= 18 && idade < 30 && sexo == "f") {
					femininoPrimeiraFaseSetembro++;
				}
				if (idade >= 30 && idade < 50 && sexo == "f") {
					femininoSegundaFaseSetembro++;
				}
				if (idade >= 50 && sexo == "f") {
					femininoTerceiraFaseSetembro++;
				}

				//IDADE E SEXO M
				if (idade >= 18 && idade < 30 && sexo == "m") {
					masculinoPrimeiraFaseSetembro++;
				}
				if (idade >= 30 && idade < 50 && sexo == "m") {
					masculinoSegundaFaseSetembro++;
				}
				if (idade >= 50 && sexo == "m") {
					masculinoTerceiraFaseSetembro++;
				}
				break;
			case 10: //OUTUBRO
				frequenciaGeralOutubro++;

				//SEXO
				if (sexo == "m") {
					masculinoOutubro++;
				}
				if (sexo == "f") {
					femininoOutubro++;
				}

				//IDADE
				if (idade >= 18 && idade < 30) {
					idadePrimeiraFaseOutubro++;
				}
				if (idade >= 30 && idade < 50) {
					idadeSegundaFaseOutubro++;
				}
				if (idade >= 50) {
					idadeTerceiraFaseOutubro++;
				}

				//IDADE E SEXO F
				if (idade >= 18 && idade < 30 && sexo == "f") {
					femininoPrimeiraFaseOutubro++;
				}
				if (idade >= 30 && idade < 50 && sexo == "f") {
					femininoSegundaFaseOutubro++;
				}
				if (idade >= 50 && sexo == "f") {
					femininoTerceiraFaseOutubro++;
				}

				//IDADE E SEXO M
				if (idade >= 18 && idade < 30 && sexo == "m") {
					masculinoPrimeiraFaseOutubro++;
				}
				if (idade >= 30 && idade < 50 && sexo == "m") {
					masculinoSegundaFaseOutubro++;
				}
				if (idade >= 50 && sexo == "m") {
					masculinoTerceiraFaseOutubro++;
				}
				break;
			case 11: //NOVEMBRO
				frequenciaGeralNovembro++;

				//SEXO
				if (sexo == "m") {
					masculinoNovembro++;
				}
				if (sexo == "f") {
					femininoNovembro++;
				}

				//IDADE
				if (idade >= 18 && idade < 30) {
					idadePrimeiraFaseNovembro++;
				}
				if (idade >= 30 && idade < 50) {
					idadeSegundaFaseNovembro++;
				}
				if (idade >= 50) {
					idadeTerceiraFaseNovembro++;
				}

				//IDADE E SEXO F
				if (idade >= 18 && idade < 30 && sexo == "f") {
					femininoPrimeiraFaseNovembro++;
				}
				if (idade >= 30 && idade < 50 && sexo == "f") {
					femininoSegundaFaseNovembro++;
				}
				if (idade >= 50 && sexo == "f") {
					femininoTerceiraFaseNovembro++;
				}

				//IDADE E SEXO M
				if (idade >= 18 && idade < 30 && sexo == "m") {
					masculinoPrimeiraFaseNovembro++;
				}
				if (idade >= 30 && idade < 50 && sexo == "m") {
					masculinoSegundaFaseNovembro++;
				}
				if (idade >= 50 && sexo == "m") {
					masculinoTerceiraFaseNovembro++;
				}
				break;
			case 12: //DEZEMBRO
				frequenciaGeralDezembro++;

				//SEXO
				if (sexo == "m") {
					masculinoDezembro++;
				}
				if (sexo == "f") {
					femininoDezembro++;
				}

				//IDADE
				if (idade >= 18 && idade < 30) {
					idadePrimeiraFaseDezembro++;
				}
				if (idade >= 30 && idade < 50) {
					idadeSegundaFaseDezembro++;
				}
				if (idade >= 50) {
					idadeTerceiraFaseDezembro++;
				}

				//IDADE E SEXO F
				if (idade >= 18 && idade < 30 && sexo == "f") {
					femininoPrimeiraFaseDezembro++;
				}
				if (idade >= 30 && idade < 50 && sexo == "f") {
					femininoSegundaFaseDezembro++;
				}
				if (idade >= 50 && sexo == "f") {
					femininoTerceiraFaseDezembro++;
				}

				//IDADE E SEXO M
				if (idade >= 18 && idade < 30 && sexo == "m") {
					masculinoPrimeiraFaseDezembro++;
				}
				if (idade >= 30 && idade < 50 && sexo == "m") {
					masculinoSegundaFaseDezembro++;
				}
				if (idade >= 50 && sexo == "m") {
					masculinoTerceiraFaseDezembro++;
				}
				break;
			}

		}
	}



	if (frequenciaGeralJaneiro >= frequenciaGeralFevereiro) {

	}

	int frequenciaGeral = frequenciaGeralJaneiro + frequenciaGeralFevereiro + frequenciaGeralMarco + frequenciaGeralAbril +
		+frequenciaGeralMaio + frequenciaGeralJunho + frequenciaGeralJulho + frequenciaGeralAgosto + frequenciaGeralSetembro +
		frequenciaGeralOutubro + frequenciaGeralNovembro + frequenciaGeralDezembro;

	int femininoTotal = femininoJaneiro + femininoFevereiro + femininoMarco + femininoAbril + femininoMaio + femininoJunho + femininoJulho +
		femininoAgosto + femininoSetembro + femininoOutubro + femininoNovembro + femininoDezembro;

	int masculinoTotal = masculinoJaneiro + masculinoFevereiro + masculinoMarco + masculinoAbril + masculinoMaio + masculinoJunho +
		masculinoJulho + masculinoAgosto + masculinoSetembro + masculinoOutubro + masculinoNovembro + masculinoDezembro;

	int idadePrimeiraFaseTotal = idadePrimeiraFaseJaneiro + idadePrimeiraFaseFevereiro + idadePrimeiraFaseMarco + idadePrimeiraFaseAbril +
		+idadePrimeiraFaseMaio + idadePrimeiraFaseJunho + idadePrimeiraFaseJulho + idadePrimeiraFaseAgosto + idadePrimeiraFaseSetembro +
		+idadePrimeiraFaseOutubro + idadePrimeiraFaseNovembro + idadePrimeiraFaseDezembro;


	int idadeSegundaFaseTotal = idadeSegundaFaseJaneiro + idadeSegundaFaseFevereiro + idadeSegundaFaseMarco + idadeSegundaFaseAbril +
		idadeSegundaFaseMaio + idadeSegundaFaseJunho + idadeSegundaFaseJulho + idadeSegundaFaseAgosto + idadeSegundaFaseSetembro +
		idadeSegundaFaseOutubro + idadeSegundaFaseNovembro + idadeSegundaFaseDezembro;

	int idadeTerceiraFaseTotal = idadeTerceiraFaseJaneiro + idadeTerceiraFaseFevereiro + idadeTerceiraFaseMarco + idadeTerceiraFaseAbril +
		idadeTerceiraFaseMaio + idadeTerceiraFaseJunho + idadeTerceiraFaseJulho + idadeTerceiraFaseAgosto + idadeTerceiraFaseSetembro +
		idadeTerceiraFaseOutubro + idadeTerceiraFaseNovembro + idadeTerceiraFaseDezembro;

	int femininoPrimeiraFaseTotal = femininoPrimeiraFaseJaneiro + femininoPrimeiraFaseFevereiro + femininoPrimeiraFaseMarco + femininoPrimeiraFaseAbril +
		femininoPrimeiraFaseMaio + femininoPrimeiraFaseJunho + femininoPrimeiraFaseJulho + femininoPrimeiraFaseAgosto + femininoPrimeiraFaseSetembro +
		+femininoPrimeiraFaseOutubro + femininoPrimeiraFaseNovembro + femininoPrimeiraFaseDezembro;



	int femininoSegundaFaseTotal = femininoSegundaFaseJaneiro + femininoSegundaFaseFevereiro + femininoSegundaFaseMarco + femininoSegundaFaseAbril +
		femininoSegundaFaseMaio + femininoSegundaFaseJunho + femininoSegundaFaseJulho + femininoSegundaFaseAgosto + femininoSegundaFaseSetembro +
		femininoSegundaFaseOutubro + femininoSegundaFaseNovembro + femininoSegundaFaseDezembro;

	int femininoTerceiraFaseTotal = femininoTerceiraFaseJaneiro + femininoTerceiraFaseFevereiro + femininoTerceiraFaseMarco + femininoTerceiraFaseAbril +
		+femininoTerceiraFaseMaio + femininoTerceiraFaseJunho + femininoTerceiraFaseJulho + femininoTerceiraFaseAgosto + femininoTerceiraFaseSetembro +
		femininoTerceiraFaseOutubro + femininoTerceiraFaseNovembro + femininoTerceiraFaseDezembro;

	int masculinoPrimeiraFaseTotal = masculinoPrimeiraFaseJaneiro + masculinoPrimeiraFaseFevereiro + masculinoPrimeiraFaseMarco + masculinoPrimeiraFaseAbril +
		masculinoPrimeiraFaseMaio + masculinoPrimeiraFaseJunho + masculinoPrimeiraFaseJulho + masculinoPrimeiraFaseAgosto + masculinoPrimeiraFaseSetembro +
		masculinoPrimeiraFaseOutubro + masculinoPrimeiraFaseNovembro + masculinoPrimeiraFaseDezembro;

	int masculinoSegundaFaseTotal = masculinoSegundaFaseJaneiro + masculinoSegundaFaseFevereiro + masculinoSegundaFaseMarco + masculinoSegundaFaseAbril +
		+masculinoSegundaFaseMaio + masculinoSegundaFaseJunho + masculinoSegundaFaseJulho + masculinoSegundaFaseAgosto + masculinoSegundaFaseSetembro +
		masculinoSegundaFaseOutubro + masculinoSegundaFaseNovembro + masculinoSegundaFaseDezembro;

	int masculinoTerceiraFaseTotal = masculinoTerceiraFaseJaneiro + masculinoTerceiraFaseFevereiro + masculinoTerceiraFaseMarco + masculinoTerceiraFaseAbril +
		masculinoTerceiraFaseMaio + masculinoTerceiraFaseJunho + masculinoTerceiraFaseJulho + masculinoTerceiraFaseAgosto + masculinoTerceiraFaseSetembro +
		masculinoTerceiraFaseOutubro + masculinoTerceiraFaseNovembro + masculinoTerceiraFaseDezembro;



	int quadrimestreJFMA = frequenciaGeralJaneiro + frequenciaGeralFevereiro + frequenciaGeralMarco + frequenciaGeralAbril;
	int quadrimestreMJJA = frequenciaGeralMaio + frequenciaGeralJunho + frequenciaGeralJulho + frequenciaGeralAgosto;
	int quadrimestreSOND = frequenciaGeralSetembro + frequenciaGeralOutubro + frequenciaGeralNovembro + frequenciaGeralDezembro;



	cout << "\n\n\n *****  FREQUENCIA MEDIDA POR PERIODO (QUADRIMESTRE)\n";
	if (quadrimestreJFMA > quadrimestreMJJA && quadrimestreJFMA > quadrimestreSOND) {
		cout << "-->> PICO: Janeiro, Fevereiro, Marco, Abril \n";
		cout << "Com frequencia de " << quadrimestreJFMA << " pessoas.\n";

		cout << "Janeiro:   " << frequenciaGeralJaneiro << "\n";
		cout << "Fevereiro: " << frequenciaGeralFevereiro << "\n";
		cout << "Marco:     " << frequenciaGeralMarco << "\n";
		cout << "Abril:     " << frequenciaGeralAbril << "\n";

		cout << "\nPercentagem %\n";
		cout << "sexo\n";
		int subtotalSexoF = femininoJaneiro + femininoFevereiro + femininoMarco + femininoAbril;
		int subtotalSexoM = masculinoJaneiro + masculinoFevereiro + masculinoMarco + masculinoAbril;
		int totalSexo = subtotalSexoF + subtotalSexoM;
		double percentagemSexoF = (subtotalSexoF * 100) / totalSexo;
		double percentagemSexoM = (subtotalSexoM * 100) / totalSexo;
		cout << "masculino: ----- " << percentagemSexoM << "%\n";
		cout << "feminino:  ----- " << percentagemSexoF << "%\n";

	}
	else if (quadrimestreMJJA > quadrimestreJFMA && quadrimestreMJJA > quadrimestreSOND) {
		cout << "-->> PICO: Maio, Junho, Julho, Agosto \n";
		cout << "Com frequencia de " << quadrimestreMJJA << " pessoas.\n";

		cout << "Maio:      " << frequenciaGeralMaio << "\n";
		cout << "Junho:     " << frequenciaGeralJunho << "\n";
		cout << "Julho:     " << frequenciaGeralJulho << "\n";
		cout << "Agosto:    " << frequenciaGeralAgosto << "\n";

		cout << "\nPercentagem %\n";
		cout << "sexo\n";
		int subtotalSexoF = femininoMaio + femininoJunho + femininoJulho + femininoAgosto;
		int subtotalSexoM = masculinoMaio + masculinoJunho + masculinoJulho + masculinoAgosto;
		int totalSexo = subtotalSexoF + subtotalSexoM;
		double percentagemSexoF = (subtotalSexoF * 100) / totalSexo;
		double percentagemSexoM = (subtotalSexoM * 100) / totalSexo;
		cout << "masculino: ----- " << percentagemSexoM << "%\n";
		cout << "feminino:  ----- " << percentagemSexoF << "%\n";

	}
	else if (quadrimestreSOND > quadrimestreMJJA && quadrimestreSOND > quadrimestreJFMA) {
		cout << "-->> PICO: Setembro, Outubro, Novembro, Dezembro \n";
		cout << "Com frequencia de " << quadrimestreSOND << " pessoas.\n";

		cout << "Setembro:  " << frequenciaGeralSetembro << "\n";
		cout << "Outubro:   " << frequenciaGeralOutubro << "\n";
		cout << "Novembro:  " << frequenciaGeralNovembro << "\n";
		cout << "Dezembro:  " << frequenciaGeralDezembro << "\n";

		cout << "\nPercentagem %\n";
		cout << "sexo\n";
		int subtotalSexoF = femininoSetembro + femininoOutubro + femininoNovembro + femininoDezembro;
		int subtotalSexoM = masculinoSetembro + masculinoOutubro + masculinoNovembro + masculinoDezembro;
		int totalSexo = subtotalSexoF + subtotalSexoM;
		double percentagemSexoF = (subtotalSexoF * 100) / totalSexo;
		double percentagemSexoM = (subtotalSexoM * 100) / totalSexo;
		cout << "masculino: ----- " << percentagemSexoM << "%\n";
		cout << "feminino:  ----- " << percentagemSexoF << "%\n";

	}
	else if (quadrimestreJFMA == quadrimestreMJJA && quadrimestreJFMA > quadrimestreSOND) {
		cout << "-->> PICO: Quadrimestre 1: Janeiro, Fevereiro, Marco, Abril\n";
		cout << "           Quadrimestre 2: Maio, Junho, Julho, Agosto\n";
		int T = quadrimestreJFMA + quadrimestreMJJA;
		cout << "Com frequencia de " << T << " pessoas.\n";

		cout << "Janeiro:   " << frequenciaGeralJaneiro << "\n";
		cout << "Fevereiro: " << frequenciaGeralFevereiro << "\n";
		cout << "Marco:     " << frequenciaGeralMarco << "\n";
		cout << "Abril:     " << frequenciaGeralAbril << "\n";
		cout << "Maio:      " << frequenciaGeralMaio << "\n";
		cout << "Junho:     " << frequenciaGeralJunho << "\n";
		cout << "Julho:     " << frequenciaGeralJulho << "\n";
		cout << "Agosto:    " << frequenciaGeralAgosto << "\n";


		cout << "\nPercentagem %\n";
		cout << "sexo\n";
		int subtotalSexoF = femininoJaneiro + femininoFevereiro + femininoMarco + femininoAbril + femininoMaio + femininoJunho + femininoJulho + femininoAgosto;
		int subtotalSexoM = masculinoJaneiro + masculinoFevereiro + masculinoMarco + masculinoAbril + masculinoMaio + masculinoJunho + masculinoJulho + masculinoAgosto;
		int totalSexo = subtotalSexoF + subtotalSexoM;
		double percentagemSexoF = (subtotalSexoF * 100) / totalSexo;
		double percentagemSexoM = (subtotalSexoM * 100) / totalSexo;
		cout << "masculino: ----- " << percentagemSexoM << "%\n";
		cout << "feminino:  ----- " << percentagemSexoF << "%\n";

	}
	else if (quadrimestreJFMA == quadrimestreJFMA && quadrimestreJFMA > quadrimestreMJJA) {
		cout << "-->> PICO: Quadrimestre 1: Janeiro, Fevereiro, Marco, Abril\n";
		cout << "           Quadrimestre 2: Setembro, Outubro, Novembro, Dezembro\n";
		int T = quadrimestreJFMA + quadrimestreJFMA;
		cout << "Com frequencia de " << T << " pessoas.\n";

		cout << "Janeiro:   " << frequenciaGeralJaneiro << "\n";
		cout << "Fevereiro: " << frequenciaGeralFevereiro << "\n";
		cout << "Marco:     " << frequenciaGeralMarco << "\n";
		cout << "Abril:     " << frequenciaGeralAbril << "\n";
		cout << "Setembro:  " << frequenciaGeralSetembro << "\n";
		cout << "Outubro:   " << frequenciaGeralOutubro << "\n";
		cout << "Novembro:  " << frequenciaGeralNovembro << "\n";
		cout << "Dezembro:  " << frequenciaGeralDezembro << "\n";

		cout << "\nPercentagem %\n";
		cout << "sexo\n";
		int subtotalSexoF = femininoJaneiro + femininoFevereiro + femininoMarco + femininoAbril + femininoSetembro + femininoOutubro + femininoNovembro + femininoDezembro;
		int subtotalSexoM = masculinoJaneiro + masculinoFevereiro + masculinoMarco + masculinoAbril + masculinoSetembro + masculinoOutubro + masculinoNovembro + masculinoDezembro;
		int totalSexo = subtotalSexoF + subtotalSexoM;
		double percentagemSexoF = (subtotalSexoF * 100) / totalSexo;
		double percentagemSexoM = (subtotalSexoM * 100) / totalSexo;
		cout << "masculino: ----- " << percentagemSexoM << "%\n";
		cout << "feminino:  ----- " << percentagemSexoF << "%\n";

	}
	else if (quadrimestreMJJA == quadrimestreSOND && quadrimestreMJJA > quadrimestreJFMA) {
		cout << "-->> PICO: Quadrimestre 1: Maio, Junho, Julho, Agosto\n";
		cout << "           Quadrimestre 2: Setembro, Outubro, Novembro, Dezembro\n";
		int T = quadrimestreMJJA + quadrimestreSOND;
		cout << "Com frequencia de " << T << " pessoas.\n";

		cout << "Maio:      " << frequenciaGeralMaio << "\n";
		cout << "Junho:     " << frequenciaGeralJunho << "\n";
		cout << "Julho:     " << frequenciaGeralJulho << "\n";
		cout << "Agosto:    " << frequenciaGeralAgosto << "\n";
		cout << "Setembro:  " << frequenciaGeralSetembro << "\n";
		cout << "Outubro:   " << frequenciaGeralOutubro << "\n";
		cout << "Novembro:  " << frequenciaGeralNovembro << "\n";
		cout << "Dezembro:  " << frequenciaGeralDezembro << "\n";

		cout << "\nPercentagem %\n";
		cout << "sexo\n";
		int subtotalSexoF = femininoMaio + femininoJunho + femininoJulho + femininoAgosto + femininoSetembro + femininoOutubro + femininoNovembro + femininoDezembro;
		int subtotalSexoM = masculinoMaio + masculinoJunho + masculinoJulho + masculinoAgosto + masculinoSetembro + masculinoOutubro + masculinoNovembro + masculinoDezembro;
		int totalSexo = subtotalSexoF + subtotalSexoM;
		double percentagemSexoF = (subtotalSexoF * 100) / totalSexo;
		double percentagemSexoM = (subtotalSexoM * 100) / totalSexo;
		cout << "masculino: ----- " << percentagemSexoM << "%\n";
		cout << "feminino:  ----- " << percentagemSexoF << "%\n";

	}
	else {
		cout << "A frequencia permaneceu constante nos quadrimestres anual";
	}


	cout << "\n\n\n";
	cout << "*****  RELATORIO GERAL \n";
	cout << "****   FREQUENCIA GERAL   *****\n";
	cout << "Janeiro:   " << frequenciaGeralJaneiro << "\n";
	cout << "Fevereiro: " << frequenciaGeralFevereiro << "\n";
	cout << "Marco:     " << frequenciaGeralMarco << "\n";
	cout << "Abril:     " << frequenciaGeralAbril << "\n";
	cout << "Maio:      " << frequenciaGeralMaio << "\n";
	cout << "Junho:     " << frequenciaGeralJunho << "\n";
	cout << "Julho:     " << frequenciaGeralJulho << "\n";
	cout << "Agosto:    " << frequenciaGeralAgosto << "\n";
	cout << "Setembro:  " << frequenciaGeralSetembro << "\n";
	cout << "Outubro:   " << frequenciaGeralOutubro << "\n";
	cout << "Novembro:  " << frequenciaGeralNovembro << "\n";
	cout << "Dezembro:  " << frequenciaGeralDezembro << "\n";
	cout << "TOTAL:     " << frequenciaGeral << "\n";

	cout << "\n\n";


	cout << "****   FREQUENCIA FEMININA   *****\n";
	cout << "Janeiro:   " << femininoJaneiro << "\n";
	cout << "Fevereiro: " << femininoFevereiro << "\n";
	cout << "Marco:     " << femininoMarco << "\n";
	cout << "Abril:     " << femininoAbril << "\n";
	cout << "Maio:      " << femininoMaio << "\n";
	cout << "Junho:     " << femininoJunho << "\n";
	cout << "Julho:     " << femininoJulho << "\n";
	cout << "Agosto:    " << femininoAgosto << "\n";
	cout << "Setembro:  " << femininoSetembro << "\n";
	cout << "Outubro:   " << femininoOutubro << "\n";
	cout << "Novembro:  " << femininoNovembro << "\n";
	cout << "Dezembro:  " << femininoDezembro << "\n";
	cout << "TOTAL:     " << femininoTotal << "\n";

	cout << "\n\n";


	cout << "****   FREQUENCIA MASCULINA   *****\n";
	cout << "Janeiro:   " << masculinoJaneiro << "\n";
	cout << "Fevereiro: " << masculinoFevereiro << "\n";
	cout << "Marco:     " << masculinoMarco << "\n";
	cout << "Abril:     " << masculinoAbril << "\n";
	cout << "Maio:      " << masculinoMaio << "\n";
	cout << "Junho:     " << masculinoJunho << "\n";
	cout << "Julho:     " << masculinoJulho << "\n";
	cout << "Agosto:    " << masculinoAgosto << "\n";
	cout << "Setembro:  " << masculinoSetembro << "\n";
	cout << "Outubro:   " << masculinoOutubro << "\n";
	cout << "Novembro:  " << masculinoNovembro << "\n";
	cout << "Dezembro:  " << masculinoDezembro << "\n";
	cout << "TOTAL:     " << masculinoTotal << "\n";

	cout << "\n\n";


	cout << "****   FREQUENCIA POR IDADE (18-29)   *****\n";
	cout << "Janeiro:   " << idadePrimeiraFaseJaneiro << "\n";
	cout << "Fevereiro: " << idadePrimeiraFaseFevereiro << "\n";
	cout << "Marco:     " << idadePrimeiraFaseMarco << "\n";
	cout << "Abril:     " << idadePrimeiraFaseAbril << "\n";
	cout << "Maio:      " << idadePrimeiraFaseMaio << "\n";
	cout << "Junho:     " << idadePrimeiraFaseJunho << "\n";
	cout << "Julho:     " << idadePrimeiraFaseJulho << "\n";
	cout << "Agosto:    " << idadePrimeiraFaseAgosto << "\n";
	cout << "Setembro:  " << idadePrimeiraFaseSetembro << "\n";
	cout << "Outubro:   " << idadePrimeiraFaseOutubro << "\n";
	cout << "Novembro:  " << idadePrimeiraFaseNovembro << "\n";
	cout << "Dezembro:  " << idadePrimeiraFaseDezembro << "\n";
	cout << "TOTAL:     " << idadePrimeiraFaseTotal << "\n";

	cout << "\n\n";


	cout << "****   FREQUENCIA POR IDADE (30-49)   *****\n";
	cout << "Janeiro:   " << idadeSegundaFaseJaneiro << "\n";
	cout << "Fevereiro: " << idadeSegundaFaseFevereiro << "\n";
	cout << "Marco:     " << idadeSegundaFaseMarco << "\n";
	cout << "Abril:     " << idadeSegundaFaseAbril << "\n";
	cout << "Maio:      " << idadeSegundaFaseMaio << "\n";
	cout << "Junho:     " << idadeSegundaFaseJunho << "\n";
	cout << "Julho:     " << idadeSegundaFaseJulho << "\n";
	cout << "Agosto:    " << idadeSegundaFaseAgosto << "\n";
	cout << "Setembro:  " << idadeSegundaFaseSetembro << "\n";
	cout << "Outubro:   " << idadeSegundaFaseOutubro << "\n";
	cout << "Novembro:  " << idadeSegundaFaseNovembro << "\n";
	cout << "Dezembro:  " << idadeSegundaFaseDezembro << "\n";
	cout << "TOTAL:     " << idadeSegundaFaseTotal << "\n";

	cout << "\n\n";

	cout << "****   FREQUENCIA POR IDADE (50 ...)   *****\n";
	cout << "Janeiro:   " << idadeTerceiraFaseJaneiro << "\n";
	cout << "Fevereiro: " << idadeTerceiraFaseFevereiro << "\n";
	cout << "Marco:     " << idadeTerceiraFaseMarco << "\n";
	cout << "Abril:     " << idadeTerceiraFaseAbril << "\n";
	cout << "Maio:      " << idadeTerceiraFaseMaio << "\n";
	cout << "Junho:     " << idadeTerceiraFaseJunho << "\n";
	cout << "Julho:     " << idadeTerceiraFaseJulho << "\n";
	cout << "Agosto:    " << idadeTerceiraFaseAgosto << "\n";
	cout << "Setembro:  " << idadeTerceiraFaseSetembro << "\n";
	cout << "Outubro:   " << idadeTerceiraFaseOutubro << "\n";
	cout << "Novembro:  " << idadeTerceiraFaseNovembro << "\n";
	cout << "Dezembro:  " << idadeTerceiraFaseDezembro << "\n";
	cout << "TOTAL:     " << idadeTerceiraFaseTotal << "\n";


	cout << "\n\n";

	cout << "****   FREQUENCIA FEMININA POR SEXO E POR IDADE (18-29)   *****\n";
	cout << "Janeiro:   " << femininoPrimeiraFaseJaneiro << "\n";
	cout << "Fevereiro: " << femininoPrimeiraFaseFevereiro << "\n";
	cout << "Marco:     " << femininoPrimeiraFaseMarco << "\n";
	cout << "Abril:     " << femininoPrimeiraFaseAbril << "\n";
	cout << "Maio:      " << femininoPrimeiraFaseMaio << "\n";
	cout << "Junho:     " << femininoPrimeiraFaseJunho << "\n";
	cout << "Julho:     " << femininoPrimeiraFaseJulho << "\n";
	cout << "Agosto:    " << femininoPrimeiraFaseAgosto << "\n";
	cout << "Setembro:  " << femininoPrimeiraFaseSetembro << "\n";
	cout << "Outubro:   " << femininoPrimeiraFaseOutubro << "\n";
	cout << "Novembro:  " << femininoPrimeiraFaseNovembro << "\n";
	cout << "Dezembro:  " << femininoPrimeiraFaseDezembro << "\n";
	cout << "TOTAL:     " << femininoPrimeiraFaseTotal << "\n";

	cout << "\n\n";

	cout << "****   FREQUENCIA FEMININA POR SEXO E POR IDADE (30-49)   *****\n";
	cout << "Janeiro:   " << femininoSegundaFaseJaneiro << "\n";
	cout << "Fevereiro: " << femininoSegundaFaseFevereiro << "\n";
	cout << "Marco:     " << femininoSegundaFaseMarco << "\n";
	cout << "Abril:     " << femininoSegundaFaseAbril << "\n";
	cout << "Maio:      " << femininoSegundaFaseMaio << "\n";
	cout << "Junho:     " << femininoSegundaFaseJunho << "\n";
	cout << "Julho:     " << femininoSegundaFaseJulho << "\n";
	cout << "Agosto:    " << femininoSegundaFaseAgosto << "\n";
	cout << "Setembro:  " << femininoSegundaFaseSetembro << "\n";
	cout << "Outubro:   " << femininoSegundaFaseOutubro << "\n";
	cout << "Novembro:  " << femininoSegundaFaseNovembro << "\n";
	cout << "Dezembro:  " << femininoSegundaFaseDezembro << "\n";
	cout << "TOTAL:     " << femininoSegundaFaseTotal << "\n";


	cout << "\n\n";

	cout << "****   FREQUENCIA FEMININA POR SEXO E POR IDADE (50 ...)   *****\n";
	cout << "Janeiro:   " << femininoTerceiraFaseJaneiro << "\n";
	cout << "Fevereiro: " << femininoTerceiraFaseFevereiro << "\n";
	cout << "Marco:     " << femininoTerceiraFaseMarco << "\n";
	cout << "Abril:     " << femininoTerceiraFaseAbril << "\n";
	cout << "Maio:      " << femininoTerceiraFaseMaio << "\n";
	cout << "Junho:     " << femininoTerceiraFaseJunho << "\n";
	cout << "Julho:     " << femininoTerceiraFaseJulho << "\n";
	cout << "Agosto:    " << femininoTerceiraFaseAgosto << "\n";
	cout << "Setembro:  " << femininoTerceiraFaseSetembro << "\n";
	cout << "Outubro:   " << femininoTerceiraFaseOutubro << "\n";
	cout << "Novembro:  " << femininoTerceiraFaseNovembro << "\n";
	cout << "Dezembro:  " << femininoTerceiraFaseDezembro << "\n";
	cout << "TOTAL:     " << femininoTerceiraFaseTotal << "\n";

	cout << "\n\n";

	cout << "****   FREQUENCIA MASCULINA POR SEXO E POR IDADE (18-29)   *****\n";
	cout << "Janeiro:   " << masculinoPrimeiraFaseJaneiro << "\n";
	cout << "Fevereiro: " << masculinoPrimeiraFaseFevereiro << "\n";
	cout << "Marco:     " << masculinoPrimeiraFaseMarco << "\n";
	cout << "Abril:     " << masculinoPrimeiraFaseAbril << "\n";
	cout << "Maio:      " << masculinoPrimeiraFaseMaio << "\n";
	cout << "Junho:     " << masculinoPrimeiraFaseJunho << "\n";
	cout << "Julho:     " << masculinoPrimeiraFaseJulho << "\n";
	cout << "Agosto:    " << masculinoPrimeiraFaseAgosto << "\n";
	cout << "Setembro:  " << masculinoPrimeiraFaseSetembro << "\n";
	cout << "Outubro:   " << masculinoPrimeiraFaseOutubro << "\n";
	cout << "Novembro:  " << masculinoPrimeiraFaseNovembro << "\n";
	cout << "Dezembro:  " << masculinoPrimeiraFaseDezembro << "\n";
	cout << "TOTAL:     " << masculinoPrimeiraFaseTotal << "\n";

	cout << "\n\n";

	cout << "****   FREQUENCIA MASCULINA POR SEXO E POR IDADE (30-49)   *****\n";
	cout << "Janeiro:   " << masculinoSegundaFaseJaneiro << "\n";
	cout << "Fevereiro: " << masculinoSegundaFaseFevereiro << "\n";
	cout << "Marco:     " << masculinoSegundaFaseMarco << "\n";
	cout << "Abril:     " << masculinoSegundaFaseAbril << "\n";
	cout << "Maio:      " << masculinoSegundaFaseMaio << "\n";
	cout << "Junho:     " << masculinoSegundaFaseJunho << "\n";
	cout << "Julho:     " << masculinoSegundaFaseJulho << "\n";
	cout << "Agosto:    " << masculinoSegundaFaseAgosto << "\n";
	cout << "Setembro:  " << masculinoSegundaFaseSetembro << "\n";
	cout << "Outubro:   " << masculinoSegundaFaseOutubro << "\n";
	cout << "Novembro:  " << masculinoSegundaFaseNovembro << "\n";
	cout << "Dezembro:  " << masculinoSegundaFaseDezembro << "\n";
	cout << "TOTAL:     " << masculinoSegundaFaseTotal << "\n";

	cout << "\n\n";

	cout << "****   FREQUENCIA MASCULINA POR SEXO E POR IDADE (50 ...)   *****\n";
	cout << "Janeiro:   " << masculinoTerceiraFaseJaneiro << "\n";
	cout << "Fevereiro: " << masculinoTerceiraFaseFevereiro << "\n";
	cout << "Marco:     " << masculinoTerceiraFaseMarco << "\n";
	cout << "Abril:     " << masculinoTerceiraFaseAbril << "\n";
	cout << "Maio:      " << masculinoTerceiraFaseMaio << "\n";
	cout << "Junho:     " << masculinoTerceiraFaseJunho << "\n";
	cout << "Julho:     " << masculinoTerceiraFaseJulho << "\n";
	cout << "Agosto:    " << masculinoTerceiraFaseAgosto << "\n";
	cout << "Setembro:  " << masculinoTerceiraFaseSetembro << "\n";
	cout << "Outubro:   " << masculinoTerceiraFaseOutubro << "\n";
	cout << "Novembro:  " << masculinoTerceiraFaseNovembro << "\n";
	cout << "Dezembro:  " << masculinoTerceiraFaseDezembro << "\n";
	cout << "TOTAL:     " << masculinoTerceiraFaseTotal << "\n";


	cout << "\n";

	cout << "LISTA DOS NOMES DAS PESSOAS FEMINIAS: ********** \n" << tpessoasFeminino << " pessoas\n";
	for (int i = 0; i < tpessoasFeminino; i++) {
		cout << nomesFeminino[i] << "\n";
	}

	cout << "\n";

	cout << "LISTA DOS NOMES DAS PESSOAS MASCULINAS: ********** \n" << tpessoasMasculino << " pessoas\n";
	for (int a = 0; a < tpessoasMasculino; a++) {
		cout << nomesMasculino[a] << "\n";
	}


	cout << "\n\n\n";
	cout << "Obrigado por participar do BuggyAnalytics.";

	system("PAUSE");

}
