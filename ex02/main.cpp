#include "Array.hpp"

// subject code
// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

//my tests
int main()
{
    Array<int>  intArr(5);
    intArr[0] = -34;
    intArr[1] = -15;
    intArr[2] = 0;
    intArr[3] = 54;
    intArr[4] = 137;

    Array<char> charArr(9);
    charArr[0] = '4';
    charArr[1] = '2';
    charArr[2] = 'Y';
    charArr[3] = 'e';
    charArr[4] = 'r';
    charArr[5] = 'e';
    charArr[6] = 'v';
    charArr[7] = 'a';
    charArr[8] = 'n';

    Array<std::string> stringArr(3);
    stringArr[0] = "Hello";
    stringArr[1] = "dear";
    stringArr[2] = "friend !";

    std::cout<<YELLOW<<"TEST_1: checking operator[] and size() function"<<std::endl;
    std::cout<<"-------------------------------------------------------------------------"<<RESET<<std::endl;
    std::cout<<CYAN<<"INT array -> "<<RESET;
    for (unsigned int i = 0; i < intArr.size(); ++i)
        std::cout<<intArr[i]<<", ";
    std::cout<<PINK<<" (intArr.size() = "<<intArr.size()<<")"<<RESET<<std::endl;
    std::cout<<CYAN<<"CHAR array -> "<<RESET;
    for (unsigned int i = 0; i < charArr.size(); ++i)
        std::cout<<charArr[i];
    std::cout<<PINK<<"             (charArr.size() = "<<charArr.size()<<")"<<RESET<<std::endl;
    std::cout<<CYAN<<"STRING array -> "<<RESET;
    for (unsigned int i = 0; i < stringArr.size(); ++i)
        std::cout<<stringArr[i]<<" ";
    std::cout<<PINK<<"(stringArr.size() = "<<stringArr.size()<<")"<<RESET<<std::endl;
    std::cout<<YELLOW<<"-------------------------------------------------------------------------"<<std::endl;

    std::cout<<YELLOW<<"TEST_2: checking exception"<<std::endl;
    std::cout<<"-------------------------------------------------------------------------"<<RESET<<std::endl;
    try
    {
        std::cout<<"intArr[3] = "<<intArr[3]<<std::endl;
    }
    catch (std::exception& e)
    {
        std::cout<<e.what()<<std::endl;
    }
    try
    {
        charArr[15] = '*';
    }
    catch (std::exception& e)
    {
        std::cout<<e.what()<<std::endl;
    }
    try
    {
        stringArr[0] = "Bye";
        std::cout<<"stringArr[0] = "<<stringArr[0]<<std::endl;
    }
    catch (std::exception& e)
    {
        std::cout<<e.what()<<std::endl;
    }
    std::cout<<YELLOW<<"-------------------------------------------------------------------------"<<std::endl;

    std::cout<<"TEST_3: checking copy ctor and copy assignment"<<std::endl;
    std::cout<<"-------------------------------------------------------------------------"<<RESET<<std::endl;
    Array<int>  copyIntArr(intArr);
    std::cout<<CYAN<<"INT array -> "<<RESET;
    for (unsigned int i = 0; i < intArr.size(); ++i)
        std::cout<<intArr[i]<<", ";
    std::cout<<PINK<<"                (intArr.size() = "<<intArr.size()<<")"<<RESET<<std::endl;
    std::cout<<CYAN<<"INT_COPY array -> "<<RESET;
    for (unsigned int i = 0; i < copyIntArr.size(); ++i)
        std::cout<<copyIntArr[i]<<", ";
    std::cout<<PINK<<"           (copyIntArr.size() = "<<copyIntArr.size()<<")"<<RESET<<std::endl;
    for (unsigned int i = 0; i < copyIntArr.size(); ++i)
        copyIntArr[i] = 0;
    std::cout<<CYAN<<"INT_COPY array (after assignment) -> "<<RESET;
    for (unsigned int i = 0; i < copyIntArr.size(); ++i)
        std::cout<<copyIntArr[i]<<", ";
    std::cout<<PINK<<"(copyIntArr.size() = "<<copyIntArr.size()<<")"<<RESET<<std::endl;
    std::cout<<YELLOW<<"-------------------------------------------------------------------------"<<RESET<<std::endl;

    return 0;
}