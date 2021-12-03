package dominian.validation;

import java.util.InputMismatchException;

public final class ValidationDoc {
	
	
	public static  boolean password(String pass) {
		if (pass.length()<8) {
			return false;
		} else {
			return true;
		}
	}
}
