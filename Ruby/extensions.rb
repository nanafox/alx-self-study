#!/usr/bin/env ruby

file_extensions = {
  :gif => "image/gif",
  :jpg => "image/jpeg",
  :jpeg => "image/jpeg",
  :png => "image/png",
  :pdf => "application/pdf",
  :txt => "text/plain",
  :zip => "application/zip",
}

print "Enter the filename: "
filename = gets.chomp.downcase
extension = filename.scan(/\.\w+$/)[0] or raise "No file extension found"

puts file_extensions.fetch(
  extension.sub(".", "").to_sym, "application/octet-stream"
)
