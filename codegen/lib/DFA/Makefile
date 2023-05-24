OPTION = -O3
SRCS = DFA.c DFA_emxAPI.c DFA_emxutil.c DFA_initialize.c DFA_rtwutil.c DFA_terminate.c colon.c combineVectorElements.c polyfit.c polyval.c rtGetInf.c rtGetNaN.c rt_nonfinite.c unsafeSxfun.c xnrm2.c
OBJS = $(SRCS:%.c=%.o) #SRCSのすべてを拡張子.oに変えたもの
LIBS = -lm
MODELLIB = libdfa.a
CC = @gcc $(OPTION)


$(MODELLIB): $(OBJS)
	ar rcs $(MODELLIB) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(OPTION) -c $(SRCS)

clean:
	rm -f $(OBJS) $(MODELLIB)

DFA.o: DFA.c DFA.h DFA_types.h rtwtypes.h tmwtypes.h DFA_emxutil.h \
  DFA_rtwutil.h colon.h combineVectorElements.h polyfit.h polyval.h \
  rt_nonfinite.h unsafeSxfun.h
DFA_emxAPI.o: DFA_emxAPI.c DFA_emxAPI.h DFA_types.h rtwtypes.h tmwtypes.h \
  DFA_emxutil.h rt_nonfinite.h
DFA_emxutil.o: DFA_emxutil.c DFA_emxutil.h DFA_types.h rtwtypes.h \
  tmwtypes.h rt_nonfinite.h
DFA_initialize.o: DFA_initialize.c DFA_initialize.h rtwtypes.h tmwtypes.h \
  rt_nonfinite.h
DFA_rtwutil.o: DFA_rtwutil.c DFA_rtwutil.h rtwtypes.h tmwtypes.h \
  rt_nonfinite.h
DFA_terminate.o: DFA_terminate.c DFA_terminate.h rtwtypes.h tmwtypes.h \
  rt_nonfinite.h
colon.o: colon.c colon.h DFA_types.h rtwtypes.h tmwtypes.h DFA_emxutil.h \
  rt_nonfinite.h
combineVectorElements.o: combineVectorElements.c combineVectorElements.h \
  DFA_types.h rtwtypes.h tmwtypes.h rt_nonfinite.h
polyfit.o: polyfit.c polyfit.h DFA_types.h rtwtypes.h tmwtypes.h \
  DFA_emxutil.h rt_nonfinite.h xnrm2.h
polyval.o: polyval.c polyval.h DFA_types.h rtwtypes.h tmwtypes.h \
  DFA_emxutil.h rt_nonfinite.h
rtGetInf.o: rtGetInf.c rtGetInf.h rtwtypes.h tmwtypes.h rt_nonfinite.h
rtGetNaN.o: rtGetNaN.c rtGetNaN.h rtwtypes.h tmwtypes.h rt_nonfinite.h
rt_nonfinite.o: rt_nonfinite.c rt_nonfinite.h rtwtypes.h tmwtypes.h
unsafeSxfun.o: unsafeSxfun.c unsafeSxfun.h DFA_types.h rtwtypes.h \
  tmwtypes.h DFA_emxutil.h DFA_rtwutil.h rt_nonfinite.h
xnrm2.o: xnrm2.c xnrm2.h DFA_types.h rtwtypes.h tmwtypes.h rt_nonfinite.h