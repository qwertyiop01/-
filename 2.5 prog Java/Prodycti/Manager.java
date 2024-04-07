package Prodycti;


import java.util.ArrayList;
public class Manager {

    private static final ArrayList<Prodycti> list = new ArrayList<>();


    public static void addMeat(String name, int price, int kg) {
        Myaso myaso = new Myaso(name, price, kg);
        list.add(myaso);
    }

    ;

    public static void addFish(String name, int price) {
        Fish fish = new Fish(name, price);
        list.add(fish);

    }

    ;
    public static void vivod(){
        int c=1;
        for (int i=0; i < list.size(); i++) {
            System.out.print(c+ ") ");
            Prodycti y = list.get(i);
            y.vivodtovara();
            c++;

        }
    }
    public static void removeProd(int x) {
        if (x>=list.size()) {
            System.out.println("Товара с указанным индексом не существует");
            return;
        }
        list.remove(x);
    }
    public static void getProdycti(int b) {
        if (b >= list.size()) {
            System.out.println("Товара с указанным индексом не существует");
            return;
        }
        Prodycti j;
        j = list.get(b);
        j.vivodtovara();
    }

}

