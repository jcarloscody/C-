package dominian.estruturaHeranca;

import dominian.interf.Geral;

public abstract class Comum implements Geral{
	
	private String nome;
	
	public Comum(String nome) {
		this.nome = nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	public String getNome() {
		return nome;
	}
	
	
	
	//obs, situação, contatos
	

}
