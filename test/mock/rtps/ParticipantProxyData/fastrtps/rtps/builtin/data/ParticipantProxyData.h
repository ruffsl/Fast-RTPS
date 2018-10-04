// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file ParticipantProxyData.h
 */
// TODO(Ricardo) Remove these mock when ParticipantProxyData doesn't contain functionality, only data.
#ifndef _RTPS_BUILTIN_DATA_PARTICIPANTPROXYDATA_H_
#define _RTPS_BUILTIN_DATA_PARTICIPANTPROXYDATA_H_

#include <fastrtps/rtps/common/Guid.h>
#include <fastrtps/rtps/common/Locator.h>
#include <fastrtps/rtps/common/Token.h>

#if HAVE_SECURITY
#include <fastrtps/rtps/security/accesscontrol/ParticipantSecurityAttributes.h>
#endif

namespace eprosima {
namespace fastrtps {
namespace rtps {

class ParticipantProxyData
{
    public:

        ParticipantProxyData() : m_availableBuiltinEndpoints(0), m_VendorId(c_VendorId_Unknown) {}

        GUID_t m_guid;
        uint32_t m_availableBuiltinEndpoints;
        LocatorList_t m_metatrafficUnicastLocatorList;
        LocatorList_t m_metatrafficMulticastLocatorList;
        VendorId_t m_VendorId;
#if HAVE_SECURITY
        IdentityToken identity_token_;
        PermissionsToken permissions_token_;
        security::ParticipantSecurityAttributesMask security_attributes_;
        security::PluginParticipantSecurityAttributesMask plugin_security_attributes_;
#endif
};

} // namespace rtps
} // namespace fastrtps
} // namespace eprosima

#endif // _RTPS_BUILTIN_DATA_PARTICIPANTPROXYDATA_H_
