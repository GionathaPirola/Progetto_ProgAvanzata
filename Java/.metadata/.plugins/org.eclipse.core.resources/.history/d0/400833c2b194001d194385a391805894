//Classe astratta, con comparable per ordinamento
public abstract class Corso implements Comparable<Corso>{
	
	protected giorno giorno;
	protected int costo;
	
	public  int getCosto() {
		return costo;
	}
	
	public giorno getOra_inizio() {
		return giorno;
	}
	
	public abstract String toString();
	
	@Override
	public int compareTo(Corso a) {
		return this.giorno.compareTo(a.giorno);		//per ordinare in base ai giorni
	}
}
