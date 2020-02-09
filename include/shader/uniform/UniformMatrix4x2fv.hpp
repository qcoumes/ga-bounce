#ifndef GA_PHYSICS_UNIFORMMATRIX42_HPP
#define GA_PHYSICS_UNIFORMMATRIX42_HPP

#include <shader/uniform/IUniform.hpp>


namespace mastercraft::shader {
    
    class UniformMatrix4x2fv : public IUniform {
        
        public:
        
            using IUniform::IUniform;
            
            void load(const void *value) final;
    };
}

#endif //GA_PHYSICS_UNIFORMMATRIX42_HPP