# frozen_string_literal: true

module Walkable
  def walk
    "I'm walking."
  end
end

module Swimmable
  def swim
    "I'm swimming."
  end
end

module Climbable
  def climb
    "I'm walking."
  end
end

class Animal
  include Walkable

  def speak
    "I'm an #{self.class.to_s.downcase}, and I speak!"
  end
end

class GoodDog < Animal
  include Swimmable
  include Climbable
end

dog = Animal.new
puts dog.speak
puts dog.walk

sparky = GoodDog.new
puts sparky.speak

puts '---Animal method lookup---'
puts Animal.ancestors

puts "\n---GoodDog method lookup---"
puts GoodDog.ancestors
