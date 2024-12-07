class Solution {
public:
    string interpret(string command) {
      int len=command.length();
      string n="";
      for(int i=0;i<len;i++){
        if(command[i]=='G'){
            n.push_back(command[i]);
        }
        else if(command[i]=='(' & command[i+1]==')'){
            n.push_back(command[i]='o');
            i++;
        }
        else if(command[i]=='(' & command[i+1]=='a'){
            
            n.push_back(command[i]='a');
            n.push_back(command[i+1]='l');
            i+2;

        }
      }
      command=n;
      return command;  
    }
};
