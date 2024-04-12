#!/usr/bin/env ruby
# frozen_string_literal: true

def binary_search_recursive(array, low, high, value)
  -1 if low > high

  mid = (low + high) / 2

  if array[mid] == value
    mid
  elsif array[mid] < value
    binary_search_recursive(array, mid + 1, high, value)
  else
    binary_search_recursive(array, low, mid - 1, value)
  end
end

def first_occurrence(array, index, value)
  first = 0
  index.downto(0) do |i|
    break unless array[i] == value

    first = i
  end
  first
end

def advanced_binary(array, value)
  -1 if array.empty?

  index = binary_search_recursive(array, 0, array.length - 1, value)
  first_occurrence(array, index, value)
end

arr = [1, 1, 2, 3, 3, 4, 5, 5, 5, 5, 5, 6, 7, 9, 10, 10, 12]
puts advanced_binary(arr, 5)
