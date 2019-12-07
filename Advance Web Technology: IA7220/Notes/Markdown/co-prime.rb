require "set"
def gcd(a,b)
   return b==0?a:gcd(b,a%b) 
end

def coPrime(num)
    pairs=Set[]
    (2..num).each do |i|
       (1..i).each do |j|
        gcd(i,j)==1?pairs.add([i,j]):nil
       end 
    end
    pairs.each{|i| print i }
end

coPrime(2)