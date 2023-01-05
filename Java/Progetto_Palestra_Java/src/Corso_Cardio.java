public class Corso_Cardio extends Corso{
	
	//Corso cardio costa 50 
	public Corso_Cardio(giorno giorno) {
		this.giorno = giorno;
		this.costo = 50;
	}
	
	@Override
	public String toString() {
		return this.giorno + " -> Cardio";
	}
}
