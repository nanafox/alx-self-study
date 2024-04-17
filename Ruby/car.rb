# frozen_string_literal: true

require_relative 'vehicle_functions'

# Defines a Car class
class Vehicle
  include VehicleFunctions
  @number_of_vehicles = 0

  class << self
    attr_accessor :number_of_vehicles
  end

  attr_accessor :color
  attr_reader :year

  # calculates the gas mileage of any car
  def self.gas_mileage(gallons, miles)
    puts "You go #{miles / gallons} miles per gallon of gas."
  end

  def initialize(name:, year:, color:, model:)
    @name = name
    @year = year
    @color = color
    @model = model
    @current_speed = 0
    @fuel_level = 0
    Vehicle.number_of_vehicles += 1
  end

  def to_s
    "This is a #{@color} #{@model} #{@name}, manufactured in #{@year}."
  end

  def current_speed
    puts "Your current speed is #{@current_speed} mph"
  end

  def spray_paint(paint_color)
    self.color = paint_color
    puts "Your #{@model} has been painted #{color} now"
  end

  def age
    compute_age
  end

  private

  def compute_age
    Time.new.year - year
  end
end

# Defines a car class
class MyCar < Vehicle
  include MyCarMixin
  USAGE = 'For leisure and pleasure.'
end

class MyTruck < Vehicle
  USAGE = 'For heavy-duty work.'
end

# cars
lumina = MyCar.new(
  name: 'Chevy', year: 1997, model: 'chevy lumina', color: 'white'
)

MyCar.new(
  name: 'Toyota', year: 2018, model: 'Toyota Camry', color: 'black'
)

MyCar.new(
  name: 'Honda', year: 2020, model: 'Honda Accord', color: 'silver'
)

# trucks
MyTruck.new(
  name: 'Ford', year: 2005, model: 'Ford F-150', color: 'blue'
)

MyTruck.new(
  name: 'Chevy', year: 2010, model: 'Chevy Silverado', color: 'red'
)

puts Vehicle.number_of_vehicles

puts "The Lumina is #{lumina.age} year(s) old."
lumina.start_engine

lumina.refuel(40)
lumina.refuel(20)
lumina.accelerate(10)
lumina.accelerate(30)
lumina.decelerate(20)
lumina.turn_on_air_conditioning

lumina.stop_engine

puts '---MyCar method lookup---'
puts MyCar.ancestors

puts '---MyTruck method lookup---'
puts MyTruck.ancestors

puts '---Vehicle method lookup---'
puts Vehicle.ancestors
