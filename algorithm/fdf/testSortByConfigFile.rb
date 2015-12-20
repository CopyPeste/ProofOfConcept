
require_relative './SortByConfigFile.rb'

Given /^step woupi test$/ do
  puts "salut"
end

def main(list)

  puts "--- List ---"
  puts list
  puts "--- ---"

  sortByConfigFile = SortByConfigFile.new()
  puts sortByConfigFile.getIgnoreFile()

  puts "--- Ignore File New List ---"
  puts sortByConfigFile.getListSortWhitoutIgnoredFiles(list)

  puts "--- List ---"
  puts list
  puts "--- ---"

  puts "--- Ignore Extension New List ---"
  puts sortByConfigFile.getListSortWhitoutIgnoredExtension(list)

  puts "--- List ---"
  puts list
  puts "--- ---"

  sortByConfigFile.addCompareExtension([".c", ".java"])
  puts "--- List compare extension New List ---"
  sortByConfigFile.getListSortByCompareExtension(list).each do | elem |
    puts elem
  end
  puts "--- List ---"
  puts list
  puts "--- ---"

end


list = ["path1/fichier1.c", "path2/fichier16.cpp", "path3/fichier3.java", "path4/fichier4.txt", "path5/fichier5.rb", "path6/fichier6.php", "path7/fichier7.xml", "path8/fichier1.c", "path9/fichier16.cpp", "path10/fichier10.java", "path11/fichier11.java", "path12/fichier12.rb", "path13/fichier13.php", "path14/fichier14.xml", "path15/fichier15.c", "path16/fichier168945.cpp", "/home/edouard/Documents/EIP/Ruby/algorithm/test.c", "/home/edouard/Documents/EIP/Ruby/algorithm/Test/test.c", "/home/edouard/Documents/EIP/Ruby/algorithm/Test/test2.cpp", "/home/edouard/Documents/EIP/Ruby/algorithm/test2.cpp", "toto", "toto", "/test/test/GemFile"]

main(list)
