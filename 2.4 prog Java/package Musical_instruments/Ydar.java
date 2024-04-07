package Musical_instruments;

public class Ydar extends Musical_instruments{
    public Ydar(String name, int age) {
        super(name, age);
    }

    @Override
    public void play() {
        System.out.println("Выступает инструмент -  " + getName());
    }

    public void vosrast() {
        System.out.println( getName() + " играет на сцене уже - " + getAge() + " лет");
    }

}
