public class SelectionSort<K extends Comparable<K>> implements SortingAlg<K> {

    @Override
    public K[] sort(K[] input) {
        for (int i = 0; i < input.length; i++){
            int min = i;
            for (int j = i; j < input.length; j++){
                if(input[min].compareTo(input[j]) < 0){
                    min = j;
                }
            }
            K temp = input[min];
            input[min] = input[i];
            input[i] = temp;
        }
        return input;
    }
    
}