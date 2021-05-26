#!/bin/sh



echo ///---																																																																					---///
echo //Password manager will ask you about your password and save it to the file and then encrypt, soon will be added the archiving the files/passwords //
echo ///																																																																						---///


g++ main.cpp

./a.out



echo Your password

cat my_file.txt

gpg -c --no-symkey-cache --cipher-algo AES256 my_file.txt


rm -rf myfile.txt
echo decrypt it if u want get the password ofc :p 

echo File sucessfully encrypted
