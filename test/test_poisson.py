from statiskit import (linalg,
                       core,
                       glm)
from statiskit.data import glm as data

import unittest
from nose.plugins.attrib import attr

import math

#from test_link import AbstractTestScalarLink
from test_regression import AbstractTestUnivariateRegression


@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestPoissonRegression(unittest.TestCase):#, AbstractTestUnivariateRegression):
    # _alpha = 1.
    # _delta = linalg.Vector([0.5, 2.])
    # _x = [1, 1.6]
    # _nb_param = 3
    # _eta = 4.7
    # _canonical_link = glm.PoissonLink()
    # _mu = math.exp(_eta)
    # _places = 10

    @classmethod
    def setUpClass(cls):
        """Test Poisson regression construction"""
        #cls.predictor_init()
        #cls._canonical_model = glm.PoissonRegression(cls._pred, cls._canonical_link)
        cls._data = data.load('crabs')

    def test_Fisher_estimation(self):
        """Test Poisson regression Fisher estimation"""
        fe = glm.poisson_estimation(algo='Fisher', data=self._data, explanatories=[1], response=0)
        self.assertAlmostEqual(fe.estimated.predictor.alpha, -3.305, places=3)
        self.assertAlmostEqual(fe.estimated.predictor.delta[0], 0.164, places=3)

    # def test_get_nb_parameters(self):
    #     """Test discrete regression get number of parameters"""
    #     self.assertEqual(self._canonical_model.nb_parameters, self._nb_param)

    # def test_conditional(self):
    #     """Test discrete regression conditional operator"""
    #     response_distribution = self._canonical_model(*self._x)
    #     self.assertAlmostEqual(response_distribution.mean, self._mu, places = self._places)

    @classmethod
    def tearDownClass(cls):
        """Test Poisson regression deletion"""
        #del cls._canonical_model
        pass