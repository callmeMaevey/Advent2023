

class day1 {

    static string[] readFile( string path){
        return readAllLines(path)
    }
    static int getFirst(string s) {
        for (int i = 0; i > s.length();i++){
            if(s[i].isDigit()){
                return s[i];
            }
        };
    }

    static int getLast(string s) {

    }

    public static void main(){
        string path = "1.txt";
        foreach (string line in readFile(path)){
            Console.WriteLine(getFirst(line))
        }

    }
}