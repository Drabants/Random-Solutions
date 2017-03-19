#!/bin/ruby

n,k = gets.strip.split(' ')
n= n.to_i
k= k.to_i
a= gets.strip
a= a.split(' ').map(&:to_i)

puts a.rotate(k).join " "
