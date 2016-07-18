/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef _NEWTMGR_BLE_H_
#define _NEWTMGR_BLE_H_

int
nmgr_ble_proc_mq_evt(struct os_event *ev);
int
nmgr_ble_gatt_svr_init(struct os_eventq *evq, struct ble_hs_cfg *cfg);
int
nmgr_ble_svc_register(void);

#endif /* _NETMGR_H */
