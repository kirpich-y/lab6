#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
const char *filename = "myfile.txt";
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);

const char *text = "123456789012345678901234567\n";
write(fd, text, 27);

close(fd);
return 0;
}