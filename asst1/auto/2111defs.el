(TeX-add-style-hook
 "2111defs"
 (lambda ()
   (TeX-run-style-hooks
    "graphicx"
    "xspace"
    "amsmath"
    "amssymb")
   (TeX-add-symbols
    '("subst" 2)
    '("pPkey" 1)
    '("Exi" 2)
    '("All" 2)
    '("EXI" 2)
    '("ALL" 2)
    '("setcpr" 2)
    '("ceiling" 1)
    '("floor" 1)
    '("Pow" 1)
    "bool"
    "nat"
    "posnat"
    "ints"
    "rats"
    "real"
    "nnreal"
    "functo"
    "partfuncto"
    "NOT"
    "AND"
    "OR"
    "IMPLIES"
    "ISIMPLIED"
    "EQUIV"
    "TT"
    "FF"
    "Prop"
    "Not"
    "Or"
    "Implies"
    "Isimplied"
    "Equiv"
    "True"
    "False"
    "bigAnd"
    "bigOr"
    "Ass"
    "IF"
    "THEN"
    "ELSE"
    "FI"
    "WHILE"
    "DO"
    "OD"
    "Htri")
   (LaTeX-add-environments
    '("gathered" LaTeX-env-args ["argument"] 0)))
 :latex)

