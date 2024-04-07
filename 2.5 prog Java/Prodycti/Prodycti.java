package Prodycti;

public  abstract class Prodycti {
    private String name;
    private int price;
    public Prodycti ( String name, int price){
        this.name= name;
        this.price=price;
    }
    public void vivodtovara()
    {
        System.out.println("Товар: " + name + " Цена: " + price);
    }

    public int getPrice() {
        return price;
    }

    public String getName() {
        return name;
    }


}
