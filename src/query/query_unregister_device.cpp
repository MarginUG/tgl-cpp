/*
    This file is part of tgl-library

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

    Copyright Topology LP 2017
*/

#include "query_unregister_device.h"

namespace tgl {
namespace impl {

void query_unregister_device::on_answer(void*)
{
    if (m_callback) {
        m_callback(true);
    }
}

int query_unregister_device::on_error(int error_code, const std::string& error_string)
{
    TGL_ERROR("RPC_CALL_FAIL " << error_code << " " << error_string);
    if (m_callback) {
        m_callback(false);
    }

    return 0;
}

void query_unregister_device::on_timeout()
{
    TGL_ERROR("timed out for query #" << msg_id() << " (" << name() << ")");
    if (m_callback) {
        m_callback(false);
    }
}

}
}
