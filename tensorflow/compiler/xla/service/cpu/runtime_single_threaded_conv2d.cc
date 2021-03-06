/* Copyright 2017 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "tensorflow/compiler/xla/service/cpu/runtime_single_threaded_conv2d.h"

#include "tensorflow/compiler/xla/service/cpu/runtime_conv2d_impl.h"
#include "tensorflow/core/platform/dynamic_annotations.h"
#include "tensorflow/core/platform/types.h"

TF_ATTRIBUTE_NO_SANITIZE_MEMORY void
__xla_cpu_runtime_EigenSingleThreadedConvF16(
    const void* run_options_ptr, Eigen::half* out, Eigen::half* lhs,
    Eigen::half* rhs, tensorflow::int64 input_batch,
    tensorflow::int64 input_rows, tensorflow::int64 input_cols,
    tensorflow::int64 input_channels, tensorflow::int64 kernel_rows,
    tensorflow::int64 kernel_cols, tensorflow::int64 kernel_channels,
    tensorflow::int64 kernel_filters, tensorflow::int64 output_rows,
    tensorflow::int64 output_cols, tensorflow::int64 row_stride,
    tensorflow::int64 col_stride, tensorflow::int64 padding_top,
    tensorflow::int64 padding_bottom, tensorflow::int64 padding_left,
    tensorflow::int64 padding_right, tensorflow::int64 lhs_row_dilation,
    tensorflow::int64 lhs_col_dilation, tensorflow::int64 rhs_row_dilation,
    tensorflow::int64 rhs_col_dilation) {
  tensorflow::xla::EigenConvImpl(
      Eigen::DefaultDevice(), out, lhs, rhs, input_batch, input_rows,
      input_cols, input_channels, kernel_rows, kernel_cols, kernel_channels,
      kernel_filters, output_rows, output_cols, row_stride, col_stride,
      padding_top, padding_bottom, padding_left, padding_right,
      lhs_row_dilation, lhs_col_dilation, rhs_row_dilation, rhs_col_dilation);
}

TF_ATTRIBUTE_NO_SANITIZE_MEMORY void
__xla_cpu_runtime_EigenSingleThreadedConvF32(
    const void* run_options_ptr, float* out, float* lhs, float* rhs,
    tensorflow::int64 input_batch, tensorflow::int64 input_rows,
    tensorflow::int64 input_cols, tensorflow::int64 input_channels,
    tensorflow::int64 kernel_rows, tensorflow::int64 kernel_cols,
    tensorflow::int64 kernel_channels, tensorflow::int64 kernel_filters,
    tensorflow::int64 output_rows, tensorflow::int64 output_cols,
    tensorflow::int64 row_stride, tensorflow::int64 col_stride,
    tensorflow::int64 padding_top, tensorflow::int64 padding_bottom,
    tensorflow::int64 padding_left, tensorflow::int64 padding_right,
    tensorflow::int64 lhs_row_dilation, tensorflow::int64 lhs_col_dilation,
    tensorflow::int64 rhs_row_dilation, tensorflow::int64 rhs_col_dilation) {
  tensorflow::xla::EigenConvImpl(
      Eigen::DefaultDevice(), out, lhs, rhs, input_batch, input_rows,
      input_cols, input_channels, kernel_rows, kernel_cols, kernel_channels,
      kernel_filters, output_rows, output_cols, row_stride, col_stride,
      padding_top, padding_bottom, padding_left, padding_right,
      lhs_row_dilation, lhs_col_dilation, rhs_row_dilation, rhs_col_dilation);
}
