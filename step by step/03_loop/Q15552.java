import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Q15552 {
  public static void main(String[] args) {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    try {
      int T = Integer.parseInt(br.readLine());

      for (int i=0; i<T; i++) {
        String[] input = br.readLine().split(" ");
        
        bw.write(Integer.parseInt(input[0]) + Integer.parseInt(input[1]) + "\n");
      }

      bw.flush();
    } catch (IOException e) {
      e.printStackTrace();
    }
  }
}
