import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class NBUOJ {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		Path p = Paths.get(args[0]);
		int 
			from = Integer.parseInt(args[1]),
			to = Integer.parseInt(args[2]);
		for(int i = from; i <= to; i++) {
			Files.createFile(p.resolve("nbuoj" + i + ".c"));
		}
	}
}
