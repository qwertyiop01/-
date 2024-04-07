import java.util.Scanner;
public class Main {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Введите координату х и у верхнего левого угла прямоугольника");
        int x =  scanner.nextInt();
        int y =  scanner.nextInt();
        System.out.println("Введите ширину прямоугольника");
        int a = scanner.nextInt();
        System.out.println("Введите высоту прямоугольника");
        int h = scanner.nextInt();
        a= a+x;
        h= y-h;
        System.out.println("Введите координату х и у");
        int xa =  scanner.nextInt();
        int yh =  scanner.nextInt();
        if (xa<=a&&xa>=x)
        {
            if(yh<=y&&yh>=h)
            {
               System.out.println("Введенные координаты находятся внутри прямоугольника"); 
            }
            else{
                System.out.println("Введенные координаты находятся вне прямоугольника");
            }     
        }else {
        System.out.println("Введенные координаты находятся вне прямоугольника"); 
        }
    }   
}
