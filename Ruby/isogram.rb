# frozen_string_literal: true

def isogram?(string)
  str_len = string.length
  string_array = string.downcase.split('')
  unique_length = string_array.uniq.length
  str_len == unique_length
end

%w[ALX Zoom Doe Odin See Reaches].shuffle.each do |word|
  puts "#{word} #{isogram?(word) ? 'is' : 'is not'} an isogram."
end
