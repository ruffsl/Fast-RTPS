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

/*!
 * @file TypeObjectHashId.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen and modified manually.
 */

#include <fastrtps/types/TypeObjectHashId.h>

#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

namespace eprosima{
namespace fastrtps{

using namespace rtps;

namespace types{

TypeObjectHashId::TypeObjectHashId()
{
    m__d = EK_COMPLETE;
}

TypeObjectHashId::~TypeObjectHashId()
{
}

TypeObjectHashId::TypeObjectHashId(const TypeObjectHashId &x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
        memcpy(m_hash, x.m_hash, 14);
        break;
        default:
        break;
    }
}

TypeObjectHashId::TypeObjectHashId(TypeObjectHashId &&x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
        memcpy(m_hash, x.m_hash, 14);
        break;
        default:
        break;
    }
}

TypeObjectHashId& TypeObjectHashId::operator=(const TypeObjectHashId &x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
        memcpy(m_hash, x.m_hash, 14);
        break;
        default:
        break;
    }

    return *this;
}

TypeObjectHashId& TypeObjectHashId::operator=(TypeObjectHashId &&x)
{
    m__d = x.m__d;

    switch(m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
        memcpy(m_hash, x.m_hash, 14);
        break;
        default:
        break;
    }

    return *this;
}

void TypeObjectHashId::_d(uint8_t __d)
{
    bool b = false;

    switch(m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
        switch(__d)
        {
            case EK_COMPLETE:
            case EK_MINIMAL:
            b = true;
            break;
            default:
            break;
        }
        break;
    }

    if(!b) throw BadParamException("Discriminator doesn't correspond with the selected union member");

    m__d = __d;
}

uint8_t TypeObjectHashId::_d() const
{
    return m__d;
}

uint8_t& TypeObjectHashId::_d()
{
    return m__d;
}

void TypeObjectHashId::hash(const EquivalenceHash &_hash)
{
    memcpy(m_hash, _hash, 14);
    m__d = EK_COMPLETE;
}

void TypeObjectHashId::hash(EquivalenceHash &&_hash)
{
    memcpy(m_hash, _hash, 14);
    m__d = EK_COMPLETE;
}

const EquivalenceHash& TypeObjectHashId::hash() const
{
    bool b = false;

    switch(m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
        b = true;
        break;
        default:
        break;
    }
    if(!b) throw BadParamException("This member is not been selected");

    return m_hash;
}

EquivalenceHash& TypeObjectHashId::hash()
{
    bool b = false;

    switch(m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
        b = true;
        break;
        default:
        break;
    }
    if(!b) throw BadParamException("This member is not been selected");

    return m_hash;
}

size_t TypeObjectHashId::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
    size_t reset_alignment = 0;
    size_t union_max_size_serialized = 0;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


        reset_alignment = current_alignment;

        reset_alignment += ((14) * 1) + eprosima::fastcdr::Cdr::alignment(reset_alignment, 1);

        if(union_max_size_serialized < reset_alignment)
            union_max_size_serialized = reset_alignment;



    return union_max_size_serialized - initial_alignment;
}

// TODO(Ricardo) Review
size_t TypeObjectHashId::getCdrSerializedSize(const TypeObjectHashId& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    switch(data.m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
        current_alignment += ((14) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);break;
        default:
        break;
    }

    return current_alignment - initial_alignment;
}

void TypeObjectHashId::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m__d;

    switch(m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
        for (int i = 0; i < 14; ++i)
        {
            scdr << m_hash[i];
        }
        break;
        default:
        break;
    }
}

void TypeObjectHashId::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m__d;

    switch(m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
        for (int i = 0; i < 14; ++i)
        {
            dcdr >> m_hash[i];
        }
        break;
        default:
        break;
    }
}



} // namespace types
} // namespace fastrtps
} // namespace eprosima