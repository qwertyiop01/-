package Musical_instruments;

public class Stryn extends Musical_instruments {
    public Stryn(String name, int age) {
        super(name, age);
    }

    @Override
    public void play() {
        System.out.println("Сейчас выступает - " + getName());
    }

    public void svychit() {
        System.out.println("Как же прексрано звучит " + getName() + " на этой сцене" );
    }
    public void svychit( int x) {
        System.out.println( getName() + " - Это инструмент, который играет на сцене уже " + x +"min");
    }
}
