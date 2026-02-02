#!/usr/bin/env ruby

ARGV.map(&:to_i).sort.each do |num|
  puts num
end
