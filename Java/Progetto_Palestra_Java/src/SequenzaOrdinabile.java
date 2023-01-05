import java.util.ArrayList;
import java.util.List;

//Lista generica di oggetti, ordinabile
public class SequenzaOrdinabile<T extends Comparable <T>>{
	List<T> array = new ArrayList<T>();
	
	//Quando inserisco qualcosa controllo che non sia già presente lo stesso ogetto
	void insert(T obj){							
		for(int k=0; k< array.size(); k++) {
			if(array.get(k).compareTo(obj) == 0)
				return;
		}
		array.add(obj);
	}
	
	void sort(){
		array.sort(null);
	}
	
	public String toString() {
		String s = "";
		for(int k=0; k< array.size(); k++) {
			s = s.concat(array.get(k).toString() + "\n");
		}
		return s;
	}
	
	//Controlla che non esista già lo stesso oggetto ("ignorando" l'hashcode)
	public T find(T obj){						
		for(int k=0; k< array.size(); k++) {
			if((array.get(k)).compareTo(obj) == 0)
				return (array.get(k));
		}
		return obj;
	}
}
