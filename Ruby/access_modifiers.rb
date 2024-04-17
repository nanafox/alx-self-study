# frozen_string_literal: true

# Defines a base model for Dogs
class Dog
  DOG_YEARS = 7

  def initialize(name, age)
    self.name = name
    self.age = age
  end

  def human_age
    "#{name} in human years is #{human_years} old"
  end

  def say_name
    p name
  end

  def older_than?(other)
    age > other.age
  end

  def fetches?
    true
  end

  # updates the info of a Dog
  def update_info(new_name = name, new_age = age)
    self.name = new_name
    self.age = new_age
  end

  private

  def human_years
    age * DOG_YEARS
  end

  # Returns a string describing the dog
  def to_s
    "Hello, I am #{name} and I am #{age} years old."
  end

  protected

  attr_accessor :name, :age
end

# A GoodDog blueprint... inherits from Dog
class GoodDog < Dog
end

# A BadDog blueprint... inherits from Dog
class BadDog < Dog
  def fetches
    false
  end
end

sparky = GoodDog.new('Sparky', 4)
fido = BadDog.new('Fido', 8)

puts sparky
puts fido

puts sparky.older_than?(fido) ? 'Sparky is older' : 'Fido is older'

puts Dog.superclass
puts GoodDog.superclass
