// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynamixel_interfaces:srv/RebootDxl.idl
// generated code does not contain a copyright notice
#include "dynamixel_interfaces/srv/detail/reboot_dxl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
dynamixel_interfaces__srv__RebootDxl_Request__init(dynamixel_interfaces__srv__RebootDxl_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dynamixel_interfaces__srv__RebootDxl_Request__fini(msg);
    return false;
  }
  return true;
}

void
dynamixel_interfaces__srv__RebootDxl_Request__fini(dynamixel_interfaces__srv__RebootDxl_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
}

bool
dynamixel_interfaces__srv__RebootDxl_Request__are_equal(const dynamixel_interfaces__srv__RebootDxl_Request * lhs, const dynamixel_interfaces__srv__RebootDxl_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  return true;
}

bool
dynamixel_interfaces__srv__RebootDxl_Request__copy(
  const dynamixel_interfaces__srv__RebootDxl_Request * input,
  dynamixel_interfaces__srv__RebootDxl_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  return true;
}

dynamixel_interfaces__srv__RebootDxl_Request *
dynamixel_interfaces__srv__RebootDxl_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_interfaces__srv__RebootDxl_Request * msg = (dynamixel_interfaces__srv__RebootDxl_Request *)allocator.allocate(sizeof(dynamixel_interfaces__srv__RebootDxl_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_interfaces__srv__RebootDxl_Request));
  bool success = dynamixel_interfaces__srv__RebootDxl_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_interfaces__srv__RebootDxl_Request__destroy(dynamixel_interfaces__srv__RebootDxl_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_interfaces__srv__RebootDxl_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_interfaces__srv__RebootDxl_Request__Sequence__init(dynamixel_interfaces__srv__RebootDxl_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_interfaces__srv__RebootDxl_Request * data = NULL;

  if (size) {
    data = (dynamixel_interfaces__srv__RebootDxl_Request *)allocator.zero_allocate(size, sizeof(dynamixel_interfaces__srv__RebootDxl_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_interfaces__srv__RebootDxl_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_interfaces__srv__RebootDxl_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dynamixel_interfaces__srv__RebootDxl_Request__Sequence__fini(dynamixel_interfaces__srv__RebootDxl_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dynamixel_interfaces__srv__RebootDxl_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dynamixel_interfaces__srv__RebootDxl_Request__Sequence *
dynamixel_interfaces__srv__RebootDxl_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_interfaces__srv__RebootDxl_Request__Sequence * array = (dynamixel_interfaces__srv__RebootDxl_Request__Sequence *)allocator.allocate(sizeof(dynamixel_interfaces__srv__RebootDxl_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_interfaces__srv__RebootDxl_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_interfaces__srv__RebootDxl_Request__Sequence__destroy(dynamixel_interfaces__srv__RebootDxl_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_interfaces__srv__RebootDxl_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_interfaces__srv__RebootDxl_Request__Sequence__are_equal(const dynamixel_interfaces__srv__RebootDxl_Request__Sequence * lhs, const dynamixel_interfaces__srv__RebootDxl_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_interfaces__srv__RebootDxl_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_interfaces__srv__RebootDxl_Request__Sequence__copy(
  const dynamixel_interfaces__srv__RebootDxl_Request__Sequence * input,
  dynamixel_interfaces__srv__RebootDxl_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_interfaces__srv__RebootDxl_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_interfaces__srv__RebootDxl_Request * data =
      (dynamixel_interfaces__srv__RebootDxl_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_interfaces__srv__RebootDxl_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_interfaces__srv__RebootDxl_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_interfaces__srv__RebootDxl_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dynamixel_interfaces__srv__RebootDxl_Response__init(dynamixel_interfaces__srv__RebootDxl_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
dynamixel_interfaces__srv__RebootDxl_Response__fini(dynamixel_interfaces__srv__RebootDxl_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
dynamixel_interfaces__srv__RebootDxl_Response__are_equal(const dynamixel_interfaces__srv__RebootDxl_Response * lhs, const dynamixel_interfaces__srv__RebootDxl_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
dynamixel_interfaces__srv__RebootDxl_Response__copy(
  const dynamixel_interfaces__srv__RebootDxl_Response * input,
  dynamixel_interfaces__srv__RebootDxl_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

dynamixel_interfaces__srv__RebootDxl_Response *
dynamixel_interfaces__srv__RebootDxl_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_interfaces__srv__RebootDxl_Response * msg = (dynamixel_interfaces__srv__RebootDxl_Response *)allocator.allocate(sizeof(dynamixel_interfaces__srv__RebootDxl_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynamixel_interfaces__srv__RebootDxl_Response));
  bool success = dynamixel_interfaces__srv__RebootDxl_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynamixel_interfaces__srv__RebootDxl_Response__destroy(dynamixel_interfaces__srv__RebootDxl_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynamixel_interfaces__srv__RebootDxl_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynamixel_interfaces__srv__RebootDxl_Response__Sequence__init(dynamixel_interfaces__srv__RebootDxl_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_interfaces__srv__RebootDxl_Response * data = NULL;

  if (size) {
    data = (dynamixel_interfaces__srv__RebootDxl_Response *)allocator.zero_allocate(size, sizeof(dynamixel_interfaces__srv__RebootDxl_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynamixel_interfaces__srv__RebootDxl_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynamixel_interfaces__srv__RebootDxl_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dynamixel_interfaces__srv__RebootDxl_Response__Sequence__fini(dynamixel_interfaces__srv__RebootDxl_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dynamixel_interfaces__srv__RebootDxl_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dynamixel_interfaces__srv__RebootDxl_Response__Sequence *
dynamixel_interfaces__srv__RebootDxl_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynamixel_interfaces__srv__RebootDxl_Response__Sequence * array = (dynamixel_interfaces__srv__RebootDxl_Response__Sequence *)allocator.allocate(sizeof(dynamixel_interfaces__srv__RebootDxl_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynamixel_interfaces__srv__RebootDxl_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynamixel_interfaces__srv__RebootDxl_Response__Sequence__destroy(dynamixel_interfaces__srv__RebootDxl_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynamixel_interfaces__srv__RebootDxl_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynamixel_interfaces__srv__RebootDxl_Response__Sequence__are_equal(const dynamixel_interfaces__srv__RebootDxl_Response__Sequence * lhs, const dynamixel_interfaces__srv__RebootDxl_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynamixel_interfaces__srv__RebootDxl_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynamixel_interfaces__srv__RebootDxl_Response__Sequence__copy(
  const dynamixel_interfaces__srv__RebootDxl_Response__Sequence * input,
  dynamixel_interfaces__srv__RebootDxl_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynamixel_interfaces__srv__RebootDxl_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynamixel_interfaces__srv__RebootDxl_Response * data =
      (dynamixel_interfaces__srv__RebootDxl_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynamixel_interfaces__srv__RebootDxl_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynamixel_interfaces__srv__RebootDxl_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynamixel_interfaces__srv__RebootDxl_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
