public class Main {

	public static void main(String[] args) {
		
		//Creazione abbonati e abbonati plus
		Abbonato a = new Abbonato("Gionatha", "Pirola", 2000);
		Abbonato_plus b = new Abbonato_plus("Alessandro", "Colombo", 2001);
		Abbonato c = new Abbonato_plus("Andrew", "Slow", 2000);	//c non può avere corsi essendo dichiarato come abbonato
		
		//Creazione di una lista di abbonati
		SequenzaOrdinabile<Abbonato> Abbonati = new SequenzaOrdinabile();
		
		Abbonati.insert(a);
		Abbonati.insert(c);
		Abbonati.insert(b);
		//Ordinamento in base al codice degli abbonati
		Abbonati.sort();
		
		//Creazione dei corsi
		Corso_Cardio ca = new Corso_Cardio(giorno.LUNEDI);
		Corso_Cardio ca2 = new Corso_Cardio(giorno.LUNEDI);		
		Corso_Cardio cc = new Corso_Cardio(giorno.GIOVEDI);
		Corso_Yoga cy = Corso_Yoga.mioYoga();
		
		SequenzaOrdinabile<Corso> Corsi = new SequenzaOrdinabile();
		Corsi.insert(cy);
		Corsi.insert(ca);
		Corsi.insert(ca2);	//Non viene inserito in realtà perchè esiste già il corso di addominali il lunedi, implementato con compareTo
		Corsi.insert(cc);
		
		Corsi.sort();	//Ordinamento dei corsi in ordine di giorno
		
		System.out.println(Corsi.toString());
		
		//Aggiunta dei corsi all'abbonato b
		//Il metodo find restituisce il corso passato se presente nell'array dei corsi, altrimenti restituisce il corso uguale ma con diverso hashcode
		b.aggiungi_corso((Corso) Corsi.find(ca),(Corso) Corsi.find(ca2), (Corso) Corsi.find(cy), (Corso) Corsi.find(cc));

		System.out.println(Abbonati.toString());
		
		//Per binding dimanico
		a.applicaSconto();
		a.applicaSconto(0.01);
		
		System.out.println(Abbonati.toString());
	}

}
