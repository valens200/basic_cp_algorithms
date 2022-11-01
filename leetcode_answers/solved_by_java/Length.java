package solved_by_java;

public class Length {

    public static void main(String[] args) {
        System.out.print("Input : s = ");
     System.out.println(   getLength("fly me   to   the moon  "));
        
    }

    public static int getLength(String s){
        System.out.println();

        String[] main = s.split(" ");
        return main[main.length - 1].length();
    }
    
}
