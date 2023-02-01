import java.util.ArrayList;
import java.util.List;

public class Abbonato_plus extends Abbonato{
	
	//Lista di corsi, ogni abbonato_plus ha la sua
	List<Corso> corsi = new ArrayList<Corso>();
	
	public Abbonato_plus(String nome, String cognome, int anno_nascita) {
		super(nome, cognome, anno_nascita);
		this.conto = 520;	//Il conto di un abbonato_plus è maggiore di base
	}
	
	//Override del metodo toString
	public String toString() {
		return codice + " " + conto + "€ " + " " + nome + " " + cognome + " " + anno_nascita + " Corsi: " + corsi.toString();
	}
	
	//Utilizzo di varargs per inserire più corsi in una sola chimata della funzione
	//Il corso viene aggiunto solo nel caso che l'abbonato non abbia già lo stesso identico corso (stesso hashCode)
	public void aggiungi_corso(Corso... corsetti) {
		for(Corso corso : corsetti) {
			if(corsi.contains(corso)) {
				System.out.println("Abbonato " + this.codice + " già iscritto al corso " + corso.toString() + "\n");
			} else {
				corsi.add(corso);
				this.conto = this.conto + corso.getCosto();
				System.out.println("Abbonato " + this.codice + " iscritto correttamente al corso " + corso.toString() + " +" + corso.costo + "€\n");
			}
		}
		corsi.sort(null);
	}
}
