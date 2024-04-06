#!/usr/bin/env ruby
# frozen_string_literal: true

# This code has a bug that needs to be fixed

# check for isograms
def isogram?(string)
  original_length = string.length
  string_array = string.downcase.split

  unique_length = string_array.uniq.length
  original_length == unique_length
end

puts isogram?('Odin')
