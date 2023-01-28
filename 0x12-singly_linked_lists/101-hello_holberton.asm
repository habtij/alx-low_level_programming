global    main
          extern    printf

          section   .text
main:  
          mov       rdi, message
	  xor	    rax, rax
          call      printf
          ret
message:
          db        `Hello, Holberton\n`, 0
