#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::glm::NegativeBinomialFisherEstimation const volatile * get_pointer<struct ::statiskit::glm::NegativeBinomialFisherEstimation const volatile >(struct ::statiskit::glm::NegativeBinomialFisherEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9ecd3a4e917551a196fd2b5d3ba51a9e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< struct ::statiskit::glm::NegativeBinomialFisherEstimation, autowig::Held< struct ::statiskit::glm::NegativeBinomialFisherEstimation >::Type, boost::python::bases< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > class_9ecd3a4e917551a196fd2b5d3ba51a9e("NegativeBinomialFisherEstimation", "", boost::python::no_init);
    class_9ecd3a4e917551a196fd2b5d3ba51a9e.def(boost::python::init< class ::statiskit::glm::NegativeBinomialRegression const *, struct ::statiskit::MultivariateData const *, ::statiskit::Index const &, ::statiskit::Indices const & >(""));
    class_9ecd3a4e917551a196fd2b5d3ba51a9e.def(boost::python::init< struct ::statiskit::glm::NegativeBinomialFisherEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::glm::NegativeBinomialFisherEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::NegativeBinomialFisherEstimation >::Type, autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::glm::NegativeBinomialFisherEstimation >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::glm::NegativeBinomialFisherEstimation, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::glm::NegativeBinomialFisherEstimation >::Type, struct ::statiskit::glm::NegativeBinomialFisherEstimation > > >();
    }

}