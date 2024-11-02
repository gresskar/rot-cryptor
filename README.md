# ROT Cryptor

Tool for encrypting/decrypting text using the ROT-n cipher

## Building

Make sure `clang`, `lld`, `compiler-rt` & `make` is installed

Then build the programs by running:

```Shell
make
```

## Usage

**Encryption:**

```Shell
./bin/rot-encrypt <plaintext> <rotations>
```

For example:

```Shell
$ ./bin/rot-encrypt "MySecretMessage" 3
Ciphertext: P|VhfuhwPhvvdjh
```

**Decryption:**

```Shell
./bin/rot-decrypt <ciphertext> <rotations>
```

For example:

```Shell
$ ./bin/rot-decrypt "P|VhfuhwPhvvdjh" 3
Plaintext: MySecretMessage
```