#ifndef EMITTER_H_
#define EMITTER_H_
#include <vector>
#include "Particle.h"

//This is the emitter class for the particles
class Emitter
{

    public:
        Emitter()=default;
        Emitter(size_t _numParticles,const Vec3 &_emitDir);

        //Setts up both the update and render functions
        void update();
        void render()const;

        //Sets up the num particles function
        size_t numParticles() const;

        //Sets up saveFrame function
        void saveFrame(int _frameNo) const;
    private:
    void resetParticle(Particle &io_p);
        //creates a vector of the particles and assigns it to variavle m_particles
        std::vector<Particle> m_particles;
        //sets up a Vec3 for emition direction
        Vec3 m_emitDir{0.0f,5.0f,0.0f};

        //sets up a float for spread
        float m_spread=1.5f;
};

#endif