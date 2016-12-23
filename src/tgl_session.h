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

    Copyright Vitaly Valtman 2014-2015
    Copyright Topology LP 2016
*/

#ifndef __TGL_SESSION_H__
#define __TGL_SESSION_H__

#include <memory>
#include <set>
#include <stdint.h>

class tgl_connection;
class tgl_timer;
struct tgl_dc;

struct tgl_session {
    std::weak_ptr<tgl_dc> dc;
    int64_t session_id;
    int64_t last_msg_id;
    int32_t seq_no;
    int32_t received_messages;
    std::shared_ptr<tgl_connection> c;
    std::set<int64_t> ack_set;
    std::shared_ptr<tgl_timer> ev;
    tgl_session()
        : dc()
        , session_id(0)
        , last_msg_id(0)
        , seq_no(0)
        , received_messages(0)
        , c()
        , ack_set()
        , ev()
    { }

    void clear();
};

#endif