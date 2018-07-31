gcc -Wall -c *.c
libtool -static -o libft.a *.o
ranlib libft.a
rm -rf *.o