// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from choirbot_interfaces:srv/TaskCompletionService.idl
// generated code does not contain a copyright notice
#include "choirbot_interfaces/srv/detail/task_completion_service__rosidl_typesupport_fastrtps_cpp.hpp"
#include "choirbot_interfaces/srv/detail/task_completion_service__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace choirbot_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_choirbot_interfaces
cdr_serialize(
  const choirbot_interfaces::srv::TaskCompletionService_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: agent_id
  cdr << ros_message.agent_id;
  // Member: task_seq_num
  cdr << ros_message.task_seq_num;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_choirbot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  choirbot_interfaces::srv::TaskCompletionService_Request & ros_message)
{
  // Member: agent_id
  cdr >> ros_message.agent_id;

  // Member: task_seq_num
  cdr >> ros_message.task_seq_num;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_choirbot_interfaces
get_serialized_size(
  const choirbot_interfaces::srv::TaskCompletionService_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: agent_id
  {
    size_t item_size = sizeof(ros_message.agent_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: task_seq_num
  {
    size_t item_size = sizeof(ros_message.task_seq_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_choirbot_interfaces
max_serialized_size_TaskCompletionService_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: agent_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: task_seq_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TaskCompletionService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const choirbot_interfaces::srv::TaskCompletionService_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TaskCompletionService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<choirbot_interfaces::srv::TaskCompletionService_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TaskCompletionService_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const choirbot_interfaces::srv::TaskCompletionService_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TaskCompletionService_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TaskCompletionService_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _TaskCompletionService_Request__callbacks = {
  "choirbot_interfaces::srv",
  "TaskCompletionService_Request",
  _TaskCompletionService_Request__cdr_serialize,
  _TaskCompletionService_Request__cdr_deserialize,
  _TaskCompletionService_Request__get_serialized_size,
  _TaskCompletionService_Request__max_serialized_size
};

static rosidl_message_type_support_t _TaskCompletionService_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TaskCompletionService_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace choirbot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_choirbot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<choirbot_interfaces::srv::TaskCompletionService_Request>()
{
  return &choirbot_interfaces::srv::typesupport_fastrtps_cpp::_TaskCompletionService_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, choirbot_interfaces, srv, TaskCompletionService_Request)() {
  return &choirbot_interfaces::srv::typesupport_fastrtps_cpp::_TaskCompletionService_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace choirbot_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_choirbot_interfaces
cdr_serialize(
  const choirbot_interfaces::srv::TaskCompletionService_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_choirbot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  choirbot_interfaces::srv::TaskCompletionService_Response & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_choirbot_interfaces
get_serialized_size(
  const choirbot_interfaces::srv::TaskCompletionService_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_choirbot_interfaces
max_serialized_size_TaskCompletionService_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _TaskCompletionService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const choirbot_interfaces::srv::TaskCompletionService_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TaskCompletionService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<choirbot_interfaces::srv::TaskCompletionService_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TaskCompletionService_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const choirbot_interfaces::srv::TaskCompletionService_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TaskCompletionService_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TaskCompletionService_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _TaskCompletionService_Response__callbacks = {
  "choirbot_interfaces::srv",
  "TaskCompletionService_Response",
  _TaskCompletionService_Response__cdr_serialize,
  _TaskCompletionService_Response__cdr_deserialize,
  _TaskCompletionService_Response__get_serialized_size,
  _TaskCompletionService_Response__max_serialized_size
};

static rosidl_message_type_support_t _TaskCompletionService_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TaskCompletionService_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace choirbot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_choirbot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<choirbot_interfaces::srv::TaskCompletionService_Response>()
{
  return &choirbot_interfaces::srv::typesupport_fastrtps_cpp::_TaskCompletionService_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, choirbot_interfaces, srv, TaskCompletionService_Response)() {
  return &choirbot_interfaces::srv::typesupport_fastrtps_cpp::_TaskCompletionService_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace choirbot_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _TaskCompletionService__callbacks = {
  "choirbot_interfaces::srv",
  "TaskCompletionService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, choirbot_interfaces, srv, TaskCompletionService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, choirbot_interfaces, srv, TaskCompletionService_Response)(),
};

static rosidl_service_type_support_t _TaskCompletionService__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TaskCompletionService__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace choirbot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_choirbot_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<choirbot_interfaces::srv::TaskCompletionService>()
{
  return &choirbot_interfaces::srv::typesupport_fastrtps_cpp::_TaskCompletionService__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, choirbot_interfaces, srv, TaskCompletionService)() {
  return &choirbot_interfaces::srv::typesupport_fastrtps_cpp::_TaskCompletionService__handle;
}

#ifdef __cplusplus
}
#endif