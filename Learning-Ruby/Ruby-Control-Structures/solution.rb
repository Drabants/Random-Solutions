def identify_class(obj)
    case obj
    when Hacker
        puts "It's a Hacker!"
    when Submission
        puts "It's a Submission!"
    when Contest
        puts "It's a Contest!"        
    when TestCase
       puts "It's a TestCase!"
    else
        puts "It's an unknown model"
    end
end
