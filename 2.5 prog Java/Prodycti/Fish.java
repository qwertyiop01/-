package Prodycti;

public class Fish extends Prodycti{
    public Fish(String name, int price) {
        super(name, price);
    }

    @Override
    public void vivodtovara( ){
        System.out.println (getName()+ " по -  " + getPrice() + " руб.");
    }
}
