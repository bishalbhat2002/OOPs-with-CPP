/*
    The stream classes:
            --> ifstream class : reading data from file
            --> ofstream class : writing data to file
            --> fstream class : for reading and writing.

    There are 2 methods of opening the files. They are:
    1) open file using constructor of the file related stream class.
        syntax:
                stream_class stream_object ("file_name", mode);

            filename : file name to be opened.
            mode : ios::in, ios::out, ios::app

    2) open file using member function open().
        syntax:
                stream_class stream_object;
                stream_object.open("file_name", mode);


*/