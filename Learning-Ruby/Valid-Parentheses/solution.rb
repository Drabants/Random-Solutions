# @param {String} s
# @return {Boolean}
def is_valid(s)
    stack = []
    h= s.split("");
    h.each do |x|
        if(x == "(")
            stack.push(")")
        elsif(x == "{")
            stack.push("}")
        elsif(x == "[")
            stack.push("]")
        elsif(x == ")")
            temp = stack.pop
            if(temp != ")")
                return false
            end
        elsif(x == "}")
            temp = stack.pop
            if(temp != "}")
                return false
            end
        else
            temp = stack.pop
            if(temp != "]")
                return false
            end
        end
    end
    if !stack.empty?
        return false
    end
    return true
end
