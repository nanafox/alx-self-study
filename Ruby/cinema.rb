#!/usr/bin/env ruby
# frozen_string_literal: true

# Object Relationships in Ruby

# Defines a simple Cinema class
class Cinema
  attr_accessor :name, :location

  def initialize(name:, location:)
    @name = name
    @location = location
    @movies = [] # this will keep track of all Movie objects
  end

  def add_movie(movie)
    @movies.push(movie)
    movie.cinema = self
  end
end

# Defines a Movie class
class Movie
  def self.all
    @all ||= []
  end

  attr_accessor :title, :showtime, :cinema

  def initialize(title:, showtime:)
    self.title = title
    self.showtime = showtime
    self.class.all.push(self)
  end
end
