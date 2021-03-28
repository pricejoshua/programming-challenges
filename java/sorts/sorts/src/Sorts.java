import java.util.Random;

public class Sorts {
    public static void main(String[] args){
        
    }


    public int[] populateArray(int len, int range){
        int[] toReturn = new int[len];
        Random rand = new Random();
        for (int i = 0; i < len; i++){
            toReturn[i] = rand.nextInt(range);
        }
        return toReturn;
    }
}