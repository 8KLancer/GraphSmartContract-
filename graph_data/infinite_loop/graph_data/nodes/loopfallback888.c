FALLBACK fallback Contract 1 1 INNCALL NULL
FUN1 void FUN4,FUN5 1 4 CALL NULL
FUN2 uint64 FUN3 0 3 CALL NULL
FUN3 uint64 NULL 1 0 NULL NULL
FUN4 void FUN5,FALLBACK 1 4 FALLCALL NULL
FUN5 void NULL 1 0 NULL NULL
VAR0 FUN1 3 INNFUN ASSIGN
VAR1 FUN3 3 INNFUN NULL
VAR2 FUN4 3 INNFUN ASSIGN
