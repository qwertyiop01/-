package Tester;
import Prodycti.Prodycti;
import Prodycti.Manager;
import java.util.Scanner;
public class Tester {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Сколько пришло мяса?");
        int m = scanner.nextInt();
        System.out.println("Сколько пришло рыбы?");
        int f = scanner.nextInt();

        System.out.println("********* СОЗДАНИЕ СПИСКА ********");
        System.out.println("Вписываем цену и килограммы мяса");
        for (int i=0; i<m; i++){
            System.out.println("Какая цена?");
            int pm = scanner.nextInt();
            System.out.println("Сколько килограмм?");
            int k = scanner.nextInt();
            Manager.addMeat ("Мясо",pm,k);
        }
        System.out.println("Вписываем цену рыбы");
        for (int i=0; i<f; i++){
            System.out.println("Какая цена?");
            int pf = scanner.nextInt();
            Manager.addFish ("Рыба",pf);
        }
        System.out.println("********* ВЫВОД СПИСКА ********");
        Manager.vivod();
        int flag = 1;
        System.out.println("********* УДАЛЕНИЕ ОПРЕДЕЛЕННОЙ СТРОЧКИ ********");
        while(flag==1){
            System.out.println("Хотите удалить строчку? (1-да, 0-нет)");
            flag = scanner.nextInt();
            if (flag == 1) {
                System.out.println("Какой индекс вы хотите удалить?");
                int index = scanner.nextInt();
                Manager.removeProd(index-1);
                Manager.vivod();
            } else {
                break;
            }
        }


        System.out.println("********* ВЫДЕЛЕНИЕ ОПРЕДЕЛЕННОЙ СТРОЧКИ ********");
        System.out.println("Хотите выделить строчку? (1-да, 0-нет)");
        int flagg = scanner.nextInt();
        if (flagg ==1){
            System.out.println("Какой индекс вы хотите выделить?");
            int indexx = scanner.nextInt();
            Manager.getProdycti(indexx-1);


        }
        else{
            System.out.println("Конец программы");
        }







    }
}
