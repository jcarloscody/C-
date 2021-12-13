package dominian;
import java.util.Scanner;
import java.lang.Object;

import dominian.estruturaHeranca.Comum;
import dominian.validation.ValidationDoc;

public class Employe extends Comum {
	
	private static int cont = 0;
	private int identificador;
	private String cpf;
	private User user;
	private Contatos contato;
	
	
	public Employe(String nome, String username, String password ) {
		super(nome);
		this.identificador = ++this.cont;
		this.cpf = "sem cpf";

		if (ValidationDoc.password(password)) {
			
			this.user = new User(username, password, this.identificador);
		} else {
			while (true) {
				
				Scanner input = new Scanner(System.in);
				System.out.println("Senha com menos de 8 indices: Digite sua senha novamente");
				String pass = input.nextLine();
				
				if (ValidationDoc.password(pass)) {
					this.user = new User(username, pass, this.identificador);
					break;
				} else {
					continue;
				}
			}
		}
		
		this.contato = new Contatos();

	}
	
	
	public Employe(String nome, String cpf, String username, String password, String contato ) {
		super(nome);
		this.identificador = ++this.cont;
		this.cpf = cpf;

		if (ValidationDoc.password(password)) {	
			this.user = new User(username, password, this.identificador);
		} else {
			while (true) {
				
				Scanner input = new Scanner(System.in);
				System.out.println("Senha com menos de 8 indices: Digite sua senha novamente");
				String pass = input.nextLine();
				
				if (ValidationDoc.password(pass)) {
					this.user = new User(username, pass, this.identificador);
					break;
				} else {
					continue;
				}
			}
		}
		
		this.contato = new Contatos(contato, this.identificador);
	}
	
	
	
	public User getUse() {
		return user;
	}
	
	public Contatos getContato() {
		return contato;
	}
	
	public void alterar(String cpf) {
		this.cpf = cpf;
	}
	
	public void alterar(String nome, String cpf, String username, String password, String telefone) {
		super.setNome(nome);
		this.cpf = cpf;
		user.setUsername(username);
		if (ValidationDoc.password(password)) {
			user.setPassword(password);
		} else {
			while (true) {	
				Scanner input = new Scanner(System.in);
				System.out.println("Senha com menos de 8 indices: Digite sua senha novamente");
				String pass = input.nextLine();
				if (ValidationDoc.password(pass)) {
					user.setPassword(password);
					break;
				} else {
					continue;
				}
			}
		}
		
		getContato().setTelefone(telefone);
	}
	
	public String getUsername() {
		return user.getUsername();
	}
	
	public int getIdentificador() {
		return identificador;
	}
	
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return String.format("ID: " + identificador + " nome: " + getNome() + " cpf: " + cpf +  " username: " + this.user.getUsername() + " pass " + this.user.getPassword() + "| Contato: telefone - " + getContato().getTelefone());
	}

}
