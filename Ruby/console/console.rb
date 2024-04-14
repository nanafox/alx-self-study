#!/usr/bin/env ruby
# frozen_string_literal: true

def input
  print 'console => '
  begin
    gets.chomp.strip
  rescue NoMethodError
    puts 'Exiting'
    exit
  end
end

def do_create(line)
  puts "Arguments\n"

  # split the line according to space
  splitted = line.scan(/(\w+)=([^\s]+)/)

  p splitted
end

loop do
  line = input
  cmd = line.split[0]

  case cmd
  when 'exit'
    exit
  when ''
    next
  when 'create'
    puts "\n\nCreating a model"

    do_create(line.sub(cmd, '').strip)
  else
    puts "Invalid command: #{cmd}"
  end
end
