#!/usr/bin/env ruby
# frozen_string_literal: true

def print_elem_id(*elements)
  elements.each_with_index do |element, index|
    puts "Nested array #{index} id: #{element.object_id}"
  end
end

# this creates a nested of arrays that reference the same object, so
# modifying one affects the others
mutable = Array.new(3, Array.new(2))

symbol = '*'
puts "#{symbol * 5} ARRAY REFERENCING THE SAME OBJECT #{symbol * 5}"
p mutable # => [[nil, nil], [nil, nil], [nil, nil]]

mutable[0][0] = 98

p mutable # => [[98, nil], [98, nil], [98, nil]]

# let's print the ids of each of nested array
puts "\nThe ids of the mutable array that references the same object"
print_elem_id(*mutable)

# now let's have what we actually wanted
immutable = Array.new(3) { Array.new(2) }

puts "\n#{symbol * 5} ARRAY REFERENCING DISTINCT OBJECT #{symbol * 5}"

p immutable # => [[nil, nil], [nil, nil], [nil, nil]]

immutable[0][0] = 98

p mutable # => [[98, nil], [nil, nil], [nil, nil]]

puts "\nThe ids of the distinct nested Array objects"
print_elem_id(*immutable)
