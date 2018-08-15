include Implementations.mk # This file includes the implementations
                           # defined in this release. It is generated
                           # from the verse extraction process. Every
                           # release should include one such file.


IMPLS_C  = $(wildcard $(addsuffix .c, ${IMPLS}))
IMPLS_S  = $(wildcard $(addsuffix .s, ${IMPLS}))
SRC      = ${IMPLS_C} ${IMPLS_S}
OBJ      = $(addsuffix .o, $(basename ${SRC}))


CFLAGS += -include verse.h

ifeq (${OS},Windows_NT)
  GUESS_OS=Windows
else
  GUESS_OS=$(shell sh -c "uname -s 2>/dev/null")
endif

ifeq (${GUESS_OS},Windows)
  CFLAGS += -DPLATFORM_WINDOWS
endif


ifeq (${GUESS_OS},Darwin)
  CFLAGS += -DPLATFORM_OSX
endif

ifeq (${GUESS_OS},Linux)
  CFLAGS += -DPLATFORM_LINUX
endif

ifeq (${GUESS_OS},OpenBSD)
  CFLAGS += -DPLATFORM_OPENBSD
endif



.PHONY: git-add objs clean

libverse.a: verse.o objs
	ar cr libverse.a verse.o ${OBJ}
	ranlib libverse.a

verse.o: verse.c
	 ${CC} ${CFLAGS} -c verse.c
objs:
	$(foreach src, ${SRC}, ${CC} ${CFLAGS} -c ${src} \
		-o $(addsuffix .o, $(basename ${src}));)
clean:
	rm -f libverse.a verse.o ${OBJ}

git-add:
	git add ${SRC} Implementations.mk
