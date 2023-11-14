import java.util.Scanner;

class Pallindrome{
  
  boolean isPallindrome(int number){
    int n =number;
    int reverse = 0;
    while (n>0) {
      int rem = n%10;
      reverse = reverse*10 + rem;
      n/=10;
    }
    if(reverse ==  number){
      return true;
    }
    return false;
  }

}

class Main{

  public static void main(String [] args){

    Pallindrome object = new Pallindrome();
    Scanner sc =new Scanner(System.in);
    System.out.println("Enter a value to be checked ::::: ");
    int value = sc.nextInt();

    if(object.isPallindrome(value)){
      System.out.println("Yes it is a palindrome");
    }else{
      System.out.println("No,its not a pallindrome ,Try with another value!");
    }

    sc.close();

  }
}