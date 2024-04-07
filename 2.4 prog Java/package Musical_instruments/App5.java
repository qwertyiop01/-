package Musical_instruments;

public class App5 {
    public static void main(String[] args) {
        Ydar ydar = new Ydar("барабан", 3);
        Stryn stryn= new Stryn("гитара", 1);
        Dyh dyh =new Dyh("труба", 6);
        ydar.who();
        ydar.play();
        ydar.play(10);
        ydar.vosrast();
        stryn.who();
        stryn.play();
        stryn.play(20);
        stryn.svychit();
        stryn.svychit(10);
        dyh.play();
        dyh.play(15);
        dyh.dydit();
    }

}
