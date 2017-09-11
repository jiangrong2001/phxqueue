/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



#include "phxqueue/test/simplehandler.h"

#include <cinttypes>
#include <string>

#include "phxqueue/comm.h"


namespace phxqueue {

namespace test {


using namespace std;


comm::HandleResult SimpleHandler::Handle(const comm::proto::ConsumerContext &cc,
                                         comm::proto::QItem &item, string &uncompressed_buffer) {
    QLVerb("cc: sub_id %d store_id %d queue_id %d. item uin %" PRIu64,
           cc.sub_id(), cc.store_id(), cc.queue_id(), (uint64_t)item.meta().uin());
    return comm::HandleResult::RES_OK;
}


}  // namespace test

}  // namespace phxqueue

