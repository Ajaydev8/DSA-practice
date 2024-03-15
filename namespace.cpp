#include <iostream> 
#include <vector>

//note: <---- this sign indicate what to uncomment to make the code work

//second exercise ************************

// very long data type that is inside vector
// this data type can be a pair list.
// we can give this data type an alias after the original data type i'll come up with a new name

//typedef std::vector<std::pair<std::string, int>> pairlist_t // underscore t because it's a typedef and it's a naming convention
// this is way too much for now let's use something smaller

typedef std::string text_t;
typedef int number_t;

//************************************************



// first exercise *********************************

// namespace first {
//     int x = 0;
// }

// namespace second {
//     int x = 2;
// }

int main() {

    //second exercise part ***************
    // we can now use identyfier text_t to represent std::string.
    text_t firstName = "Bro"; // this string exactly like a variable string
    number_t age = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    //*************************

    // Namespace = provide a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.

    //first exercise*************************************************** 

    // using std::cout; <------- //EVIL line to cut out some manual labour ;) it is std namespace.
    //std namespace has hundreds of different entities. so there is high likelyhood of naming conflict.
    

    //first way to display Namespace.

    // std::cout << second::x << '\n'; <------ //:: is resolution operators.

    //entities can have same name as long as they are in different namespace.

    //second way to display namespace

    // using namespace first; <----// uncomment to make it work //by using this we dont need to use the prefix before x.

    // std::cout << x; <-----------

    //************************************************

    return 0;
}