
public class Abbonato implements Comparable<Abbonato>, AbbonatoIF{

	String nome;
	String cognome;
	private static int codice_globale = 0;
	final int codice;
	int anno_nascita;
	protected double conto;
	private boolean sconto_base = false;
	
	public Abbonato(String nome, String cognome, int anno_nascita) {
		this.nome = nome;
		this.cognome = cognome;
		this.anno_nascita = anno_nascita;
		codice = codice_globale++;
		conto = 500;
	}
	
	public String toString() {
		return codice + " " + conto +"€ " + " " + nome + " " + cognome + " " + anno_nascita + " ";
	}
	
	//Esiste uno sconto base del 10% che viene applicato solo una volta se il conto non è più basso di 400 euro
	public void applicaSconto() {
		if(!sconto_base && this.conto*0.9 >= 400) {
			this.conto = this.conto*0.9;
			System.out.println("Sconto del 10.0% applicato all'abbonato " + this.codice + " -" + this.conto*0.1 + "€\n");
			sconto_base = true;}
	}
	
	//Sconto più generico, riceve in input uno sconto e lo esegue solo se il conto non scende sotto 400
	public void applicaSconto(double sconto) {
		if((this.conto - this.conto*sconto) >= 400) {
			this.conto = this.conto - this.conto*sconto;
			System.out.println("Sconto del " + sconto*100 + "% applicato all'abbonato " + this.codice + " -" + this.conto*sconto + "€\n");
			sconto_base = true;}
	}
	
	@Override
	public int compareTo(Abbonato a) {
		if(codice == a.codice) return 0;
		if(codice < a.codice) return -1;
		return 1;
	}

}

