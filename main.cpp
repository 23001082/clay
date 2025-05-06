

public class CarlysCatering {
    public static void main(String[] args) {
        int numGuests = getNumberOfGuests();
        displayMotto();
        computeAndDisplayEventDetails(numGuests);
    }


    public static int getNumberOfGuests() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of guests: ");
        int guests = input.nextInt();
        input.close();
        return guests;
    }


    public static void displayMotto() {
        System.out.println("*carly's makes the food that makes the party*");
        System.out.println("* Carly's makes the food that makes the party. *");
        System.out.println("*carly's makes the food that makes the party *");
    }

    public static void computeAndDisplayEventDetails(int guests) {
        final double PRICE
