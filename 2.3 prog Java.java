
import java.util.Scanner;
import java.util.Random;
public class Main {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();
        StringBuilder qwert = new StringBuilder();
        
        System.out.println("Введите строку");
        String str1 = scanner.nextLine();
        System.out.println("Введите слово");
        String str2=  scanner.nextLine();
        int x = random.nextInt(10);
        System.out.println("Генерация рандомного числа:"+ x);
        int len1 =str1.length();
        int len2 =str2.length();
        System.out.println("Длинна первой строки: " + len1);
        System.out.println("Длинна второй строки: " + len2);
        int a=0;
        for (int i=0; i<len1; i++)
        {
            qwert.append(str1.charAt(i));
            if ((i+1)%x==0)
            {
                qwert.append(str2);
                a=a+1;
            }
        }
        String result = qwert.toString();
        System.out.println(result);
        int s=result.length();
        double y= Math.sqrt(((s-len2)/a)+x);
        System.out.println(y);
        System.out.println(a);
    }     
}
