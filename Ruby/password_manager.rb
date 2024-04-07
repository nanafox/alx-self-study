#!/usr/bin/env ruby
# frozen_string_literal: true

EMAIL = 'john.doe@example.com'
PASSWORD = 'strong123!'

puts 'Welcome to your SecureLazy Password Manager'
puts 'Please log in to continue'
puts

print 'Enter email: '
# get a valid email address from the user
user_email = gets.chomp.scan(/\w+.*@\w+\.\w+/)[0]

print 'Password: '
password = gets.chomp

raise 'That was not a valid email address' if user_email.nil?

if user_email != EMAIL || password != PASSWORD
  puts 'Invalid email or password. Try again!'
else
  puts "Hello #{EMAIL}."
end
