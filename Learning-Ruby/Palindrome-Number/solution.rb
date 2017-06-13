def is_palindrome(x)
    rev = x.to_s.reverse.to_i
    return rev == x
end
