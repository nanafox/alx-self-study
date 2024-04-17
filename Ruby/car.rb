# frozen_string_literal: true

# Defines a Car class
class MyCar
  attr_accessor :color
  attr_reader :year

  # calculates the gas mileage of any car
  def self.gas_mileage(gallons, miles)
    puts "You go #{miles / gallons} miles per gallon of gas"
  end

  def initialize(name:, year:, color:, model:)
    @name = name
    @year = year
    @color = color
    @model = model
    @current_speed = 0
  end

  def to_s
    "This is a #{@color} #{@model} #{@name}, manufactured in #{@year}."
  end

  def current_speed
    puts "Your current speed is #{@current_speed} mph"
  end

  def speed_up(speed = 10)
    @current_speed += speed
    puts "Speeding up to #{@current_speed}mph"
  end

  def brake(number)
    @current_speed -= number
    puts "Applying the brakes now. Decelerating by #{number} mph"
  end

  def shutdown
    puts 'Shutting down the car for charging.'
  end

  def spray_paint(paint_color)
    self.color = paint_color
    puts "Your #{@model} has been painted #{color} now"
  end
end

lumina = MyCar.new(
  name: 'Chevy', year: 1997, model: 'chevy lumina', color: 'white'
)

lumina.speed_up(20)
lumina.current_speed
lumina.speed_up(20)
lumina.current_speed
lumina.brake(20)
lumina.current_speed
lumina.brake(20)
lumina.current_speed
lumina.shutdown
lumina.current_speed

puts lumina

# check accessors
puts lumina.color
puts lumina.year

lumina.color = 'blue'

puts lumina

# use the `spray_paint` method

lumina.spray_paint('red')

puts lumina

# made up miles and gallons
MyCar.gas_mileage(50, 900)
