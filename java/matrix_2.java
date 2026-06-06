
    import java.util.*;

    public class matrix_2 {
        public static void search(int matrix[][]) {
        }
    public static void main(String[] args[]) {
        int matrix[][] = new int[3][3];
        int m = matrix.length;
        int n = matrix[0].length;

        Scanner sc = new Scanner(System.in);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
       matrix[i][j] = sc.nextInt();
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                System.out.println(matrix[i][j] + " ");
            }
        }
        System.out.println();
    }
    }