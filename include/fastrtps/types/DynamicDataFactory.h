// Copyright 2018 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

#ifndef TYPES_DYNAMIC_DATA_FACTORY_H
#define TYPES_DYNAMIC_DATA_FACTORY_H

#include <fastrtps/types/TypesBase.h>

namespace eprosima{
namespace fastrtps{
namespace types{

class DynamicData;
class DynamicType;

class DynamicDataFactory
{
public:
    ~DynamicDataFactory();

    RTPS_DllAPI static DynamicDataFactory* get_instance();
    RTPS_DllAPI static ResponseCode delete_instance();

    RTPS_DllAPI DynamicData* create_data(DynamicType* pType);
    RTPS_DllAPI ResponseCode delete_data(DynamicData* data);

    RTPS_DllAPI bool IsEmpty() const;

protected:
    DynamicDataFactory();


    std::vector<DynamicData*> mDynamicDatas;
};


} // namespace types
} // namespace fastrtps
} // namespace eprosima

#endif // TYPES_DYNAMIC_DATA_FACTORY_H