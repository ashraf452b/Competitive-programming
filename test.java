
public class Main {
    public static void main(String[] args) {


        try  
        {
            int a = 10 / 0;
        } 
        catch (ArithmeticException e) 
        {
            System.out.println("Error occurred");
        } 
        catch(NullPointerException e)
        {
            System.out.println("Error occurred");
        }
        finally 
        {
            System.out.println("Done");
        }
    }
}

public class Main {
    public static void main(String[] args) {

            try 
            {
                int a = 10 / 0;
            } 
            catch (Exception a)  //ArithMatchiExcet
            { // catches almost all exceptions
                System.out.println(a.getMessage()); 
            } 
            finally 
            {
                System.out.println("Done");
            }

    }
}




// ArithmeticException → divide by zero
int a = 10 / 0; 

// NullPointerException → null object use
String s = null;
s.length(); 


// ArrayIndexOutOfBoundsException → invalid index
int[] arr = {1, 2, 3};
System.out.println(arr[5]); 

// NumberFormatException → invalid number conversion
int n = Integer.parseInt("abc"); 

// StringIndexOutOfBoundsException → invalid string index
String str = "java";
char c = str.charAt(10); 























        public class Main {
            public static void main(String[] args) throws ArithmeticException { 
                
                try 
                { 
                    int a = 2, b = 0;

                    if (b == 0) 
                    {
                        throw new ArithmeticException("Cannot divide by zero"); 
                    }
                    else
                    {
                        System.out.println(a / b);
                    }   

                } 
                catch (Exception e) 
                { 
                    System.out.println(e.getClass().getSimpleName());
                } 
                finally 
                { 
                    System.out.println("Finally block always execute");
                }
            }
        }