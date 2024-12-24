/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually
 * edited  */
/* The following lines can be configured to regenerate this file during cmake */
/* If manual edits are made, the following tags should be modified accordingly.
 */
/* BINDTOOL_GEN_AUTOMATIC(0) */
/* BINDTOOL_USE_PYGCCXML(0) */
/* BINDTOOL_HEADER_FILE(m17_decoder.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(81519a545ddc4652d42874fbdfee0e05) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/m17/m17_decoder.h>
// pydoc.h is automatically generated in the build directory
#include <m17_decoder_pydoc.h>

void bind_m17_decoder(py::module &m) {

  using m17_decoder = ::gr::m17::m17_decoder;

  py::class_<m17_decoder, gr::block, gr::basic_block,
             std::shared_ptr<m17_decoder>>(m, "m17_decoder", D(m17_decoder))

      .def(py::init(&m17_decoder::make), py::arg("debug_data"),
           py::arg("debug_ctrl"), py::arg("threshold"), py::arg("callsign"),
           py::arg("signed_str"), py::arg("encr_type"), py::arg("key"),
           py::arg("seed"), D(m17_decoder, make))

      .def("set_debug_data", &m17_decoder::set_debug_data, py::arg("debug"),
           D(m17_decoder, set_debug_data))

      .def("set_debug_ctrl", &m17_decoder::set_debug_ctrl, py::arg("debug"),
           D(m17_decoder, set_debug_ctrl))

      .def("set_callsign", &m17_decoder::set_callsign, py::arg("callsign"),
           D(m17_decoder, set_callsign))

      .def("set_threshold", &m17_decoder::set_threshold, py::arg("threshold"),
           D(m17_decoder, set_threshold))

      .def("set_signed", &m17_decoder::set_signed, py::arg("signed_str"),
           D(m17_decoder, set_signed))

      .def("set_key", &m17_decoder::set_key, py::arg("key"),
           D(m17_decoder, set_key))

      .def("set_seed", &m17_decoder::set_seed, py::arg("seed"),
           D(m17_decoder, set_seed))

      .def("parse_raw_key_string", &m17_decoder::parse_raw_key_string,
           py::arg("dest"), py::arg("inp"),
           D(m17_decoder, parse_raw_key_string))

      .def("scrambler_sequence_generator",
           &m17_decoder::scrambler_sequence_generator,
           D(m17_decoder, scrambler_sequence_generator))

      .def("scrambler_seed_calculation",
           &m17_decoder::scrambler_seed_calculation, py::arg("subtype"),
           py::arg("key"), py::arg("fn"),
           D(m17_decoder, scrambler_seed_calculation))

      ;
}
