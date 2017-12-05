//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------
#pragma once

namespace PlatformAgnostic
{
class Thread
{
    public:

    enum ThreadInitFlag {
        ThreadInitRunImmediately,
        ThreadInitCreateSuspended,
        ThreadInitStackSizeParamIsAReservation
    };

    typedef uintptr_t ThreadHandle;

    static ThreadHandle Create(unsigned int stack_size,
                               unsigned int ( *start_address )( void * ),
                               void* arg_list,
                               ThreadInitFlag init_flag);
};
} // namespace PlatformAgnostic
