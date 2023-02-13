#include <iostream>
#include <fstream>

class FileIO{
    private:
        std::string _filename;
    public:
        bool readFile();
        bool writeFile(std::string filename);
        void setFileName(std::string filename);
        std::string getFileName();
        FileIO(std::string filename);
};


bool FileIO::readFile(){
    std::ifstream my_file;
    my_file.open(_filename);
    std::string data;
    if(!my_file){
        std::cerr << "Cannot open file\n";
        return false;
    }
    
}

bool FileIO::writeFile(std::string filename){
    std::ofstream my_file;
    my_file.open(filename, std::ios::app);
    if(my_file){
        my_file << "This is my first input to the file\n";
        my_file << "This is my second input\n";
        my_file.close();
        return true;
    }
    std::cerr << "Cannot open file\n"; 
}

FileIO::FileIO(std::string filename){
    _filename = filename;
}

int main(){
    std::cout<< "This is how we print" <<std::endl;

    std::string test;
    getline(std::cin, test); //need to use this in order to 
    std::cin >> test;
    std::cout << test << std::endl;
}