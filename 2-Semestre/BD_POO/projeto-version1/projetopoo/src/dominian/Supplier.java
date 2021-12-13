package dominian;

import dominian.estruturaHeranca.Comum;

public class Supplier extends Comum {
	
	private String cnpj;
	private static int cont = 0;
	private int id;
	
	public Supplier(String nome, String cnpj) {
		super(nome);
		this.cnpj = cnpj;
		this.id = ++cont;
	}

	public String getCnpj() {
		return cnpj;
	}

	public void setCnpj(String cnpj) {
		this.cnpj = cnpj;
	}
	
	
}
