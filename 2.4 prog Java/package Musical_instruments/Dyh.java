package Musical_instruments;

public class Dyh extends Musical_instruments {
    public Dyh(String name, int age) {
        super(name, age);
    }

    @Override
    public void play() {
        System.out.println(" Со сцены ушел музыкант, который играл на таком замечательном интсрументе, как   " + getName());
    }

    public void dydit() {
        System.out.println("Дудит инструмент, которому уже " + getAge() + " лет! ");
    }

}
