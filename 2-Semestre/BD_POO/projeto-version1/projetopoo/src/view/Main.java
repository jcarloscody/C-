package view;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Scanner;



import dominian.Employe;
import dominian.User;
import dominian.estruturaHeranca.Comum;
import dominian.validation.ValidationDoc;

public class Main {
	static Scanner input = new Scanner(System.in);
	static List<Employe> lista  = new ArrayList<Employe>();
	static Employe userAtual ;
	
	public static void main(String[] args) {
		Employe e = new Employe("josue",  "admin", "12345678");
		lista.add(e);

	
		while (true) {
			boolean login = login();
			
			if (login) {
				boolean continuar = true;
				System.out.println("Bem vindo, " + userAtual.getNome() + "!!");
				while (continuar) {
					
					switch (menuPrincipal()) {
					case 1:
						cadastro();
						break;
					case 2:
						todosFuncionarios();
						break;
					case 3:
						alterarCadastro();
						break;
					case 4:
						consulta();
						break;
					case 5:
						consultaUser();
						break;
					case 6:
						continuar = false;
						userAtual.alterar("");
						break;
					}
				}
			} else {
				System.out.println("Login inexistente! tente novamente");
				continue;
			}	
		}
	}
	
	public static boolean login() {
		System.out.println("Digite username");
		String username = input.nextLine();
		System.out.println("Digite  password");
		String password = input.nextLine();
		
		for (Employe employe : lista) {
			if ((employe.getUse().getUsername().equals(username)) && (employe.getUse().getPassword().equals(password))) {
				userAtual = employe;
					//userAtual.alterar(employe.getNome());
				return true;
			}
		}
		return false;
	}
	
	public static int menuPrincipal() {
		System.out.println("Digite a opção desejada");
		System.out.println("1 - cadastro de Funcionario");
		System.out.println("2 - todos os funcionarios");
		System.out.println("3 - alteração de Funcionario");
		System.out.println("4 - consulta de Funcionario");
		System.out.println("5 - todos os usuarios");
		System.out.println("6 - Sign out");
		
		int op  = input.nextInt();
		input.nextLine();
		
		return op;
	}
	
	public static List<Employe> consultaFuncionario() {
		System.out.println("1 - por nome");
		System.out.println("2 - por ID");
		int op = input.nextInt();
		input.nextLine();
		List<Employe> list = new ArrayList<Employe>();
		switch (op) {
		case 1:
			System.out.println("Digite o nome");
			String nome  = input.nextLine();
			
			for (Employe employe :  lista) {
				if (employe.getNome().equals(nome)) {
					list.add(employe);
				}
			}
			return list;
		case 2:
			System.out.println("Digite o ID");
			int id  = input.nextInt();
			input.nextLine();
			for (Employe employe :  lista) {
				if (employe.getIdentificador()==id) {
					list.add(employe);
				}
			}
			return list;
		}
		return list;
	}

	public static void cadastro() {
		System.out.println("Digite seu nome");
		String nome = input.nextLine();
		System.out.println("Digite seu username");
		String username = input.nextLine();
		System.out.println("Digite sua senha");
		String senha = input.nextLine();
		System.out.println("Digite seu cpf");
		String cpf = input.nextLine();
		System.out.println("Digite seu telefone");
		String telefone = input.nextLine();
		
		lista.add(new Employe(nome,cpf, username, senha, telefone));

	}
	
	public static void consulta() {
		List<Employe> listConsulta = consultaFuncionario();
		if (listConsulta.size()>0) {
			for (Employe employe : listConsulta) {
				System.out.println(employe);
			}
		} else {
			System.out.println("Não encontrado");
		}
	}
	
	public static void consultaUser() {
		for (Employe employe :  lista) {
			
			System.out.println("FK_funcionario: " + employe.getIdentificador() + " PK_user: " + employe.getUse().getId() + " username: " + employe.getUse().getUsername());
		}
	}
	
	public static void todosFuncionarios() {
		for (Employe employe :  lista) {
			System.out.println(employe);
			}
		}
	
	public static void alterarCadastro() {
		System.out.println("Digite o ID:");
		int op = input.nextInt();
		input.nextLine();
		int encontrou = -1;
		for (Employe employe :  lista) {
			if (employe.getIdentificador() == op) {
				System.out.println("Encontramos: " + employe.getNome() + ". É este usuário? 1-sim, 2-nao");
				int op2 = input.nextInt();
				 input.nextLine();
				if(op2==1) {
					System.out.println("Digite seu nome");
					String nome = input.nextLine();
					System.out.println("Digite seu username");
					String username = input.nextLine();
					System.out.println("Digite sua senha");
					String senha = input.nextLine();
					System.out.println("Digite seu cpf");
					String cpf = input.nextLine();
					System.out.println("Digite seu telefone");
					String telefone = input.nextLine();
					employe.alterar(nome, cpf, username, senha, telefone);  
				}
			}
		}
	}
}
