package dominian;

import dominian.estruturaHeranca.Comum;

public class Client extends Comum{
	
	private String cpf;
	private static int cont = 0;
	private int id;

	public Client(String nome, String cpf) {
		super(nome);
		this.cpf = cpf;
		this.id = ++cont;
	}

	public String getCpf() {
		return cpf;
	}

	public void setCpf(String cpf) {
		this.cpf = cpf;
	}
	
	
	

}
