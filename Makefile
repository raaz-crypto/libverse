include Implementations.mk # This file includes the implementations
                           # defined in this release. It is generated
                           # from the verse extraction process. Every
                           # release should include one such file.


OBJS= $(addsuffix .o, $(basename ${IMPLS}))


CFLAGS += -I.

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



%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

.PHONY: git-add clean

libverse.a: verse.o ${OBJS}
	ar cr libverse.a verse.o ${OBJS}
	ranlib libverse.a
clean:
	rm -f libverse.a verse.o ${OBJS}

git-add:
	git add ${SRC} Implementations.mk
