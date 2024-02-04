/*
    Template is the frame with generic code. It allows us to write code
    that are independent of actual data types and one template can be used
    with various data types seamlessly. Templates are used for creating
    reusable and flexible code.
/*
/*
        we can use/create template in C++ by 2 ways. They are:
            1) Function Template.
            2) Class Template.

*/

/*
                        Function Template
    Syntax:
                template < class T >
                return_type function_name (parameters list)
                {
                    ...body with type T...
                }
*/

/*
                        Class Template
    Syntax:
                template < class T >
                class classname
                {
                    class members with type T     // here is T is variable for data type
                }

                while declaring an object in main section :
                class_name < specific_data_type > object_name;
*/