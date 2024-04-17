#!/usr/bin/env ruby
# frozen_string_literal: true

EMAIL = 'john.doe@example.com'
PASSWORD = 'strong123!'
password_vault = {}

# Displays the welcome page of the SecureLazy Password Manager.
#
# This method prints a welcome message and prompts the user to log in
# in order to continue using the password manager.
def show_welcome_page
  puts 'Welcome to your SecureLazy Password Manager'
  puts 'Please log in to continue'
  puts
end

# Prompts the user to enter an email address and validates it.
#
# This method prompts the user to enter an email address and validates it using
# a regular expression.
# It expects the user to enter a valid email address in the format
# `username@example.com`.
# If the entered email address is not valid, it displays an error message and
# exits the program.
#
# @return [String] The validated email address entered by the user.
def user_email
  print 'Enter email: '

  # get a valid email address from the user
  email = gets.chomp.strip.scan(/\w+.*@\w+\.\w+/)[0]
  if email.nil?
    puts "\nERROR: That didn't look like a valid email address. Please try again."
    exit 1
  end

  email.to_s
end

# Gets the login password for the user from standard input
#
# @return [String] The password
def user_password
  print 'Password: '
  gets.chomp
end

def validate_user_info(email, password)
  if email == EMAIL && password == PASSWORD
    puts "\nYou have successfully logged in"
  else
    puts 'Invalid email or password. Please try again'
    exit 1
  end
end

# handles the sign operation along with validation
def sign_in
  validate_user_info(user_email, user_password)
end

# prints the menu options
def menu_options
  puts
  puts "Hello #{EMAIL}"
  puts 'What would you like to do?'
  puts '1. Add new service credentials'
  puts "2. Retrieve an existing service's credentials"
  puts '3. Exit'
end

# Gets the option user chooses from the menu option
#
# @return [Int] The option the user selected
def user_selection
  print '==>: '
  gets.chomp.to_i
end

# get the name of the service to add or retrieve credentials for
def service
  print 'Enter the name of the service: '
  gets.chomp.to_sym
end

# get the username when adding a new service
def service_username
  print 'Please enter the username for this service: '
  gets.chomp
end

# get the password when adding a new service
def service_password
  print 'Please enter the password for this service: '
  gets.chomp
end

# Adds a new credential for a service
#
# @param service [Symbol] The name of the service to add
# @param service_username [String] The username for the new service
# @param service_password [String] The password for the new service
# @param password_vault [Hash] A hash containing all service credentials
def add_service_credentials(
  service, service_username, service_password, password_vault
)
  if [service, service_password, service_username].any?(&:empty?)
    puts 'Missing an important argument. Service cannot be added'
    exit 1
  end

  password_vault[service] = {}
  password_vault[service][:username] = service_username
  password_vault[service][:password] = service_password

  puts "\nCredentials for [#{service}] added successfully"
end

# Exits the program gracefully
def exit_program
  puts 'Exiting...'
  exit
end

# Prints the credentials for a given service.
#
# If the service credentials is a hash, it will print each key-value pair
# in a formatted manner. If the hash is empty, it means the service does not
# exist.
#
# @param service_name [Symbol] The name of the service.
# @param service_credentials [Hash] The credentials for the service.
def print_service_credentials(service_name, service_credentials)
  if service_credentials.empty?
    puts "\n[#{service_name}]: This service doesn't exist."
  else
    puts "\nCredentials for [#{service_name}]"
    service_credentials.each_pair do |key, value|
      puts "\t#{key}: #{value}"
    end
  end
end

# Returns the service credentials of a requested service
#
# @param service_name [Symbol] The name of the service to get credentials of
# @param password_vault [Hash] The hash containing all service credentials
#
# @return [Hash] A hash containing the requested service's credentials when
# found, else it returns an empty Hash
def service_credentials(service_name, password_vault)
  password_vault.fetch(
    service_name, {}
  )
end

# sign in use the program
sign_in

loop do
  menu_options

  case user_selection
  when 1 # for a new service
    add_service_credentials(
      service, service_username, service_password, password_vault
    )

  when 2 # retrieve existing service credentials
    requested_service_name = service
    credentials = service_credentials(requested_service_name, password_vault)

    print_service_credentials(requested_service_name, credentials)

  when 3
    exit_program

  else
    puts 'Invalid option... exiting'
    exit 1
  end
end
