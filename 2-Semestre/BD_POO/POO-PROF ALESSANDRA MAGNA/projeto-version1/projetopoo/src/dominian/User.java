package dominian;

public class User {
	private static int cont = 0;
	private int Id;
	private String username, password;
	private int id_employe;
	
	public User(String username, String password, int id_employe) {
		this.username = username;
		this.password = password;
		this.id_employe = id_employe;
		this.Id = ++cont;
	}
	
	public void setUsername(String username) {
		this.username = username;
	}
	
	public void setPassword(String password) {
		this.password = password;
	}	
	
	public String getUsername() {
		return username;
	}
	
	public String getPassword() {
		return password;
	}
	
	public int getId() {
		return Id;
	}
}

