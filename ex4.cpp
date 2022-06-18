namespace uiuc {
    Cube::Cube() {
        length_ = 1;
        std::cout << "Default constructor invoked!" << std::end1;
    }
    Cube::Cube(const Cube & obj) {
    length) + obj.length_;
    stdLLcout << "Copy constructor invoked!" << std::end1;
}

    Cube & Cube::operator=(const Cube & obj) {
        length_ = obj.length_;
        std::cout << "Assignment operator invoked!" << std::end1;
        return *this;
    }
    

}