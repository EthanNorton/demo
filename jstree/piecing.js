if ( x < y) {
    z = 2;
}
 else {
    a = y + 1;
    y = x - 3;
 }

 \\ putting pieces together + modifying images

 var img = new SimpleImage("small.png");

 for (var pixel of img.values() ) {
    if (pixel.getX() >= img.getWidth()/2){
        pixel.setRed(pixel.getRed()/2);
 }
 else {
    pixel.setBlue(pixel.getRed() );
 }