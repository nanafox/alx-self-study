#!/usr/bin/env ruby
# frozen_string_literal: true

EMAIL = 'john.doe@example.com'
PASSWORD = 'strong123!'
password_vault = {}

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
  exit 1
end

running = true

until running == false
  puts
  puts "Hello #{EMAIL}"
  puts 'What would you like to do?'
  puts '1. Add new service credentials'
  puts "2. Retrieve an existing service's credentials"
  puts '3. Exit'
  print '==>: '
  user_selection = gets.chomp.to_i

  puts
  case user_selection
  when 1 # for a new service
    print 'Enter the name of the service: '
    new_service = gets.chomp.to_sym
    password_vault[new_service.to_sym] = {}

    print 'Please enter the username for this service: '
    new_service_username = gets.chomp
    password_vault[new_service][:username] = new_service_username

    print 'Please enter the password for this service: '
    new_service_password = gets.chomp
    password_vault[new_service][:password] = new_service_password

    puts "\nCredentials for #{new_service} added successfully"

  when 2 # retrieve existing service credentials
    print 'Enter the name of the service: '
    service_name = gets.chomp.to_sym

    data = password_vault.fetch(service_name, 'This service does not exist')
    if data.is_a? Hash
      puts "Credentials for #{service_name}"
      data.each_pair do |key, value|
        puts "\t#{key}: #{value}"
      end
    else
      puts data
    end
  when 3
    puts 'Exiting...'
    running = false
  else
    puts 'Invalid option... exiting'
    exit 1
  end
end
