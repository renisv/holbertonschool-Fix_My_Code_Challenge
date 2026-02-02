#!/usr/bin/env ruby

nums = ARGV.select { |s| s.match?(/\A-?\d+\z/) }
           .map(&:to_i)
           .sort

nums.each { |n| puts n }
