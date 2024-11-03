CC := clang
CFLAGS := -std=c99 -Wall -Wextra -pedantic -pedantic-errors -march=native -fPIC -fstack-clash-protection -fstack-protector-all -fcf-protection=full -flto=full -fvisibility=hidden -fsanitize=cfi -fsanitize=address -D_FORTIFY_SOURCE=3 -O3 -s
LDFLAGS := -lc -fuse-ld=lld -rtlib=compiler-rt -Wl,-pic-executable -Wl,-z,relro -Wl,-z,now -Wl,-z,noexecstack

rot: bin/rot-decrypt bin/rot-encrypt
bin/rot-decrypt: src/rot-decrypt.c
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@
bin/rot-encrypt: src/rot-encrypt.c
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

.PHONY clean:
	rm -vf bin/*
