#!/usr/bin/ruby

numbers = []
ARGV.each do |argument|
  numbers << argument.to_i if argument.match?(/\A-?\d+\z/)
end

numbers.sort.each { |number| puts number }
