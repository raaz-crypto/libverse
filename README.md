# LibVerse: The low level crypto library.

LibVerse is a _low level cryptographic library_ built using the
[`verse`][verse] eDSL. It is _not_ a standalone cryptographic library,
and is expected to be used by other high level libraries in C or other
high level languages like Haskell, Python etc (i.e. languages that
support _foreign function interface_ to C). It fact, it was designed
primarily for the [`raaz` cryptographic library][raaz] as a source of
low-level cryptographic primitives. This focus means that `libverse`
does not come with any supporting code like benchmarks or unit
tests. In fact it does not even come with the full implementations of
standard primitives --- only the "tight loops" of these primitives are
exposed. The higher level crypto library that uses `libverse` should
provide these missing features to make libverse usable.

Why this low level design ? Although a higher level of abstraction is
always better for the safety and portability of software, high level
languages are often prone to leak of side channel information which
can be deadly for cryptographic libraries. Hence `libverse` is at this
low level of abstraction. Instead of writing this low level code by
hand (which is problematic in a different way), we express this code
in the [verse eDSL] at a much higher level of abstraction. Since it is
written in Coq, we can even hope to verify a significant portion of it
by using the full power of a proof assistant like Coq.


## Using `libverse` in your application/library.

Although the actual cryptographic implementations are themselves
written in [verse] which in turn is an eDSL in Coq, the source code
available in this repository is the extracted C, or in the future when
verse starts supporting it, assembly language functions. Hence all you
need is a C compiler or a FFI interface to call C in case of languages
like Haskell. Just include the source code somewhere in your
applications/library's directory and hook it to your compilation
process.

## Hacking.

The C files `libverse/verse.h` and `libverse/verse.c` provide a
_minimal kernel_ of C functions that provide primitives like endian
conversion and bitwise rotations that are unfortunately not available
by default. All other files are in fact generated from the Coq source
using the Verse eDSL. Therefore it does not make much sense to accept
pull requests here unless the patches in question changes one of the
kernel C files. Rather, consider contributing to the original coq
source available at [source repository of verse][verse]. In
particular, the implementation exposed here have their coq sources
under the directory `src/Verse/CryptoLib`.

## Convention

LibVerse expose C (and in the future assembly) function for various
primitives. The source code is arranged according to the following
convention.

1. The function name that implement a primitive `p` for an
   architecture `a` making use of the processor features `f` will be
   names `verse_p_a_f`, e.g. `verse_chacha20_x86_64_avx2`. If there
   are multiple features that are required, it should be separated by
   `_` (underscores).

2. The above function will reside in the file `./p/a/f.ext`, where
   `ext` is either `c` if it is a portable C code or is 's' if it is
   in assembly language. The corresponding `Coq` source will be at
   `src/Verse/CryptoLib/p/a/f.v` in the [verse] repository.

3. The generated source (C or assembly) will be at
   `p/a/f.ext`

# Legal

Copyright (c) 2018, Piyush P Kurur

The library is licensed under

* Apache License, Version 2.0
  <http://www.apache.org/licenses/LICENSE-2.0>
* BSD 3-Clause license
  <https://opensource.org/licenses/BSD-3-Clause>

You may not use this software except in compliance with one of the
above Licenses (*at your option*).

SPDX-License-Identifier: (Apache-2.0 OR  BSD-3-Clause)

Unless required by applicable law or agreed to in writing, software
distributed under these Licenses is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
implied. For the exact terms and conditions see the accompanying
LICENSE file.


[raaz]: <https://github.com/raaz-crypto/raaz> "The Raaz cryptographic library"
[verse]: <https://github.com/raaz-crypto/verse-coq> "The Verse eDSL for cryptographic primitives"
