#include <boost/filesystem.hpp>

void create_data_file(std::string file_path)
{
    boost::filesystem::path p(file_path);
    boost::filesystem::create_directory(p);
}
int main(){
    create_data_file("../RDBMS/new" );
}