#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink >::FLink;

            typedef class ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > >  return_type_2ac775625ec25147b744f0521e5caba0;
            virtual return_type_2ac775625ec25147b744f0521e5caba0 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_2ac775625ec25147b744f0521e5caba0, class_type, copy, ); };
            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  return_type_c10ed2d0c14d51018e3cf802f5175b9b;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_c10ed2d0c14d51018e3cf802f5175b9b_0_type;
            virtual return_type_c10ed2d0c14d51018e3cf802f5175b9b inverse_derivative(param_c10ed2d0c14d51018e3cf802f5175b9b_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_c10ed2d0c14d51018e3cf802f5175b9b, class_type, inverse_derivative, param_0); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_65b070b2b6155aa0a064200d19762fb8;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_65b070b2b6155aa0a064200d19762fb8_0_type;
            virtual return_type_65b070b2b6155aa0a064200d19762fb8 inverse(param_65b070b2b6155aa0a064200d19762fb8_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_65b070b2b6155aa0a064200d19762fb8, class_type, inverse, param_0); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_4d2059b15a575948ab0d799bda8dfbaf;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_4d2059b15a575948ab0d799bda8dfbaf_0_type;
            virtual return_type_4d2059b15a575948ab0d799bda8dfbaf evaluate(param_4d2059b15a575948ab0d799bda8dfbaf_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_4d2059b15a575948ab0d799bda8dfbaf, class_type, evaluate, param_0); };
    };
}

struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::glm::FLink< ::statiskit::glm::OrdinalLink >::*method_pointer_6460f82441fb50d18c98930791ceb190)()= &::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink >::get_distribution;
void  (::statiskit::glm::FLink< ::statiskit::glm::OrdinalLink >::*method_pointer_26d7f62f7b185b83881a44caa1e8e93c)(struct ::statiskit::ContinuousUnivariateDistribution const &)= &::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink >::set_distribution;

namespace autowig {
}

void wrapper_4a056e37beb953c9b99f495e2e8f5433(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink > >::Type, struct ::statiskit::glm::OrdinalLink > class_4a056e37beb953c9b99f495e2e8f5433(module, "_FLink_4a056e37beb953c9b99f495e2e8f5433", "");
    class_4a056e37beb953c9b99f495e2e8f5433.def(pybind11::init<  >());
    class_4a056e37beb953c9b99f495e2e8f5433.def("get_distribution", method_pointer_6460f82441fb50d18c98930791ceb190, pybind11::return_value_policy::reference_internal, "");
    class_4a056e37beb953c9b99f495e2e8f5433.def("set_distribution", method_pointer_26d7f62f7b185b83881a44caa1e8e93c, "");

}