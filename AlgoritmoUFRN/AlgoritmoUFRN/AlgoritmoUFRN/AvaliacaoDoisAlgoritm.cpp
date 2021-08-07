
#include <iostream>
#include <string>
#include <iostream>
#include <vector>


using std::stringstream;
//stringstream buffer;
using namespace std;


int main() {
	/*AVALIAÇÃO - ANALISE
	* 
	* QUESTÃO 1: linhas 42/52.  o id será o campo chave e será produzido autormaticamente pelos indices do array Cliente
	* 
	* QUESTÃO 2: linha 60
	* 
	* QUESTÃO 3: linhas 69/111. como é automaticamente não precisa se preocupar com a questao de duplicidade
	* 
	* QUESTÃO 4: linhas 372/379  558/646
	* 
	* QUESTÃO 5: linhas 115/116    
	* 
	* QUESTÃO 6: linhas 655...
	* 
	* QUESTÃO 6: linhas 328/369
	* 
	* QUESTÃO 7: coração pulsando forte, veias dilatadas, suor correndo, pesadelos mim perseguindo nas minhas noites mau dormidas."Meu Deus, que é de nós" Luiz Gonzaga
	* 
	* QUESTÃO 9:
	* 
	* QUESTÃO 10:
	
	*/





	struct Preferencia {
		int id = 0;
		string cliente;
		int tipo[3][12];
		/*[0][0]...[0][11] coluna - mes
		[0][0]...[2][0] linha - tipo do pao

		1(0)- doce
		2(1)- frances
		3(2)- bolachao*/
	};

	int controleDeGeracaoDeId = 9, pao, mes = -1, quantidade, continuar;

	string TipoPaes[] = { "doce", "frances", "bolacha" };
	string Meses[] = { "Janeiro", "Fevereiro", "Marco", "Abril","Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro","Dezembro" };


	Preferencia Cliente[100];

	cout << "\n\nAlgoritmo desenvolvido por ** JOSUE CARLOS DA SILVA  **";

	cout << "\n";
	cout << "Bem-vindos ao BreadFactory!\n";
	cout << " \n O BreadFactory tem a finalidade de criar relatorios sobre as preferencias dos clientes em relacao aos 3 tipos de paes oferecidos pela padaria, quais sejam: paes doce, frances e bolachao\n";


	Cliente[0].id = 0;
	Cliente[0].cliente = "josue";
	Cliente[0].tipo[0][0] = 10;

	Cliente[0].tipo[1][0] = 10;

	Cliente[0].tipo[2][0] = 10;

	Cliente[1].id = 1;
	Cliente[1].cliente = "lucas";
	Cliente[1].tipo[0][0] = 1000;

	Cliente[2].id = 2;
	Cliente[2].cliente = "mateus";
	Cliente[2].tipo[0][0] = 10;

	Cliente[3].id = 3;
	Cliente[3].cliente = "joao";
	Cliente[3].tipo[0][0] = 10;

	Cliente[4].id = 4;
	Cliente[4].cliente = "euzebio";
	Cliente[4].tipo[0][0] = 10;

	Cliente[5].id = 5;
	Cliente[5].cliente = "Patricia";
	Cliente[5].tipo[0][0] = 10;

	Cliente[6].id = 6;
	Cliente[6].cliente = "lucas";
	Cliente[6].tipo[0][0] = 1000;

	Cliente[7].id = 7;
	Cliente[7].cliente = "mateus";
	Cliente[7].tipo[0][0] = 10;

	Cliente[8].id = 8;
	Cliente[8].cliente = "joao";
	Cliente[8].tipo[0][0] = 10;

	Cliente[9].id = 9;
	Cliente[9].cliente = "euzebio";
	Cliente[9].tipo[0][0] = 10;


	//ALTERAÇÃO DA MATRIZ DA POSICAO 3 DO VETOR QUESTAO 5
	Cliente[3].cliente = "ALCEDO Guimaraes";
	Cliente[3].tipo[0][0] = 2506;


	while (true) {

		cout << "\nDigite 1-sair, 2-novo cliente, 3-outras opcoes, 4-exclusao: \n";
		cin >> continuar;



		if (continuar == 1) {
			break;
		}
		else if (continuar == 2) {//NOVO CLIENTE -----
			controleDeGeracaoDeId++;

			if (controleDeGeracaoDeId > 99) {
				cout << "Array lotado. exclua algum cliente para adicionar um novo";
				continue;
			}

			//ID
			Cliente[controleDeGeracaoDeId].id = controleDeGeracaoDeId;

			//NOME
			cout << "\nDigite o nome do cliente: \n";
			getchar();
			getline(cin, Cliente[controleDeGeracaoDeId].cliente);


			//TIPO DO PAO
			cout << "\nDigite o pao desejado: 1-doce, 2-frances, 3-bolachao\n";
			cin >> pao;
			if (pao != 1 && pao != 2 && pao != 3) {//validacao do tipo de pao
				cout << "opcao inexistente\n";
				do {
					cout << "digite 1-doce, 2-frances, 3-bolachao\n";
					cin >> pao;
					if (pao == 1 || pao == 2 || pao == 3) {
						break;
					}
				} while (true);
			}


			//O MES
			cout << "\nDigite o mes que estamos: 1..12, Janeiro..Dezembro, respectivamente \n";
			cin >> mes;
			if (mes != 1 && mes != 2 && mes != 3 && mes != 4 && mes != 5 && mes != 6 && mes != 7 && mes != 8 && mes != 9
				&& mes != 10 && mes != 11 && mes != 12) { //validacao do mes
				cout << "opcao inexistente\n";
				do {
					cout << "Digite o mes que estamos: 1..12, Janeiro..Dezembro, respectivamente\n";
					cin >> mes;
					if (mes == 1 || mes == 2 || mes == 3 || mes == 4 || mes == 5 || mes == 6
						|| mes == 7 || mes == 8 || mes == 9 || mes == 10 || mes == 11 || mes == 12) {
						break;
					}
				} while (true);
			}


			//QUANTIDADE
			cout << "\nDigite a quantidade \n";
			cin >> quantidade;


			//CONTABILIZACAO DA QUANTIDADE
			switch (mes) {
			case 1: //JANEIRO
				if (pao == 1) {//doce
					Cliente[controleDeGeracaoDeId].tipo[0][0] = quantidade;
				}
				else if (pao == 2) {//frances
					Cliente[controleDeGeracaoDeId].tipo[1][0] = quantidade;
				}
				else {//bolachao
					Cliente[controleDeGeracaoDeId].tipo[2][0] = quantidade;
				}

			case 2: //FEVEREIRO
				if (pao == 1) {//doce
					Cliente[controleDeGeracaoDeId].tipo[0][1] = quantidade;
				}
				else if (pao == 2) {//frances
					Cliente[controleDeGeracaoDeId].tipo[1][1] = quantidade;
				}
				else {//bolachao
					Cliente[controleDeGeracaoDeId].tipo[2][1] = quantidade;
				}
			case 3: //MARCO
				if (pao == 1) {//doce
					Cliente[controleDeGeracaoDeId].tipo[0][2] = quantidade;
				}
				else if (pao == 2) {//frances
					Cliente[controleDeGeracaoDeId].tipo[1][2] = quantidade;
				}
				else {//bolachao
					Cliente[controleDeGeracaoDeId].tipo[2][2] = quantidade;
				}
			case 4: //ABRIL
				if (pao == 1) {//doce
					Cliente[controleDeGeracaoDeId].tipo[0][3] = quantidade;
				}
				else if (pao == 2) {//frances
					Cliente[controleDeGeracaoDeId].tipo[1][3] = quantidade;
				}
				else {//bolachao
					Cliente[controleDeGeracaoDeId].tipo[2][3] = quantidade;
				}
			case 5: //MAIO
				if (pao == 1) {//doce
					Cliente[controleDeGeracaoDeId].tipo[0][4] = quantidade;
				}
				else if (pao == 2) {//frances
					Cliente[controleDeGeracaoDeId].tipo[1][4] = quantidade;
				}
				else {//bolachao
					Cliente[controleDeGeracaoDeId].tipo[2][4] = quantidade;
				}
			case 6: //JUNHO
				if (pao == 1) {//doce
					Cliente[controleDeGeracaoDeId].tipo[0][5] = quantidade;
				}
				else if (pao == 2) {//frances
					Cliente[controleDeGeracaoDeId].tipo[1][5] = quantidade;
				}
				else {//bolachao
					Cliente[controleDeGeracaoDeId].tipo[2][5] = quantidade;
				}
			case 7: //JULHO
				if (pao == 1) {//doce
					Cliente[controleDeGeracaoDeId].tipo[0][6] = quantidade;
				}
				else if (pao == 2) {//frances
					Cliente[controleDeGeracaoDeId].tipo[1][6] = quantidade;
				}
				else {//bolachao
					Cliente[controleDeGeracaoDeId].tipo[2][6] = quantidade;
				}
			case 8: //AGOSTO
				if (pao == 1) {//doce
					Cliente[controleDeGeracaoDeId].tipo[0][7] = quantidade;
				}
				else if (pao == 2) {//frances
					Cliente[controleDeGeracaoDeId].tipo[1][7] = quantidade;
				}
				else {//bolachao
					Cliente[controleDeGeracaoDeId].tipo[2][7] = quantidade;
				}
			case 9: //SETEMBRO
				if (pao == 1) {//doce
					Cliente[controleDeGeracaoDeId].tipo[0][8] = quantidade;
				}
				else if (pao == 2) {//frances
					Cliente[controleDeGeracaoDeId].tipo[1][8] = quantidade;
				}
				else {//bolachao
					Cliente[controleDeGeracaoDeId].tipo[2][8] = quantidade;
				}
			case 10: //OUTUBRO
				if (pao == 1) {//doce
					Cliente[controleDeGeracaoDeId].tipo[0][9] = quantidade;
				}
				else if (pao == 2) {//frances
					Cliente[controleDeGeracaoDeId].tipo[1][9] = quantidade;
				}
				else {//bolachao
					Cliente[controleDeGeracaoDeId].tipo[2][9] = quantidade;
				}
			case 11: //NOVEMBRO
				if (pao == 1) {//doce
					Cliente[controleDeGeracaoDeId].tipo[0][10] = quantidade;
				}
				else if (pao == 2) {//frances
					Cliente[controleDeGeracaoDeId].tipo[1][10] = quantidade;
				}
				else {//bolachao
					Cliente[controleDeGeracaoDeId].tipo[2][10] = quantidade;
				}
			case 12: //DEZEMBRO
				if (pao == 1) {//doce
					Cliente[controleDeGeracaoDeId].tipo[0][11] = quantidade;
				}
				else if (pao == 2) {//frances
					Cliente[controleDeGeracaoDeId].tipo[1][11] = quantidade;
				}
				else {//bolachao
					Cliente[controleDeGeracaoDeId].tipo[2][11] = quantidade;
				}
			} // FIM  CONTABILIZACAO DA QUANTIDADE

		}
		else if (continuar == 3) {

			

			while (true)
			{
				int localEscolha;//   EDITAR O NOME OU ADICIONAR QUANTIDADE DE PAES
				cout << "\nDigite 1-Editar o nome, 2-Adicionar quantidade de paes, 3-Relatorio Individual, 4-Relatorio Geral, 5-sair\n";
				cin >> localEscolha;

				while (localEscolha != 1 && localEscolha != 2 && localEscolha != 3 && localEscolha != 4 && localEscolha != 5) {
					cout << "\nOpcao inexistente. 1-Editar o nome, 2-Adicionar quantidade de paes, 3-Relatorio,  4-Relatorio Geral, 5-sair \n";
					cin >> localEscolha;
				}

				if (localEscolha == 5) {
					break;
				}

				if (localEscolha == 4) {
					for (int r = 0; r <= controleDeGeracaoDeId; r++) {
						cout << "\nRELATORIO DE: " << Cliente[r].cliente << " ID: " << Cliente[r].id << "\n";

						for (int i = 0; i < 3; i++) {
							if (i == 0) {
								cout << "\nPao Doce\n";
								for (int ii = 0; ii < 12; ii++) {
									int xxx = Cliente[r].tipo[i][ii];
									if (Cliente[r].tipo[i][ii] < 0) {
										xxx = 0;
									}
									cout << Meses[ii] << ": " << xxx << "\n";
								}
							}

							if (i == 1) {
								cout << "\nPao frances\n";
								for (int ii = 0; ii < 12; ii++) {
									int xxx = Cliente[r].tipo[i][ii];
									if (Cliente[r].tipo[i][ii] < 0) {
										xxx = 0;
									}
									cout << Meses[ii] << ": " << xxx << "\n";
								}
							}

							if (i == 2) {
								cout << "\nPao bolachao\n";
								for (int ii = 0; ii < 12; ii++) {
									int xxx = Cliente[r].tipo[i][ii];
									if (Cliente[r].tipo[i][ii] < 0) {
										xxx = 0;
									}
									cout << Meses[ii] << ": " << xxx << "\n";
								}
							}

						}
					}
					continue;
				}


				int localId; //ENCONTRAR O CLIENTE
				cout << "Digite o Id do cliente que voce quer tratar\n";
				cin >> localId;

				while (localId > controleDeGeracaoDeId || localId < 0) {
					cout << "\nId inexistente. por favor digite novamente o Id \n";
					cin >> localId;
				}


				//TRATAMENTO DA ESCOLHAS
				if (localEscolha == 1) {
					//ESCOLHA 1 - EDITAR O NOME

					cout << "\nDigite o nome do cliente\n";
					getchar();
					getline(cin, Cliente[localId].cliente);

				}
				else if (localEscolha == 2) {
					//ESCOLHA 2 - ADICINOAR A QUANTIDADE

					//TIPO DO PAO
					cout << "\nDigite o pão desejado: 1-doce, 2-frances, 3-bolachao\n";
					cin >> pao;
					if (pao != 1 && pao != 2 && pao != 3) {//validacao do tipo de pao
						cout << "opcao inexistente";

						do {
							cout << "digite 1-doce, 2-frances, 3-bolachao";
							cin >> pao;
							if (pao == 1 || pao == 2 || pao == 3) {
								break;
							}
						} while (true);
					}


					//O MES
					cout << "\nDigite o mes que estamos: 1..12, Janeiro..Dezembro, respectivamente \n";
					cin >> mes;
					if (mes != 1 && mes != 2 && mes != 3 && mes != 4 && mes != 5 && mes != 6 && mes != 7 && mes != 8 && mes != 9
						&& mes != 10 && mes != 11 && mes != 12) { //validacao do mes
						cout << "opcao inexistente";

						do {
							cout << "Digite o mes que estamos: 1..12, Janeiro..Dezembro, respectivamente";
							cin >> mes;
							if (mes == 1 || mes == 2 || mes == 3 || mes == 4 || mes == 5 || mes == 6
								|| mes == 7 || mes == 8 || mes == 9 || mes == 10 || mes == 11 || mes == 12) {
								break;
							}
						} while (true);
					}


					//QUANTIDADE
					cout << "\nDigite a quantidade \n";
					cin >> quantidade;


					//CONTABILIZACAO DA QUANTIDADE
					switch (mes) {
					case 1: //JANEIRO
						if (pao == 1) {//doce
							Cliente[localId].tipo[0][0] = quantidade;
						}
						else if (pao == 2) {//frances
							Cliente[localId].tipo[1][0] = quantidade;
						}
						else {//bolachao
							Cliente[localId].tipo[2][0] = quantidade;
						}

					case 2: //FEVEREIRO
						if (pao == 1) {//doce
							Cliente[localId].tipo[0][1] = quantidade;
						}
						else if (pao == 2) {//frances
							Cliente[localId].tipo[1][1] = quantidade;
						}
						else {//bolachao
							Cliente[localId].tipo[2][1] = quantidade;
						}
					case 3: //MARCO
						if (pao == 1) {//doce
							Cliente[localId].tipo[0][2] = quantidade;
						}
						else if (pao == 2) {//frances
							Cliente[localId].tipo[1][2] = quantidade;
						}
						else {//bolachao
							Cliente[localId].tipo[2][2] = quantidade;
						}
					case 4: //ABRIL
						if (pao == 1) {//doce
							Cliente[localId].tipo[0][3] = quantidade;
						}
						else if (pao == 2) {//frances
							Cliente[localId].tipo[1][3] = quantidade;
						}
						else {//bolachao
							Cliente[localId].tipo[2][3] = quantidade;
						}
					case 5: //MAIO
						if (pao == 1) {//doce
							Cliente[localId].tipo[0][4] = quantidade;
						}
						else if (pao == 2) {//frances
							Cliente[localId].tipo[1][4] = quantidade;
						}
						else {//bolachao
							Cliente[localId].tipo[2][4] = quantidade;
						}
					case 6: //JUNHO
						if (pao == 1) {//doce
							Cliente[localId].tipo[0][5] = quantidade;
						}
						else if (pao == 2) {//frances
							Cliente[localId].tipo[1][5] = quantidade;
						}
						else {//bolachao
							Cliente[localId].tipo[2][5] = quantidade;
						}
					case 7: //JULHO
						if (pao == 1) {//doce
							Cliente[localId].tipo[0][6] = quantidade;
						}
						else if (pao == 2) {//frances
							Cliente[localId].tipo[1][6] = quantidade;
						}
						else {//bolachao
							Cliente[localId].tipo[2][6] = quantidade;
						}
					case 8: //AGOSTO
						if (pao == 1) {//doce
							Cliente[localId].tipo[0][7] = quantidade;
						}
						else if (pao == 2) {//frances
							Cliente[localId].tipo[1][7] = quantidade;
						}
						else {//bolachao
							Cliente[localId].tipo[2][7] = quantidade;
						}
					case 9: //SETEMBRO
						if (pao == 1) {//doce
							Cliente[localId].tipo[0][8] = quantidade;
						}
						else if (pao == 2) {//frances
							Cliente[localId].tipo[1][8] = quantidade;
						}
						else {//bolachao
							Cliente[localId].tipo[2][8] = quantidade;
						}
					case 10: //OUTUBRO
						if (pao == 1) {//doce
							Cliente[localId].tipo[0][9] = quantidade;
						}
						else if (pao == 2) {//frances
							Cliente[localId].tipo[1][9] = quantidade;
						}
						else {//bolachao
							Cliente[localId].tipo[2][9] = quantidade;
						}
					case 11: //NOVEMBRO
						if (pao == 1) {//doce
							Cliente[localId].tipo[0][10] = quantidade;
						}
						else if (pao == 2) {//frances
							Cliente[localId].tipo[1][10] = quantidade;
						}
						else {//bolachao
							Cliente[localId].tipo[2][10] = quantidade;
						}
					case 12: //DEZEMBRO
						if (pao == 1) {//doce
							Cliente[localId].tipo[0][11] = quantidade;
						}
						else if (pao == 2) {//frances
							Cliente[localId].tipo[1][11] = quantidade;
						}
						else {//bolachao
							Cliente[localId].tipo[2][11] = quantidade;
						}
					}
				}
				else if (localEscolha == 3) {
					/*
						int localEscolhaRelatorio;
						cout << "Digite: 1-relatorio individual, 2-relatorio geral\n";
						cin >> localEscolhaRelatorio;

						while (localEscolhaRelatorio != 1 && localEscolhaRelatorio != 2) {
							cout << "\nOpcao inexistente. 1-relatorio individual, 2-relatorio geral \n";
							cin >> localEscolhaRelatorio;
						}

						if (localEscolhaRelatorio == 1) {*/

					int qualMes;
					cout << "Deseja 1-Todos os meses, 2-Um mes especifico\n";
					cin >> qualMes;
					while (qualMes > 2 || qualMes < 1) {
						cout << "\nOpcao errada. 1-Todos os meses, 2-Um mes especifico\n";
						cin >> qualMes;
					}

					if (qualMes == 1) {
						//RELATORIO DE TODOS OS MESES
						cout << "\nRELATORIO DE: " << Cliente[localId].cliente << "\n";
						for (int i = 0; i < 3; i++) {
							if (i == 0) {
								cout << "\nPao Doce\n";
								for (int ii = 0; ii < 12; ii++) {
									int xxx = Cliente[localId].tipo[i][ii];
									if (Cliente[localId].tipo[i][ii] < 0) {
										xxx = 0;
									}
									cout << Meses[ii] << ": " << xxx << "\n";
								}
							}

							if (i == 1) {
								cout << "\nPao frances\n";
								for (int ii = 0; ii < 12; ii++) {
									int xxx = Cliente[localId].tipo[i][ii];
									if (Cliente[localId].tipo[i][ii] < 0) {
										xxx = 0;
									}
									cout << Meses[ii] << ": " << xxx << "\n";
								}
							}

							if (i == 2) {
								cout << "\nPao bolachao\n";
								for (int ii = 0; ii < 12; ii++) {
									int xxx = Cliente[localId].tipo[i][ii];
									if (Cliente[localId].tipo[i][ii] < 0) {
										xxx = 0;
									}
									cout << Meses[ii] << ": " << xxx << "\n";
								}
							}

						}
					}
					else {
						//O MES

						cout << "\nDigite o mes desejado: 1..12, Janeiro..Dezembro, respectivamente \n";
						cin >> mes;

						if (mes != 1 && mes != 2 && mes != 3 && mes != 4 && mes != 5 && mes != 6 && mes != 7 && mes != 8 && mes != 9
							&& mes != 10 && mes != 11 && mes != 12) { //validacao do mes
							cout << "\nopcao inexistente\n";
							do {
								cout << "Digite o mes que estamos: 1..12, Janeiro..Dezembro, respectivamente\n";
								cin >> mes;
								if (mes == 1 || mes == 2 || mes == 3 || mes == 4 || mes == 5 || mes == 6
									|| mes == 7 || mes == 8 || mes == 9 || mes == 10 || mes == 11 || mes == 12) {
									break;
								}
							} while (true);
						}

						cout << "RELATORIO DE: " << Cliente[localId].cliente << " DO MES DE " << Meses[mes - 1] << "\n";
						for (int i = 0; i < 3; i++) {

							int xxx = Cliente[localId].tipo[i][mes - 1];
							if (Cliente[localId].tipo[i][mes - 1] < 0) {
								xxx = 0;
							}
							cout << TipoPaes[i] << ": " << xxx << "\n";
						}
					}


					//}
				}
			}
			
			
		}
		else {
			int localId; //ENCONTRAR O CLIENTE
			cout << "Digite o Id do cliente que voce quer excluir\n";
			cin >> localId;

			while (localId > controleDeGeracaoDeId || localId < 0) {
				cout << "\nId inexistente. por favor digite novamente o Id \n";
				cin >> localId;
			}

			int excluir;
			cout << "ID encontrado. Cliente: " << Cliente[localId].cliente <<"\n Deseja realmente Excluir? 1-sim, 2-nao \n";
			cin >> excluir;
			while (excluir>2 || excluir<1)
			{
				cout << "Opcao invalida. 1-sim, 2-nao  ";
			}

			if (excluir == 1) {
				for (int exclusao = localId; exclusao < controleDeGeracaoDeId; exclusao++) {
					Cliente[exclusao].cliente = Cliente[exclusao + 1].cliente;
					Cliente[exclusao].id = Cliente[exclusao + 1].id;

					for (int ExcluirMatrizLinha = 0; ExcluirMatrizLinha < 3; ExcluirMatrizLinha++) {
						for (int ExcluirMatrizColuna = 0; ExcluirMatrizColuna < 12; ExcluirMatrizColuna++) {
							Cliente[exclusao].tipo[ExcluirMatrizLinha][ExcluirMatrizColuna] = Cliente[exclusao + 1].tipo[ExcluirMatrizLinha][ExcluirMatrizColuna];
						}
					}

				}
				controleDeGeracaoDeId--;

			}
		}
	}
	system("PAUSE");
}