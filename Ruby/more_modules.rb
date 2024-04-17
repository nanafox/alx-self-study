# frozen_string_literal: true

# All mammals
module Mammal
  def say_name(name)
    p name
  end

  def speak(sound)
    p sound
  end

  class Dog
    include Mammal
  end

  class Cat
    include Mammal
  end

  def mammal?
    true
  end
end

sparky = Mammal::Dog.new
kitty = Mammal::Cat.new

sparky.speak('Arf!')
puts sparky.mammal?

kitty.say_name('Kitty')

puts sparky.class.ancestors
