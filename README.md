# LibVerse: The low level crypto library.

LibVerse is a _low level cryptographic library_ built using the [verse
eDSL][verse]. This is *not* a standalone cryptographic library as it
exposes only a C-API of the "tight loops" involved in various
cryptographic primitives. It is meant to be included in higher level
libraries which makes use of these tight loops to implement a more
higher level interface.  In particular, it is hoped that the [`raaz`
cryptographic library][raaz] will soon move to using `libverse` as its
source of low-level cryptographic primitives. `Libverse` does *not*
come with any of the other supporting code like benchmarks or unit
tests either. Again the higher level crypto library that uses
`libverse` should have its own set of tests and benchmarks ([raaz]
indeed comes with such as set).


## Using `libverse` in your application/library.

Although the actual cryptographic implementations are themselves
written in [verse] which in turn is an eDSL in Coq, the source code
available in this repository is the extracted C or assembly language
functions. Hence all you need is `gcc` or a FFI interface to call C in
case of languages like Haskell. Just include the source code somewhere
in your applications/library's directory and hook it to your
compilation process.

## Hacking.

Baring a few files `libverse/verse.h` and `libverse/verse.c` that
provide a minimal set of C functions, all other C and Assembly source
code are in fact generated from the Coq source using the Verse
eDSL. Therefore, any implementation of primitives or tweak to existing
ones is meant to be restricted to editing these coq files which is
available from the [source repository of verse][verse] under the
directory `src/Verse/CryptoLib` (See the documentation available there
for details).

## Convention


LibVerse expose C function as well as assembly language functions for
various primitives. The source code is arranged according to the
following convention.

1. The function name that implement a primitive `p` for an
   architecture `a` making use of the processor features `f` will be
   names `verse_p_a_f`, e.g. `verse_chacha20_x86_64_avx2`. If there
   are multiple features that are required, it should be separated by
   `_` (underscores).

2. The above function will reside in the file
   `libverse-VERSION/p/a/f.ext`, where `ext` is either `c` if it is a
   portable C code or is 's' if it is in assembly language. The
   corresponding `Coq` source will be at `p/a/f.v`.

3. The generated source (C or assembly) will be at
   `libverse-VERSION/p/a/f.ext`

[raaz]: <https://github.com/raaz-crypto/raaz> "The Raaz cryptographic library"
[verse]: <https://github.com/raaz-crypto/verse> "The Verse eDSL for cryptographic primitives"
