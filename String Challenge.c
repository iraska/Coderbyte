// Have the function StringChallenge(str) take the str parameter being passed and return a compressed version of the string using the Run-length encoding algorithm. This algorithm works by taking the occurrence of each repeating character and outputting that number along with a single character of the repeating sequence. For example: "wwwggopp" would return 3w2g1o2p. The string will not contain any numbers, punctuation, or symbols.
// From <https://coderbyte.com/editor/Run%20Length:Java/:candidate#useru76uq3wv5> 

import java.util.*; 
import java.io.*;
class Main 
{
  public static String StringChallenge(String str) 
  {
    String response = "";
    if (str == null) { return response; }
    int count;
    for (int i = 0; i < str.length(); i++)
    {
      count = 1;
      while (i + 1 < str.length() && str.charAt(i) == str.charAt(i + 1))
      {
        count++;
        i++;
      }
      response += String.valueOf(count) + str.charAt(i);
    }
    return response;
  }
  public static void main (String[] args) 
  {  
    Scanner s = new Scanner(System.in);
    Main m = new Main();
    System.out.print(m.StringChallenge(s.nextLine())); 
  }
}
