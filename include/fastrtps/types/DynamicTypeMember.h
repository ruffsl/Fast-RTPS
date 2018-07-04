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

#ifndef TYPES_DYNAMIC_TYPE_MEMBER_H
#define TYPES_DYNAMIC_TYPE_MEMBER_H

#include <fastrtps/types/TypesBase.h>

namespace eprosima{
namespace fastrtps{
namespace types{

class AnnotationDescriptor;
class MemberDescriptor;
class DynamicType;

class DynamicTypeMember
{
public:

    DynamicTypeMember();
    DynamicTypeMember(const DynamicTypeMember* other);
    DynamicTypeMember(const MemberDescriptor* descriptor, MemberId id);

    ~DynamicTypeMember();

	ResponseCode get_descriptor(MemberDescriptor* descriptor) const;

	uint32_t get_annotation_count();
    ResponseCode apply_annotation(AnnotationDescriptor& descriptor);
    ResponseCode get_annotation(AnnotationDescriptor& descriptor, uint32_t idx);

	bool equals(const DynamicTypeMember*) const;
	std::string get_name() const;
	MemberId get_id() const;
protected:

    uint32_t get_index() const;
    void set_index(uint32_t index);
    void set_parent(DynamicType* pType);

    friend class DynamicTypeBuilder;
    friend class DynamicType;

    DynamicType* mParent;
    MemberDescriptor* mDescriptor;
	std::vector<AnnotationDescriptor*> mAnnotation;
	MemberId mId;
};

} // namespace types
} // namespace fastrtps
} // namespace eprosima

#endif // TYPES_DYNAMIC_TYPE_MEMBER_H
