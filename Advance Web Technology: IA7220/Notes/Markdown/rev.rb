def rev_str(string)
    string2=[]
    string.each_char{|i| string2.insert(0,i)}
    return string2.join("")
end

puts rev_str("raushan")