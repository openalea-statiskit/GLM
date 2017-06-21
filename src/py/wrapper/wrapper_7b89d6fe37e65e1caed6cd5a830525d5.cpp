#include "_glm.h"



namespace autowig
{
    class Wrap_7b89d6fe37e65e1caed6cd5a830525d5 : public ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator, public boost::python::wrapper< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >
    {
        public:
            

        protected:
            
            virtual class ::statiskit::glm::OrdinalRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, struct ::statiskit::MultivariateSampleSpace const & param_1, struct ::statiskit::UnivariateSampleSpace const & param_2) const
            { return this->get_override("build_estimated")(param_0, param_1, param_2); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_7b89d6fe37e65e1caed6cd5a830525d5 const volatile * get_pointer<autowig::Wrap_7b89d6fe37e65e1caed6cd5a830525d5 const volatile >(autowig::Wrap_7b89d6fe37e65e1caed6cd5a830525d5 const volatile *c) { return c; }
    template <> class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile * get_pointer<class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile >(class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7b89d6fe37e65e1caed6cd5a830525d5()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_96bcfc50e0b75aee9930cd0b018f0c9e = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__complete_fisher_estimation_96bcfc50e0b75aee9930cd0b018f0c9e");
    boost::python::object module_96bcfc50e0b75aee9930cd0b018f0c9e(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_96bcfc50e0b75aee9930cd0b018f0c9e.c_str()))));
    boost::python::scope().attr("__complete_fisher_estimation_96bcfc50e0b75aee9930cd0b018f0c9e") = module_96bcfc50e0b75aee9930cd0b018f0c9e;
    boost::python::scope scope_96bcfc50e0b75aee9930cd0b018f0c9e = module_96bcfc50e0b75aee9930cd0b018f0c9e;
    boost::python::class_< autowig::Wrap_7b89d6fe37e65e1caed6cd5a830525d5, autowig::Held< autowig::Wrap_7b89d6fe37e65e1caed6cd5a830525d5 >::Type, boost::python::bases< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >, boost::noncopyable > class_7b89d6fe37e65e1caed6cd5a830525d5("Estimator", "", boost::python::no_init);

    if(autowig::Held< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_7b89d6fe37e65e1caed6cd5a830525d5 >::Type, autowig::Held< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type, autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type, class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator > > >();
    }

}