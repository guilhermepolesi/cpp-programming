#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Function to check if the position is inside a comment or string
bool is_in_comment_or_string(const std::string& line, size_t pos);

int main(int argc, char* argv[]) {

    std::string file_name = "file.cpp"; // Default file name
    if (argc > 1) {
        file_name = argv[1]; // Get file name from command line argument if provided
    }

    bool found_main = false;

    try {
        std::ifstream inf(file_name);
        if (!inf.is_open()) {
            throw std::ios_base::failure("Failed to open the file!");
        }

        std::vector<std::string> lines;
        std::string line;

        // Read the file line by line and store the lines in a vector
        while (std::getline(inf, line)) {
            lines.push_back(line);
        }

        inf.close(); // Close the file

        std::ofstream outf(file_name, std::ios::out | std::ios::trunc);
        if (!outf.is_open()) {
            throw std::ios_base::failure("Failed to open the file for writing!");
        }

        // Iterate through the lines and write to the output file
        for (const auto& l : lines) {
            size_t pos = std::string::npos;
            const std::vector<std::string> main_signatures = {
                "int main()",
                "int main(void)",
                "int main(int argc, char* argv[])",
                "int main(int argc, char** argv)"
            };

            for (const auto& sig : main_signatures) {
                pos = l.find(sig);
                if (pos != std::string::npos) {
                    break;
                }
            }

            if (pos != std::string::npos) {
                // Check if the word is in a comment or string
                if (!is_in_comment_or_string(l, pos)) {
                    outf << l << std::endl;
                    if (!found_main) {
                        outf << "// This is the main() function" << std::endl;
                        found_main = true;
                    }
                }
                else {
                    outf << l << std::endl;
                }
            } 
            else {
                outf << l << std::endl;
            }
        }

        if (!found_main) {
            std::cerr << "main() function not found in the file." << std::endl;
        }

        outf.close(); // Close the file
    }
    catch (const std::ios_base::failure& e) {
        std::cerr << "Exception opening/reading/writing/closing the file: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception occurred: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Unknown exception occurred!" << std::endl;
    }

    return 0;
}

bool is_in_comment_or_string(const std::string& line, size_t pos) {
    bool in_string = false;
    bool in_comment = false;

    for (size_t i = 0; i < line.length(); ++i) {
        if (line[i] == '"') {
            in_string = !in_string;
        } 
        else if (line[i] == '/' && i + 1 < line.length() && line[i + 1] == '/') {
            in_comment = true;
        } 
        else if (line[i] == '\n') {
            in_comment = false; // End of line, end of comment
        }

        if (i == pos) {
            return in_string || in_comment;
        }
    }

    return in_string || in_comment;
}

