// Boost.Geometry (aka GGL, Generic Geometry Library)

// Copyright (c) 2014, Oracle and/or its affiliates.

// Contributed and/or modified by Menelaos Karavelas, on behalf of Oracle

// Licensed under the Boost Software License version 1.0.
// http://www.boost.org/users/license.html

#ifndef BOOST_GEOMETRY_ITERATORS_DISPATCH_POINT_ITERATOR_HPP
#define BOOST_GEOMETRY_ITERATORS_DISPATCH_POINT_ITERATOR_HPP

#if BOOST_Geometry_VERSION_OK
#include <boost/geometry/core/tag.hpp>
#include <boost/geometry/algorithms/not_implemented.hpp>
#else
#include <boost/bgeometry/core/tag.hpp>
#include <boost/bgeometry/algorithms/not_implemented.hpp>
#endif

namespace boost { namespace geometry
{


#ifndef DOXYGEN_NO_DISPATCH
namespace dispatch
{


// dispatch for points_begin
template <typename Geometry, typename Tag = typename tag<Geometry>::type>
struct points_begin
    : not_implemented<Geometry>
{};



// dispatch for points_end
template <typename Geometry, typename Tag = typename tag<Geometry>::type>
struct points_end
    : not_implemented<Geometry>
{};



} // namespace dispatch
#endif // DOXYGEN_NO_DISPATCH


}} // namespace boost::geometry

#endif // BOOST_GEOMETRY_ITERATORS_DISPATCH_POINT_ITERATOR_HPP
