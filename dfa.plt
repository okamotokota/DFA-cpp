set xlabel "log n"
set ylabel "log F(n)"
p "dfa_out.txt" u 1:2  w l,  "dfa_out.txt" u 1:3
