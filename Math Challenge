// Have the function MathChallenge(num) take the num parameter being passed which will be an integer and return the string true if it's a power of two. If it's not return the string false. For example if the input is 16 then your program should return the string true but if the input is 22 then the output should be the string false.
// From <https://coderbyte.com/editor/Powers%20of%20Two:Java/:candidate#useru76uq3wv5> 

import java.util.*; 
import java.io.*;

class Main 
{
  public static String MathChallenge(int num) 
  {
    for (var i = 0; Math.pow(2, i) <= num; i++)
    {
      if (Math.pow(2, i) == num) { return "true"; }
    }
    return "false";
  }

  public static void main (String[] args) 
  {     
    Scanner s = new Scanner(System.in);
    Main c = new Main();
    System.out.print(c.MathChallenge(s.nextLine())); 
  }
}
