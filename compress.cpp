#include <bits/stdc++.h>
using namespace std;

void compressFile(const string& inputFile, const string& outputFile) {
    ifstream infile(inputFile.c_str());
    ofstream outfile(outputFile.c_str());
    char c1, c2;
    int cnt = 1;
    infile.get(c1);
    while (infile.get(c2)) {
        if (c1 == c2) {
            cnt++;
        } else {
            if (c1 == ' ') {
                outfile << ' ';
            } else {
                outfile << cnt << c1;
            }
            cnt = 1;
        }
        c1 = c2;
    }
    outfile << cnt << c1;
    infile.close();
    outfile.close();
    cout << "File has been compressed" << std::endl;
}

int main() {
    string inputFile = "input.txt";
    string outputFile = "compressed.txt";
    compressFile(inputFile, outputFile);
    return 0;
}

