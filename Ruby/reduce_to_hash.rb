#!/usr/bin/env ruby
# frozen_string_literal: true

# gets the votes using the reduce enumerable
def get_results(votes)
  votes.reduce(Hash.new(0)) do |result, vote|
    result[vote] += 1
    result
  end
end

# gets the votes using the `each_with_object` enumerable
def get_results_improved(votes)
  votes.each_with_object(Hash.new(0)) do |vote, result|
    result[vote] += 1
  end
end

votes = ["Bob's Dirty Burger Shack", "St. Mark's Bistro", "Bob's Dirty Burger Shack"]
puts get_results(votes)
puts get_results_improved(votes)

#=> {"Bob's Dirty Burger Shack"=>2, "St. Mark's Bistro"=>1}
