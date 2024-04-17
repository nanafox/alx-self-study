# frozen_string_literal: true

# A simple class for a student
class Student
  attr_accessor :name
  attr_writer :grade

  def initialize(name:, grade:)
    self.name = name
    raise TypeError unless grade.is_a? String

    self.grade = grade.upcase
  end

  #
  # Checks whether a certain is better than the other.
  #
  # Grades are single letters. Better grades are letters with lower integral
  # values in the ASCII table. So grade 'A' is better grade than 'C'.
  #
  # @param other [Student] The other student object to compare grades with.
  #
  # @return [Boolean] true or false based on the outcome
  #
  def better_grade_than?(other)
    grade < other.grade
  end

  protected

  attr_reader :grade
end

joe = Student.new(name: 'Joe', grade: 'A')
bob = Student.new(name: 'Bob', grade: 'C')

puts "Well done, #{joe.name}!" if joe.better_grade_than?(bob)
