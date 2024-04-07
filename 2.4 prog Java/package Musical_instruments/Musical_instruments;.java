package Musical_instruments;

public abstract class Musical_instruments {
    private String name;
    private int age;

    public Musical_instruments( String name, int age){
        this.name= name;
        this.age=age;
    }

    public void play(){
        System.out.println("Играет музыкальный инструмент: " + name);
    }
    public void play(int min){
        System.out.println("Музыкальный инструмент:" + name + ", играет на сцене: "+  + min + " минут");
    }
    public void who() {
        System.out.println("Наааа сцеенеее: " + name + "!");
    }
    public String getName() {
        return name;
    }
    public int getAge() {
        return age;
    }
}
