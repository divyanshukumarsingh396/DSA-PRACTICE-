public class practice {

    public static void main (String[] args){

        int arr[] = {8, 42, 83, 54,25};
        int max = arr[0];

    for(int i=0; i<arr.length; i++){
        if(max<arr[i]){
            max = arr[i];
        }
        else{
            max = max;
        }

    }
    System.out.println("The maximum element is: " + max);
   }
}