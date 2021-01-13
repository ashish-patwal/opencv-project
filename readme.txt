A brief description of the opencv project .

Libraries included :
iostream - basic input/output operations
string - for string to text conversions
opencv - for using opencv functions

<<< main() sections >>>

contains two arguments in form of count and value i.e. int main(int count , char* value)
used for command line argument value passing (path to file and angle) .

example : a.out ~/Downloads/guitar.jpg 90  //Rotates the picture guitar.jpg by 90 degress
example : a.out ~/Downloads/ship.jpg -180  //Rotates the picture ship.jpg by -180 degress
example : a.out ~/Documents/hill.jpeg 270  //Rotates the picture hill.jpeg by 270 degress

int angle // contains angle to rotate the image with
string pathToFile // contains the path to the image file

Point2f center() // a 2 dimensional floating type vector that contains 2 floating type value

img.cols & img.rows // contains the pixel values in refernce to width and height . used to calculate center coordinates here

getRotationMatrix2D() // calculates rotation matrix based on passed arguments

warpAffine() // implements affine transformation to do image rotations , translations and scaling operations

Mat image , Mat altered // represents matrix of original and rotated images respectively

imshow() // displays image through a window
waitkey(0) // waits for user to press a key
destroyAllWindows() // destroys all windows after waitkey(0) gets executed

<<< Compilation and Linking ( local settings ) >>>

platform : linux / arch

compiling command > g++ -c -Wall -std=c++2a -o2 -I/usr/include/opencv4 -I/usr/include/opencv2  opencv.cpp -o opencv
Linking command > g++ -Wall -std=c++2a -o2 opencv.o -lopencv_imgcodecs -lopencv_imgproc -lopencv_core -lopencv_highgui -o exe
execution > ./exe path/To/Image/File.jpg rotationAngle

Submitted by : Ashish Patwal (Section C IIIrd Sem )
