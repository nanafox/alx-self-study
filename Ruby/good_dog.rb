# frozen_string_literal: true

# Defines a good dog class
class GoodDog
  @number_of_dogs = 0

  class << self
    attr_accessor :number_of_dogs
  end

  def self.whomai
    "Hi! I am the #{self} class"
  end

  attr_accessor :name, :height, :weight

  def initialize(name, height, weight)
    self.name = name
    self.height = height
    self.weight = weight
    self.class.number_of_dogs += 1
  end

  def speak
    "#{name} says Arf!"
  end

  def info
    "#{name} weighs #{weight} and is #{height} tail"
  end

  alias to_s info

  def update_info(name, height, weight)
    self.name = name
    self.height = height
    self.weight = weight
  end
end

sparky = GoodDog.new('Sparky', '12 inches', '10 lbs')
puts sparky     # => Sparky weighs 10 lbs and is 12 inches tall.

sparky.update_info('Spartacus', '24 inches', '45 lbs')
puts sparky     # => Spartacus weighs 45 lbs and is 24 inches tall.

fido = GoodDog.new('Fido', '12 inches', '10 lbs')
puts fido

puts GoodDog.number_of_dogs
