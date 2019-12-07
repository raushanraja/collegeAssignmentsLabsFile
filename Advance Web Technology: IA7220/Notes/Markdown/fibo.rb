def fibo(n)
    i, j=0, 1
    (0..n).each do 
        puts i
        i,j = j, i+j
    end
end
fibo(10)