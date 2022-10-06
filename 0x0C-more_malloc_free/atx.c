       #include <stdio.h>
       #include <stdlib.h>
       #include <unistd.h>

       void
       bye(void)
       {
           printf("That was all, folks\n");
       }

       int
       main(void)
       {

//           atexit(bye);

           exit(EXIT_SUCCESS);
       }


