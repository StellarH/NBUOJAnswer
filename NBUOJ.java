import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class NBUOJ {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		Path p = Paths.get(args[0]);
		int 
			i = Integer.parseInt(args[1]),
			to = Integer.parseInt(args[2]);
		while(i <= to) {
			Files.createFile(p.resolve("nbuoj" + i + ".c"));
			i++;
		}
	}
}
