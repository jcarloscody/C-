package dominian;
import java.util.Scanner;
import dominian.validation.ValidationDoc;

public class Employe extends GeralAbstr {
	
	private int identificador;
	private String nome;
	private User user;
	
	public Employe() {
		
	}
	
	public Employe(String nome, String username, String password ) {
		super();
		this.identificador = this.ID;
		this.nome = nome;

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
	}
	
	public User getUse() {
		return user;
	}
	

	
	public void alterar(String nome) {
		this.nome = nome;
	}
	
	public void alterar(String nome, String username, String password) {
		this.nome = nome;
		user.setUsername(username);
		user.setPassword(password);
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
		return String.format("ID: " + identificador + " nome: " + nome +  " username: " + this.user.getUsername() + " pass " + this.user.getPassword());
	}

	@Override
	public String getNome() {
		// TODO Auto-generated method stub
		return nome;
	}




}
