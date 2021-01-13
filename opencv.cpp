#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int count , char* value[])
{

 int angle = stoi(value[2]);
 string pathToFile = value[1];

 // Read the image file
 Mat image = imread(pathToFile);

 // Check for failure
 if (image.empty())
 {
  cout << "Could not open or find the image" << endl;
  cin.get(); //wait for any key press
  return -1;
 }

 Point2f center((image.cols/2.0),(image.rows/2.0));

 Mat rotated = getRotationMatrix2D(center,angle,1.0);

 Mat altered;

 warpAffine(image,altered,rotated,image.size());

 imshow("Original Image", image); // Show our image inside the created window.

 waitKey(0); // Wait for any keystroke in the window

 destroyAllWindows(); //destroy the created window

 imshow("Rotated Image", altered);

 waitKey(0);

 destroyAllWindows();

 return 0;
}
