//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_209
//
//  Description       : This program demonstrates various inbuilt
//                      methods of the String class in Java.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

// InBuilt Methods of String

class PP_209
{
    public static void main(String A[])
    {
        String str = "I Love Java";
        String sr = "I LOve java";
        String strr = "  Ganesh@124  ";
        String s = " ";

        System.out.println(str.length());   // Length start from 1
        System.out.println(str.charAt(7));
        System.out.println(str.substring(3));
        System.out.println(str.toUpperCase());
        System.out.println(str.toLowerCase());
        System.out.println(str.equals(sr));
        System.out.println(str.equalsIgnoreCase(sr));
        //System.out.println(str.compareTo(sr));
        System.out.println(str.contains("ov"));
        System.out.println(str.startsWith("I "));
        System.out.println(str.endsWith("java"));
        System.out.println(str.indexOf('e'));   // Index start from 0
        System.out.println(str.lastIndexOf('a'));
        System.out.println(str.replace('L', 'M'));
        System.out.println(strr.replaceAll("[0-9]", ""));
        System.out.println(strr.trim());
        System.out.println(strr.split(""));
        System.out.println(s.isEmpty());       
        System.out.println(s.isBlank());    // Java 11
        System.out.println(str = str.concat(" Spring Boot"));
    }
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      11
//      J
//      Love Java
//      I LOVE JAVA
//      i love java
//      false
//      true
//      true
//      true
//      true
//      3
//      10
//      I Move Java
//      Ganesh@
//      Ganesh@124
//      [Ljava.lang.String;@...
//      false
//      true
//      I Love Java Spring Boot
//
//////////////////////////////////////////////////////////////////