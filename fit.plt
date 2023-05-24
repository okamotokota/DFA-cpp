f(x)=a*x+b
fit f(x) "dfa.out" u ($1):($2) via a,b

p f(x), "dfa.out"