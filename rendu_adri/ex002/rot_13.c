  #include <unistd.h>


  void rot_13(char *str) {
     while (*str) {
	char c = *str;
	  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
	       if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M')) {
	        c += 13;

                } else { 
                  c -=13;
	  }
    }
      write(1, &c, 1);
      str++;
    }
}


  int main(int argc, char *argv[]) {
      if (argc != 2) {
          write(1, "\n", 1);
           return 0;
}

      rot_13(argv[1]);
      write(1, "\n", 1);
      return 0;
}	
