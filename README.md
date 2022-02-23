# Caesar-Cipher-Decipher
This executable is a CLI program written in C, with the purpose to encrypt and decrypt text messages using the Caesar Cipher.

# How it works
Invented by Julius Caesar, this encryption technique substitutes each letter of a plain text into another letter of the alphabet. The latter is determined by the <b>key</b> provided.
Assuming each letter of the latin alphabet is tied to an incrementing number (eg. A --> 0, B --> 1, C --> 2 etc.), the ciphered letter will be <b>changed</b> to the one that has a corresponding number of <b>initial + key</b> number.
When <b>ciphering</b>, this <b>shift</b> will be on the right (initial + key).
When <b>deciphering</b>, it will shift left (initial - key).
This was implemented by adding or abstracting the <b>key</b> number to the ASCII values of each letter.
Works only on english alphabet.
A decipher is succeeded also when <b>key = provided_key % 26</b>.
The generated text is Case-Sensitive.

# Example
The word <b>Bark</b> needs to be ciphered. Assuming the key is set to eg. 16, the generated word is : B --> (1 + 16) % 26 = 17 --> <b>R</b>, a --> (0 + 16) % 26 = 16 --> <b>q</b>, r --> (17 + 16) % 26 = 7 --> <b>h</b>, k --> (10 + 16) % 26 = 0 --> <b>a</b>. Result = <b>Rqha</b>.

# Use

Type <b>encrypt</b> or <b>decrypt</b> to declare function.
Enter text to encrypt/decrypt.
Enter key.

# Screeshots
![Screenshot 2022-02-23 144142](https://user-images.githubusercontent.com/100278051/155328281-5cc73b9b-ccec-4e2f-8f6c-b9c524a7b449.png)
A working screeshot.


![Screenshot 2022-02-23 144238](https://user-images.githubusercontent.com/100278051/155328387-df740f6c-d05b-4ea0-96be-3e3399d3b098.png)
A failed decipher.


![Screenshot 2022-02-23 144358](https://user-images.githubusercontent.com/100278051/155328482-edc5bdfd-d0cf-4617-90e8-fb27ee293ddd.png)
A successful decipher.

