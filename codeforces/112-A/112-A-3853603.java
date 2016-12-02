import java.util.Scanner;
/**
 *
 * @author AM
 */
public class Tst {

    /**
     * @param args the command line arguments
     */
   
    public static void main(String[] args) {
   
      Scanner in =new Scanner(System.in);
      String first = in.next();
      String secound=in.next();
     first= first.toLowerCase();
      secound = secound.toLowerCase();

  int z=   first.compareToIgnoreCase(secound);
  if(z<0)z=-1;
  if(z>0)z=1;
         System.out.println(z);
    
         
    }
}