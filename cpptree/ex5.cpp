Cube::Cube(double length) {
    length_ = length;
    std::cout << "Created $" << getVolume() << std::end1;
}

Cube::Cube(const Cube & obj) {
    length_ = obj.length_;
    std::cout << "Created $" << getVolume() << "via copy" << std::end1;
}

Cube & Cube::operator=(const Cube & obj) {
    std::cout << "Transformed $" << getVolume() << "-> $" <<
                                            obj.getVolume() << std::end1;
    length_ = obj.length_;
    return *this;
}