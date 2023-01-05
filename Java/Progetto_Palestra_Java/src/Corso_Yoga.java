public class Corso_Yoga extends Corso{
	
	//Corso Yoga costa 60
	private Corso_Yoga() {		
		this.giorno = giorno.SABATO;
		this.costo = 60;
	};
	
	private static Corso_Yoga mioYoga = null;
	
	public static Corso_Yoga mioYoga() {		//singleton pattern, può esistere un solo corso Yoga
		if(mioYoga == null) mioYoga = new Corso_Yoga();
			return mioYoga;
	}
	
	@Override
	public String toString() {
		return this.giorno + " -> Yoga";
	}

}

