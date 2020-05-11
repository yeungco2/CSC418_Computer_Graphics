#include "rgba_to_rgb.h"

void rgba_to_rgb(
  const std::vector<unsigned char> & rgba,
  const int & width,
  const int & height,
  std::vector<unsigned char> & rgb)
{
  rgb.resize(height*width*3);
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here
  ////////////////////////////////////////////////////////////////////////////
  int rgb_size = height * width * 3;
  int rgba_index = 0;
  for (int i = 0; i < rgb_size; i++) {
	//transfer but if next element is multiple of 3 (because 0 indexed), skip next rgba index
	rgb[i] = rgba[rgba_index];
	rgba++;
	if ((i+1)%3 == 0) rgba++;
  }
}
