package Prodycti;

public class Myaso extends Prodycti {
    private int kg;
    public Myaso(String name, int price, int kg) {
        super(name, price);
        this.kg= kg;
    }

    @Override
    public void vivodtovara( ){
        System.out.println (getName()+ " - "+ kg + " килограмма/ По - :"+ getPrice() + " руб." );
    }
    public int getKg(){
        return kg;
    }

}
