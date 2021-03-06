#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::glm::Design, struct ::statiskit::glm::ProportionalDesign, struct ::statiskit::glm::Design > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::glm::Design, struct ::statiskit::glm::ProportionalDesign, struct ::statiskit::glm::Design >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > >  return_type_e119dcb2058d5dc6b245a20caccba0c3;
            virtual return_type_e119dcb2058d5dc6b245a20caccba0c3 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_e119dcb2058d5dc6b245a20caccba0c3, class_type, copy, ); };
            typedef class ::statiskit::glm::VectorPredictor * return_type_ca02a0be11a256df81e12e7e45b9eb90;
            typedef struct ::statiskit::MultivariateSampleSpace const & param_ca02a0be11a256df81e12e7e45b9eb90_0_type;
            typedef ::statiskit::Index const & param_ca02a0be11a256df81e12e7e45b9eb90_1_type;
            virtual return_type_ca02a0be11a256df81e12e7e45b9eb90 build_predictor(param_ca02a0be11a256df81e12e7e45b9eb90_0_type param_0, param_ca02a0be11a256df81e12e7e45b9eb90_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_ca02a0be11a256df81e12e7e45b9eb90, class_type, build_predictor, param_0, param_1); };
            typedef ::statiskit::Index  return_type_03749ad541855dfdb16bf974f84e692d;
            typedef class ::statiskit::UnivariateConditionalData const & param_03749ad541855dfdb16bf974f84e692d_0_type;
            virtual return_type_03749ad541855dfdb16bf974f84e692d beta_size(param_03749ad541855dfdb16bf974f84e692d_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_03749ad541855dfdb16bf974f84e692d, class_type, beta_size, param_0); };
            typedef class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >  return_type_e4bff1767d4c5024943c6a3e34c37298;
            typedef class ::statiskit::UnivariateConditionalData const & param_e4bff1767d4c5024943c6a3e34c37298_0_type;
            virtual return_type_e4bff1767d4c5024943c6a3e34c37298 Z_init(param_e4bff1767d4c5024943c6a3e34c37298_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_e4bff1767d4c5024943c6a3e34c37298, class_type, Z_init, param_0); };
    };
}


namespace autowig {
}

void wrapper_c62603d941d85899a63c49db84bf45d1(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::Design, struct ::statiskit::glm::ProportionalDesign, struct ::statiskit::glm::Design >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::Design, struct ::statiskit::glm::ProportionalDesign, struct ::statiskit::glm::Design > >::Type, struct ::statiskit::glm::Design > class_c62603d941d85899a63c49db84bf45d1(module, "_PolymorphicCopy_c62603d941d85899a63c49db84bf45d1", "");
    class_c62603d941d85899a63c49db84bf45d1.def(pybind11::init<  >());

}