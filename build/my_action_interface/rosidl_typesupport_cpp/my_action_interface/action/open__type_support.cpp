// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from my_action_interface:action/Open.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_action_interface/action/detail/open__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Open_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Open_Goal_type_support_ids_t;

static const _Open_Goal_type_support_ids_t _Open_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Open_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Open_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Open_Goal_type_support_symbol_names_t _Open_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interface, action, Open_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interface, action, Open_Goal)),
  }
};

typedef struct _Open_Goal_type_support_data_t
{
  void * data[2];
} _Open_Goal_type_support_data_t;

static _Open_Goal_type_support_data_t _Open_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Open_Goal_message_typesupport_map = {
  2,
  "my_action_interface",
  &_Open_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Open_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Open_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Open_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Open_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interface::action::Open_Goal>()
{
  return &::my_action_interface::action::rosidl_typesupport_cpp::Open_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interface, action, Open_Goal)() {
  return get_message_type_support_handle<my_action_interface::action::Open_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interface/action/detail/open__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Open_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Open_Result_type_support_ids_t;

static const _Open_Result_type_support_ids_t _Open_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Open_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Open_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Open_Result_type_support_symbol_names_t _Open_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interface, action, Open_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interface, action, Open_Result)),
  }
};

typedef struct _Open_Result_type_support_data_t
{
  void * data[2];
} _Open_Result_type_support_data_t;

static _Open_Result_type_support_data_t _Open_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Open_Result_message_typesupport_map = {
  2,
  "my_action_interface",
  &_Open_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Open_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Open_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Open_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Open_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interface::action::Open_Result>()
{
  return &::my_action_interface::action::rosidl_typesupport_cpp::Open_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interface, action, Open_Result)() {
  return get_message_type_support_handle<my_action_interface::action::Open_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interface/action/detail/open__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Open_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Open_Feedback_type_support_ids_t;

static const _Open_Feedback_type_support_ids_t _Open_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Open_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Open_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Open_Feedback_type_support_symbol_names_t _Open_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interface, action, Open_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interface, action, Open_Feedback)),
  }
};

typedef struct _Open_Feedback_type_support_data_t
{
  void * data[2];
} _Open_Feedback_type_support_data_t;

static _Open_Feedback_type_support_data_t _Open_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Open_Feedback_message_typesupport_map = {
  2,
  "my_action_interface",
  &_Open_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Open_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Open_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Open_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Open_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interface::action::Open_Feedback>()
{
  return &::my_action_interface::action::rosidl_typesupport_cpp::Open_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interface, action, Open_Feedback)() {
  return get_message_type_support_handle<my_action_interface::action::Open_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interface/action/detail/open__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Open_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Open_SendGoal_Request_type_support_ids_t;

static const _Open_SendGoal_Request_type_support_ids_t _Open_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Open_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Open_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Open_SendGoal_Request_type_support_symbol_names_t _Open_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interface, action, Open_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interface, action, Open_SendGoal_Request)),
  }
};

typedef struct _Open_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Open_SendGoal_Request_type_support_data_t;

static _Open_SendGoal_Request_type_support_data_t _Open_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Open_SendGoal_Request_message_typesupport_map = {
  2,
  "my_action_interface",
  &_Open_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Open_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Open_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Open_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Open_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interface::action::Open_SendGoal_Request>()
{
  return &::my_action_interface::action::rosidl_typesupport_cpp::Open_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interface, action, Open_SendGoal_Request)() {
  return get_message_type_support_handle<my_action_interface::action::Open_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interface/action/detail/open__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Open_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Open_SendGoal_Response_type_support_ids_t;

static const _Open_SendGoal_Response_type_support_ids_t _Open_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Open_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Open_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Open_SendGoal_Response_type_support_symbol_names_t _Open_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interface, action, Open_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interface, action, Open_SendGoal_Response)),
  }
};

typedef struct _Open_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Open_SendGoal_Response_type_support_data_t;

static _Open_SendGoal_Response_type_support_data_t _Open_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Open_SendGoal_Response_message_typesupport_map = {
  2,
  "my_action_interface",
  &_Open_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Open_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Open_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Open_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Open_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interface::action::Open_SendGoal_Response>()
{
  return &::my_action_interface::action::rosidl_typesupport_cpp::Open_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interface, action, Open_SendGoal_Response)() {
  return get_message_type_support_handle<my_action_interface::action::Open_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_action_interface/action/detail/open__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Open_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Open_SendGoal_type_support_ids_t;

static const _Open_SendGoal_type_support_ids_t _Open_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Open_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Open_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Open_SendGoal_type_support_symbol_names_t _Open_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interface, action, Open_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interface, action, Open_SendGoal)),
  }
};

typedef struct _Open_SendGoal_type_support_data_t
{
  void * data[2];
} _Open_SendGoal_type_support_data_t;

static _Open_SendGoal_type_support_data_t _Open_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Open_SendGoal_service_typesupport_map = {
  2,
  "my_action_interface",
  &_Open_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Open_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Open_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Open_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Open_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_action_interface::action::Open_SendGoal>()
{
  return &::my_action_interface::action::rosidl_typesupport_cpp::Open_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interface/action/detail/open__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Open_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Open_GetResult_Request_type_support_ids_t;

static const _Open_GetResult_Request_type_support_ids_t _Open_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Open_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Open_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Open_GetResult_Request_type_support_symbol_names_t _Open_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interface, action, Open_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interface, action, Open_GetResult_Request)),
  }
};

typedef struct _Open_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Open_GetResult_Request_type_support_data_t;

static _Open_GetResult_Request_type_support_data_t _Open_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Open_GetResult_Request_message_typesupport_map = {
  2,
  "my_action_interface",
  &_Open_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Open_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Open_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Open_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Open_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interface::action::Open_GetResult_Request>()
{
  return &::my_action_interface::action::rosidl_typesupport_cpp::Open_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interface, action, Open_GetResult_Request)() {
  return get_message_type_support_handle<my_action_interface::action::Open_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interface/action/detail/open__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Open_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Open_GetResult_Response_type_support_ids_t;

static const _Open_GetResult_Response_type_support_ids_t _Open_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Open_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Open_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Open_GetResult_Response_type_support_symbol_names_t _Open_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interface, action, Open_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interface, action, Open_GetResult_Response)),
  }
};

typedef struct _Open_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Open_GetResult_Response_type_support_data_t;

static _Open_GetResult_Response_type_support_data_t _Open_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Open_GetResult_Response_message_typesupport_map = {
  2,
  "my_action_interface",
  &_Open_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Open_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Open_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Open_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Open_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interface::action::Open_GetResult_Response>()
{
  return &::my_action_interface::action::rosidl_typesupport_cpp::Open_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interface, action, Open_GetResult_Response)() {
  return get_message_type_support_handle<my_action_interface::action::Open_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_action_interface/action/detail/open__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Open_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Open_GetResult_type_support_ids_t;

static const _Open_GetResult_type_support_ids_t _Open_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Open_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Open_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Open_GetResult_type_support_symbol_names_t _Open_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interface, action, Open_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interface, action, Open_GetResult)),
  }
};

typedef struct _Open_GetResult_type_support_data_t
{
  void * data[2];
} _Open_GetResult_type_support_data_t;

static _Open_GetResult_type_support_data_t _Open_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Open_GetResult_service_typesupport_map = {
  2,
  "my_action_interface",
  &_Open_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Open_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Open_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Open_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Open_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_action_interface::action::Open_GetResult>()
{
  return &::my_action_interface::action::rosidl_typesupport_cpp::Open_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "my_action_interface/action/detail/open__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace my_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Open_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Open_FeedbackMessage_type_support_ids_t;

static const _Open_FeedbackMessage_type_support_ids_t _Open_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Open_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Open_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Open_FeedbackMessage_type_support_symbol_names_t _Open_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_action_interface, action, Open_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_action_interface, action, Open_FeedbackMessage)),
  }
};

typedef struct _Open_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Open_FeedbackMessage_type_support_data_t;

static _Open_FeedbackMessage_type_support_data_t _Open_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Open_FeedbackMessage_message_typesupport_map = {
  2,
  "my_action_interface",
  &_Open_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Open_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Open_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Open_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Open_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_action_interface::action::Open_FeedbackMessage>()
{
  return &::my_action_interface::action::rosidl_typesupport_cpp::Open_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, my_action_interface, action, Open_FeedbackMessage)() {
  return get_message_type_support_handle<my_action_interface::action::Open_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "my_action_interface/action/detail/open__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace my_action_interface
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Open_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace my_action_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<my_action_interface::action::Open>()
{
  using ::my_action_interface::action::rosidl_typesupport_cpp::Open_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Open_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::my_action_interface::action::Open::Impl::SendGoalService>();
  Open_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::my_action_interface::action::Open::Impl::GetResultService>();
  Open_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::my_action_interface::action::Open::Impl::CancelGoalService>();
  Open_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::my_action_interface::action::Open::Impl::FeedbackMessage>();
  Open_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::my_action_interface::action::Open::Impl::GoalStatusMessage>();
  return &Open_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
