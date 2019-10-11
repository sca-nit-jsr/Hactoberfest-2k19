import java.util.TreeSet;

/**
 * Example use of the java.util.TreeSet class
 */
public class TreeSetExample {

    public static void main(String[] args) {

        // Instance using Default Constructor
        TreeSet<String> treeSet = new TreeSet<String>();
        // adding elements using the .add() method
        treeSet.add("Simple");
        treeSet.add("TreeSet");
        treeSet.add("TreeSet");

        // output will be a set of strings in the instance.
        System.out.println(treeSet);

        // TreeSet is implemented from the SortedSet interface and will omit duplicates
        TreeSet<Integer> duplicateEntryTreeSet = new TreeSet<Integer>();
        duplicateEntryTreeSet.add(300);
        duplicateEntryTreeSet.add(102);

        // Duplicate value will not be stored
        duplicateEntryTreeSet.add(102);

        // Output will be [102, 300]
        System.out.println(duplicateEntryTreeSet);

        // Objects stored in TreeSet should be homogeneous
        // and comparable otherwise the program will throw an exception
        TreeSet<StringBuilder> builderSet = new TreeSet<StringBuilder>();
        // Will result in java.lang.ClassCastException
        builderSet.add(new StringBuilder("T"));
        builderSet.add(new StringBuilder("M"));
        builderSet.add(new StringBuilder("I"));

    }
}
