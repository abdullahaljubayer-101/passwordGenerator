public class Main {
    public static void main(String[] args) {
        for (int i = 0; i < 10; ++i)
            while (true) {
                int x = (int) (Math.random() * 128);

                if (x >= 33 && x <= 126) {
                    System.out.printf("%c", x);
                    break;
                }
            }

        System.out.println();
    }
}