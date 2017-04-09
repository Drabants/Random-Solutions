def substring(sentence, dictionary)
    words = Hash.new(0)
    sentence.downcase.split(/[^\w]+/).each do |f| #find word within given string
      dictionary.each do |string| #check to see if the current word is within the dictionary
            words[string] += 1 if f[string] #if it is increase the hash
          end
    end
     words
end

dictionary = ["below","down","go","going","horn","how","howdy","it","i","low","own","part","partner","sit"]

substring("Howdy partner, sit down! How's it going?", dictionary)
