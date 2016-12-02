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
      int firs=0 , secoun=0;
      for(int count=0;count<first.length();count++){
          secoun+=secound.codePointAt(count);
          firs+=first.codePointAt(count);
          if(firs!=secoun)
              break;
          
          
          
      }
      if(firs==secoun)
         System.out.println("0");
      else if(firs>secoun) 
            System.out.println("1");
       else
           System.out.println("-1");
         
    }
}