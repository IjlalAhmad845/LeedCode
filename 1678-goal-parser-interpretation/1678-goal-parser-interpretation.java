class Solution {
    public String interpret(String command) {
        command=command.replaceAll("\\(\\)","o").replaceAll("\\(al\\)","al");
        
        return command;
    }
}