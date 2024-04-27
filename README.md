# file
Compression and Decompression Algorithms
This project implements a simple run-length encoding (RLE) compression and decompression algorithm. Run-length encoding is a basic form of data compression where sequences of the same data value are stored as a single data value and count.
Compression Algorithm
The compression algorithm iterates through the input file character by character. It counts consecutive occurrences of each character and writes the count followed by the character to the output file. If a space character is encountered, it's simply written to the output file. The output format is: count character.
compressFile(const string& inputFile, const string& outputFile): This function takes the input file name and the output file name as parameters. It compresses the input file using the RLE algorithm and writes the compressed data to the output file.
Decompression Algorithm
The decompression algorithm reads the compressed file line by line. Each line represents a compressed sequence. It extracts the count and character from each sequence and writes the character repeated count times to the output file. Spaces are treated as separators between compressed sequences.
decompressFile(const string& compressedFile, const string& outputFile): This function takes the compressed file name and the output file name as parameters. It decompresses the input file using the RLE algorithm and writes the decompressed data to the output file.
