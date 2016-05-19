package crackcodinginterview;

import java.util.ArrayList;

/**
 *
 * @author Thiago Luiz
 */
public class CrackCodingInterview {

    public static void longSubString(String s, int num){
        
        String myString = s.replaceAll("\\s+","");
        int tam = myString.length();
        int i = 0, x;
        int numChar = 0;

        StringBuffer sb = new StringBuffer();
        StringBuffer max = new StringBuffer();
        ArrayList<StringBuffer> arr = new ArrayList<>();
        
        max.append("");
        for(i=0; i<tam; i++){
            int j=0;
            for(x=i+0; x<tam && numChar<=num; x++){

                if(j == 0){
                    sb.append(myString.charAt(x));
                    numChar++;
                    j++;
                }
                else if(/*numChar <= num &&*/ (sb.indexOf(""+myString.charAt(x)) != -1)){
                    sb.append(myString.charAt(x));
                }
                else if(numChar < num && (sb.indexOf(""+myString.charAt(x)) == -1)){
                    sb.append(myString.charAt(x));
                    numChar++;
                }
                else{
                    break;
                }
            }
            if(max.length() <= sb.length()){
                max.setLength(0);
                max.append(sb);
            }
            System.out.println(sb);
            arr.add(sb);
            sb.setLength(0);
            numChar = 0;
        }
        System.out.println(max);
    }
    public static void main(String[] args) {

        String ab = "ttthiago luiz th  h  h";
        longSubString(ab, 3);
    }
}
