int fd;         // open file descriptor
int nb;         // # bytes read
int ns = 0;     // # spaces
char buf[BUFSIZ]; // input buffer

// EOF

fd = open ("xyz", O_RDONLY);
assert (fd >= 0);
while ((nb = read (fd, buf, 1000)) > 0) {
	for (int i = 0; i < nb; i++)
		if (isspace (buf[i]))
			ns++;
}
close (fd);
file_pointer = 0
# loop 1: file_pointer = 1000, read returns 1000
# loop 2: file_pointer = 2000, read returns 1000
# loop 3: file_pointer = 2500, read returns 500
# loop 4: file_pointer = 2500, read returns 0
