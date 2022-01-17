package dominian;

public class Contatos {
	
	private String telefone;
	private static int cont = 0;
	private int id;
	private int fk_id;
	
	
	public Contatos() {
		
	}
	
	public Contatos(String telefone, int fk_id) {
		this.telefone = telefone;
		this.id = ++cont;
		this.fk_id = fk_id;
	}
	
	public String getTelefone() {
		return telefone;
	}

	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}	
}
