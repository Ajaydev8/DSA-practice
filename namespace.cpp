#include <iostream> 

namespace first {
    int x = 0;
}

namespace second {
    int x = 2;
}

int main() {
    // Namespace = provide a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.

    using std::cout; //EVIL line to cut out some manual labour ;) it is std namespace.
    //std namespace has hundreds of different entities. so there is high likelyhood of naming conflict.
    

    //first way to display Namespace.

    std::cout << second::x << '\n'; //:: is resolution operators.

    //entities can have same name as long as they are in different namespace.

    //second way to display namespace

    using namespace first; //by using this we dont need to use the prefix before x.

    std::cout << x;

    return 0;
}