#include <iostream>
#include <chrono>
#include "Emitter.h"

int main()
{
  std::cout<<"Particle System\n";

  //initializes emitter class e emitter which inputs 500 as the number of particles
  Emitter e(500,{0,20,0});
  
  //sets a for loop with 300 being the number of frames
  for(int i = 0; i<400; i++)
  {
    //call on emitter class e method update to uptade positions
    e.update();
    //e.render();

    //calls on emitter class e method saveFrame which outputs the frame to a geo file
    e.saveFrame(i);
  }
  return EXIT_SUCCESS;
}