# frozen_string_literal: true

# A simple class for a student
class Student
  class << self
    # A class method to find a student by name
    def find_by_name(name)
      students.find { |student| student.name == name }
    end

    # A class method to keep track of all students
    def students
      @students ||= []
    end

    # A class method to add a student to the list
    def add_student(student)
      students.push(student)
    end
  end

  attr_accessor :name
  attr_writer :grade

  def initialize(name:, grade:)
    self.name = name
    raise TypeError unless grade.is_a? String

    self.grade = grade.upcase
    self.class.add_student(self)
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

  def to_s
    "#{name} has a grade of #{grade}"
  end

  protected

  attr_reader :grade
end

joe = Student.new(name: 'Joe', grade: 'A')
bob = Student.new(name: 'Bob', grade: 'C')

puts "Well done, #{joe.name}!" if joe.better_grade_than?(bob)
puts Student.find_by_name('Joe')
