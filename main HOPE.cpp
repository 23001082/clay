

public class CarlysEventDemo {
    public static void main(String[] args) {

        Event event = new Event();


        event.setEventNumber(getEventNumber());
        event.setNumberOfGuests(getNumberOfGuests());


        CarlysEventPriceWithMethods.displayMotto();


        displayEventDetails(event);
    }


    public static String getEventNumber() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the event number: ");
        String eventNumber = input.nextLine();
        return eventNumber;
    }


    public static int getNumberOfGuests() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of guests: ");
        int guests = input.nextInt();
        return guests;
    }


    public static void displayEventDetails(Event event) {
        final double PRICE_PER_GUEST = 35.00;
        final int LARGE_EVENT_THRESHOLD = 50;
        double totalPrice = event.getNumberOfGuests() * PRICE_PER_GUEST;

        System.out.println("\nEvent Details:");
        System.out.println("Event Number: " + event.getEventNumber());
        System.out.println("Number of Guests: " + event.getNumberOfGuests());
        System.out.printf("Price per Guest: $%.2f%n", PRICE_PER_GUEST);
        System.out.printf("Total Price: $%.2f%n", totalPrice);

        if (event.getNumberOfGuests() >= LARGE_EVENT_THRESHOLD) {
            System.out.println("Classification: Large Event");
        } else {
            System.out.println("Classification: Not a Large Event");
        }
    }
}
