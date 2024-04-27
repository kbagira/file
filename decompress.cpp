#include <bits/stdc++.h>
using namespace std;

void decompressFile(const string& compressedFile, const string& outputFile) {
    ifstream infile(compressedFile.c_str());
    ofstream outfile(outputFile.c_str());
    
    string s;
    while (getline(infile, s)) {
        stringstream ss(s);
        int cnt;
        char c;
        while (ss >> cnt >> c) {
            for (int i = 0; i < cnt; ++i) {
                outfile << c;
            }
        }
        outfile << " "; 
    }

    infile.close();
    outfile.close();
    cout << "File has been decompressed" << std::endl;
}

int main() {
    string compressedFile = "compressed.txt";
    string outputFile = "decompressed.txt";
    decompressFile(compressedFile, outputFile);

    return 0;
}
