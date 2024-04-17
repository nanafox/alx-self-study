# frozen_string_literal: true

# Basic functionalities of a vehicle
module VehicleFunctions
  def start_engine
    puts 'Engine started!'
  end

  def stop_engine
    decelerate(@current_speed) unless @current_speed.zero?
    puts 'Engine stopped!'
  end

  def accelerate(speed)
    @current_speed += speed
    puts "Accelerating to #{@current_speed} km/h"
  end

  def decelerate(speed)
    @current_speed -= speed
    puts "Decelerating to #{@current_speed} km/h"
  end

  def turn_on_headlights
    puts 'Headlights turned on'
  end

  def turn_off_headlights
    puts 'Headlights turned off'
  end

  def check_fuel_level
    puts "Current fuel level is #{@fuel_level} liters"
  end

  def refuel(amount)
    @fuel_level += amount
    puts "#{amount} liters of fuel added. Current fuel level " \
           "is #{@fuel_level} liters"
  end

  def lock_doors
    puts 'Doors locked'
  end

  def unlock_doors
    puts 'Doors unlocked'
  end
end

# A mixin for MyCar class
module MyCarMixin
  def turn_on_air_conditioning
    puts 'Air conditioning turned on'
  end

  def turn_off_air_conditioning
    puts 'Air conditioning turned off'
  end
end
