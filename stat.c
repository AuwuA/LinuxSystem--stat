#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	struct stat st;
	if (-1 == stat(argv[1], &st)) {
		perror("stat:");
	}
	printf("size:[%ld], uid:[%d], gid:[%d]\n",st.st_size, st.st_uid, st.st_gid);
	return 0;
}
